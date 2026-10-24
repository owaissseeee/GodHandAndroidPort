#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0027F8D8
// Address: 0x27f8d8 - 0x27f970
void func_0027F8D8_0x27f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F8D8_0x27f8d8");
#endif

    switch (ctx->pc) {
        case 0x27f930u: goto label_27f930;
        case 0x27f944u: goto label_27f944;
        default: break;
    }

    ctx->pc = 0x27f8d8u;

    // 0x27f8d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f8dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f8e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f8e8: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27f8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f8ec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F8ECu;
    {
        const bool branch_taken_0x27f8ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8ECu;
        // 0x27f8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8ec) {
            ctx->pc = 0x27F904u;
            goto label_27f904;
        }
    }
    ctx->pc = 0x27F8F4u;
    // 0x27f8f4: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27F8F4u;
    {
        const bool branch_taken_0x27f8f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f8f4) {
            ctx->pc = 0x27F93Cu;
            goto label_27f93c;
        }
    }
    ctx->pc = 0x27F8FCu;
    // 0x27f8fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x27F8FCu;
    {
        const bool branch_taken_0x27f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F8FCu;
        // 0x27f900: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8fc) {
            ctx->pc = 0x27F960u;
            goto label_27f960;
        }
    }
    ctx->pc = 0x27F904u;
label_27f904:
    // 0x27f904: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f90c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f910: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f914: 0x8c450064  lw          $a1, 0x64($v0)
    ctx->pc = 0x27f914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x27f918: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f91c: 0x8c460068  lw          $a2, 0x68($v0)
    ctx->pc = 0x27f91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x27f920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f924: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f928: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F928u;
    SET_GPR_U32(ctx, 31, 0x27F930u);
    ctx->pc = 0x27F92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F928u;
    // 0x27f92c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F928u, 0x27F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F930u;
label_27f930:
    // 0x27f930: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27f930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f938: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27f938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27f93c:
    // 0x27f93c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27F93Cu;
    SET_GPR_U32(ctx, 31, 0x27F944u);
    ctx->pc = 0x27F940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F93Cu;
    // 0x27f940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27F93Cu, 0x27F944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F944u;
label_27f944:
    // 0x27f944: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27F944u;
    {
        const bool branch_taken_0x27f944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f944) {
            ctx->pc = 0x27F948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F944u;
            // 0x27f948: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F960u;
            goto label_27f960;
        }
    }
    ctx->pc = 0x27F94Cu;
    // 0x27f94c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x27f94cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f950: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x27f950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f954: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x27f954u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f958: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x27f958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27f95c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f960:
    // 0x27f960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f964: 0x3e00008  jr          $ra
    ctx->pc = 0x27F964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F964u;
        // 0x27f968: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F96Cu;
    // 0x27f96c: 0x0  nop
    ctx->pc = 0x27f96cu;
    // NOP
    ctx->pc = 0x27f970u;
}

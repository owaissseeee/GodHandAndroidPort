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

// Function: func_0027F570
// Address: 0x27f570 - 0x27f5f0
void func_0027F570_0x27f570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027F570_0x27f570");
#endif

    switch (ctx->pc) {
        case 0x27f5c8u: goto label_27f5c8;
        case 0x27f5dcu: goto label_27f5dc;
        default: break;
    }

    ctx->pc = 0x27f570u;

    // 0x27f570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27f570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27f574: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27f574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27f578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27f578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27f57c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27f57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f580: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27f580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f584: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F584u;
    {
        const bool branch_taken_0x27f584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F584u;
        // 0x27f588: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f584) {
            ctx->pc = 0x27F59Cu;
            goto label_27f59c;
        }
    }
    ctx->pc = 0x27F58Cu;
    // 0x27f58c: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27F58Cu;
    {
        const bool branch_taken_0x27f58c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27f58c) {
            ctx->pc = 0x27F5D4u;
            goto label_27f5d4;
        }
    }
    ctx->pc = 0x27F594u;
    // 0x27f594: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27F594u;
    {
        const bool branch_taken_0x27f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F594u;
        // 0x27f598: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f594) {
            ctx->pc = 0x27F5E0u;
            goto label_27f5e0;
        }
    }
    ctx->pc = 0x27F59Cu;
label_27f59c:
    // 0x27f59c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x27f5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27f5a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f5a8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27f5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27f5ac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x27f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27f5b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27f5b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5b4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x27f5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27f5b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27f5b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5bc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27f5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27f5c0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27F5C0u;
    SET_GPR_U32(ctx, 31, 0x27F5C8u);
    ctx->pc = 0x27F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5C0u;
    // 0x27f5c4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27F5C0u, 0x27F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5C8u;
label_27f5c8:
    // 0x27f5c8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27f5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27f5cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27f5d0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27f5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27f5d4:
    // 0x27f5d4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27F5D4u;
    SET_GPR_U32(ctx, 31, 0x27F5DCu);
    ctx->pc = 0x27F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F5D4u;
    // 0x27f5d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27F5D4u, 0x27F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5DCu;
label_27f5dc:
    // 0x27f5dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27f5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27f5e0:
    // 0x27f5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27f5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x27F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F5E4u;
        // 0x27f5e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F5ECu;
    // 0x27f5ec: 0x0  nop
    ctx->pc = 0x27f5ecu;
    // NOP
    ctx->pc = 0x27f5f0u;
}

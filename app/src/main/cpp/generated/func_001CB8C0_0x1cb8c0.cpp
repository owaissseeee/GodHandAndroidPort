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

// Function: func_001CB8C0
// Address: 0x1cb8c0 - 0x1cb990
void func_001CB8C0_0x1cb8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CB8C0_0x1cb8c0");
#endif

    switch (ctx->pc) {
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb964u: goto label_1cb964;
        default: break;
    }

    ctx->pc = 0x1cb8c0u;

    // 0x1cb8c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cb8c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8d0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cb8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cb8d4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CB8D4u;
    SET_GPR_U32(ctx, 31, 0x1CB8DCu);
    ctx->pc = 0x1CB8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8D4u;
    // 0x1cb8d8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CB8D4u, 0x1CB8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8DCu;
label_1cb8dc:
    // 0x1cb8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8e0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1cb8e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb8e4: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1CB8E4u;
    SET_GPR_U32(ctx, 31, 0x1CB8ECu);
    ctx->pc = 0x1CB8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8E4u;
    // 0x1cb8e8: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1CB8E4u, 0x1CB8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8ECu;
label_1cb8ec:
    // 0x1cb8ec: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cb8ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb8f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB8F0u;
    {
        const bool branch_taken_0x1cb8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8F0u;
        // 0x1cb8f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8f0) {
            ctx->pc = 0x1CB908u;
            goto label_1cb908;
        }
    }
    ctx->pc = 0x1CB8F8u;
    // 0x1cb8f8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB8F8u;
    {
        const bool branch_taken_0x1cb8f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb8f8) {
            ctx->pc = 0x1CB95Cu;
            goto label_1cb95c;
        }
    }
    ctx->pc = 0x1CB900u;
    // 0x1cb900: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CB900u;
    {
        const bool branch_taken_0x1cb900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB900u;
        // 0x1cb904: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb900) {
            ctx->pc = 0x1CB980u;
            goto label_1cb980;
        }
    }
    ctx->pc = 0x1CB908u;
label_1cb908:
    // 0x1cb908: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb910: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb918: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1cb918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb91c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb924: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb928: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB928u;
    SET_GPR_U32(ctx, 31, 0x1CB930u);
    ctx->pc = 0x1CB92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB928u;
    // 0x1cb92c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB928u, 0x1CB930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB930u;
label_1cb930:
    // 0x1cb930: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x1cb934: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x1cb934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x1cb938: 0x240500b8  addiu       $a1, $zero, 0xB8
    ctx->pc = 0x1cb938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1cb93c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cb93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb944: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1cb944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb948: 0xc0c194a  jal         func_306528
    ctx->pc = 0x1CB948u;
    SET_GPR_U32(ctx, 31, 0x1CB950u);
    ctx->pc = 0x1CB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB948u;
    // 0x1cb94c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1CB948u, 0x1CB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB950u;
label_1cb950:
    // 0x1cb950: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cb950u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cb954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cb958: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x1cb958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
label_1cb95c:
    // 0x1cb95c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB95Cu;
    SET_GPR_U32(ctx, 31, 0x1CB964u);
    ctx->pc = 0x1CB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB95Cu;
    // 0x1cb960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB95Cu, 0x1CB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB964u;
label_1cb964:
    // 0x1cb964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB964u;
    {
        const bool branch_taken_0x1cb964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB964u;
        // 0x1cb968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb964) {
            ctx->pc = 0x1CB97Cu;
            goto label_1cb97c;
        }
    }
    ctx->pc = 0x1CB96Cu;
    // 0x1cb96c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1cb96cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb970: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x1cb970u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb974: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x1cb974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1cb978: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1cb978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1cb97c:
    // 0x1cb97c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb980:
    // 0x1cb980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb984: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB984u;
        // 0x1cb988: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB98Cu;
    // 0x1cb98c: 0x0  nop
    ctx->pc = 0x1cb98cu;
    // NOP
    ctx->pc = 0x1cb990u;
}

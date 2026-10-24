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

// Function: func_0035F970
// Address: 0x35f970 - 0x35fa88
void func_0035F970_0x35f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F970_0x35f970");
#endif

    switch (ctx->pc) {
        case 0x35f9a0u: goto label_35f9a0;
        case 0x35f9bcu: goto label_35f9bc;
        case 0x35f9e0u: goto label_35f9e0;
        case 0x35f9f0u: goto label_35f9f0;
        case 0x35f9f8u: goto label_35f9f8;
        case 0x35fa14u: goto label_35fa14;
        case 0x35fa3cu: goto label_35fa3c;
        case 0x35fa44u: goto label_35fa44;
        default: break;
    }

    ctx->pc = 0x35f970u;

    // 0x35f970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f978: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x35f978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f980: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x35f980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f988: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35f988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35f98c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35f98cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f990: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35f994: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35f998: 0xc0d7ea2  jal         func_35FA88
    ctx->pc = 0x35F998u;
    SET_GPR_U32(ctx, 31, 0x35F9A0u);
    ctx->pc = 0x35F99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F998u;
    // 0x35f99c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FA88u, 0x35F998u, 0x35F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9A0u;
label_35f9a0:
    // 0x35f9a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35f9a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35f9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9ac: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x35F9ACu;
    {
        const bool branch_taken_0x35f9ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9ACu;
        // 0x35f9b0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9ac) {
            ctx->pc = 0x35FA64u;
            goto label_35fa64;
        }
    }
    ctx->pc = 0x35F9B4u;
    // 0x35f9b4: 0xc0d7ede  jal         func_35FB78
    ctx->pc = 0x35F9B4u;
    SET_GPR_U32(ctx, 31, 0x35F9BCu);
    ctx->pc = 0x35FB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FB78u, 0x35F9B4u, 0x35F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9BCu;
label_35f9bc:
    // 0x35f9bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f9c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35f9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9c8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35F9C8u;
    {
        const bool branch_taken_0x35f9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x35F9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9C8u;
        // 0x35f9cc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9c8) {
            ctx->pc = 0x35F9E8u;
            goto label_35f9e8;
        }
    }
    ctx->pc = 0x35F9D0u;
    // 0x35f9d0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35f9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x35f9d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f9d8: 0xc0d7ef6  jal         func_35FBD8
    ctx->pc = 0x35F9D8u;
    SET_GPR_U32(ctx, 31, 0x35F9E0u);
    ctx->pc = 0x35F9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9D8u;
    // 0x35f9dc: 0x24c69fe0  addiu       $a2, $a2, -0x6020 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35F9D8u, 0x35F9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9E0u;
label_35f9e0:
    // 0x35f9e0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x35F9E0u;
    {
        const bool branch_taken_0x35f9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F9E0u;
        // 0x35f9e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f9e0) {
            ctx->pc = 0x35FA64u;
            goto label_35fa64;
        }
    }
    ctx->pc = 0x35F9E8u;
label_35f9e8:
    // 0x35f9e8: 0xc0d7eb6  jal         func_35FAD8
    ctx->pc = 0x35F9E8u;
    SET_GPR_U32(ctx, 31, 0x35F9F0u);
    ctx->pc = 0x35F9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F9E8u;
    // 0x35f9ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FAD8u, 0x35F9E8u, 0x35F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9F0u;
label_35f9f0:
    // 0x35f9f0: 0xc0d7fbc  jal         func_35FEF0
    ctx->pc = 0x35F9F0u;
    SET_GPR_U32(ctx, 31, 0x35F9F8u);
    ctx->pc = 0x35FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FEF0u, 0x35F9F0u, 0x35F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F9F8u;
label_35f9f8:
    // 0x35f9f8: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35f9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x35f9fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35f9fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa00: 0x24c6a010  addiu       $a2, $a2, -0x5FF0
    ctx->pc = 0x35fa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942736));
    // 0x35fa04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35FA04u;
    {
        const bool branch_taken_0x35fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA04u;
        // 0x35fa08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa04) {
            ctx->pc = 0x35FA34u;
            goto label_35fa34;
        }
    }
    ctx->pc = 0x35FA0Cu;
    // 0x35fa0c: 0xc0db2ac  jal         func_36CAB0
    ctx->pc = 0x35FA0Cu;
    SET_GPR_U32(ctx, 31, 0x35FA14u);
    ctx->pc = 0x35FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FA0Cu;
    // 0x35fa10: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CAB0u, 0x35FA0Cu, 0x35FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA14u;
label_35fa14:
    // 0x35fa14: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x35fa14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x35fa18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35fa18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa1c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35fa20: 0x2448e338  addiu       $t0, $v0, -0x1CC8
    ctx->pc = 0x35fa20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959928));
    // 0x35fa24: 0x24c6a030  addiu       $a2, $a2, -0x5FD0
    ctx->pc = 0x35fa24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942768));
    // 0x35fa28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35fa28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa2c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x35FA2Cu;
    {
        const bool branch_taken_0x35fa2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA2Cu;
        // 0x35fa30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa2c) {
            ctx->pc = 0x35FA50u;
            goto label_35fa50;
        }
    }
    ctx->pc = 0x35FA34u;
label_35fa34:
    // 0x35fa34: 0xc0d7ef6  jal         func_35FBD8
    ctx->pc = 0x35FA34u;
    SET_GPR_U32(ctx, 31, 0x35FA3Cu);
    ctx->pc = 0x35FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBD8u, 0x35FA34u, 0x35FA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA3Cu;
label_35fa3c:
    // 0x35fa3c: 0xc0d7ee2  jal         func_35FB88
    ctx->pc = 0x35FA3Cu;
    SET_GPR_U32(ctx, 31, 0x35FA44u);
    ctx->pc = 0x35FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FA3Cu;
    // 0x35fa40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FB88u, 0x35FA3Cu, 0x35FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FA44u;
label_35fa44:
    // 0x35fa44: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35FA44u;
    {
        const bool branch_taken_0x35fa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35FA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA44u;
        // 0x35fa48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fa44) {
            ctx->pc = 0x35FA64u;
            goto label_35fa64;
        }
    }
    ctx->pc = 0x35FA4Cu;
    // 0x35fa4c: 0x0  nop
    ctx->pc = 0x35fa4cu;
    // NOP
label_35fa50:
    // 0x35fa50: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x35fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35fa54: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x35fa54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fa58: 0xae470030  sw          $a3, 0x30($s2)
    ctx->pc = 0x35fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 7));
    // 0x35fa5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35fa60: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x35fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_35fa64:
    // 0x35fa64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35fa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fa68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35fa68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35fa6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35fa6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fa70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35fa70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35fa74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35fa74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fa78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x35FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FA7Cu;
        // 0x35fa80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FA84u;
    // 0x35fa84: 0x0  nop
    ctx->pc = 0x35fa84u;
    // NOP
    ctx->pc = 0x35fa88u;
}

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

// Function: func_00323AA0
// Address: 0x323aa0 - 0x323b58
void func_00323AA0_0x323aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323AA0_0x323aa0");
#endif

    switch (ctx->pc) {
        case 0x323accu: goto label_323acc;
        case 0x323ae8u: goto label_323ae8;
        case 0x323b00u: goto label_323b00;
        case 0x323b08u: goto label_323b08;
        case 0x323b18u: goto label_323b18;
        default: break;
    }

    ctx->pc = 0x323aa0u;

    // 0x323aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323aa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x323ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323ab4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x323ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323ab8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x323ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323ac4: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x323AC4u;
    SET_GPR_U32(ctx, 31, 0x323ACCu);
    ctx->pc = 0x323AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AC4u;
    // 0x323ac8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323AC4u, 0x323ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323ACCu;
label_323acc:
    // 0x323acc: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x323ACCu;
    {
        const bool branch_taken_0x323acc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x323AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323ACCu;
        // 0x323ad0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323acc) {
            ctx->pc = 0x323B40u;
            goto label_323b40;
        }
    }
    ctx->pc = 0x323AD4u;
    // 0x323ad4: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x323ad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x323ad8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x323AD8u;
    {
        const bool branch_taken_0x323ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x323ad8) {
            ctx->pc = 0x323ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323AD8u;
            // 0x323adc: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323AECu;
            goto label_323aec;
        }
    }
    ctx->pc = 0x323AE0u;
    // 0x323ae0: 0xc0c8fc6  jal         func_323F18
    ctx->pc = 0x323AE0u;
    SET_GPR_U32(ctx, 31, 0x323AE8u);
    ctx->pc = 0x323AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AE0u;
    // 0x323ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323F18u, 0x323AE0u, 0x323AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323AE8u;
label_323ae8:
    // 0x323ae8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x323ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_323aec:
    // 0x323aec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x323AECu;
    {
        const bool branch_taken_0x323aec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x323AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AECu;
        // 0x323af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323aec) {
            ctx->pc = 0x323B08u;
            goto label_323b08;
        }
    }
    ctx->pc = 0x323AF4u;
    // 0x323af4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x323af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x323af8: 0xc0ca006  jal         func_328018
    ctx->pc = 0x323AF8u;
    SET_GPR_U32(ctx, 31, 0x323B00u);
    ctx->pc = 0x323AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AF8u;
    // 0x323afc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328018u, 0x323AF8u, 0x323B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B00u;
label_323b00:
    // 0x323b00: 0xc0c9f64  jal         func_327D90
    ctx->pc = 0x323B00u;
    SET_GPR_U32(ctx, 31, 0x323B08u);
    ctx->pc = 0x323B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B00u;
    // 0x323b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D90u, 0x323B00u, 0x323B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B08u;
label_323b08:
    // 0x323b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x323b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b10: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x323B10u;
    SET_GPR_U32(ctx, 31, 0x323B18u);
    ctx->pc = 0x323B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B10u;
    // 0x323b14: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x323B10u, 0x323B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323B18u;
label_323b18:
    // 0x323b18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x323b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x323b1c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x323b1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323b30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x323b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323b34: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x323b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323b38: 0x80c8a30  j           func_3228C0
    ctx->pc = 0x323B38u;
    ctx->pc = 0x323B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323B38u;
    // 0x323b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323B38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x323B40u;
label_323b40:
    // 0x323b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x323B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323B4Cu;
        // 0x323b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323B54u;
    // 0x323b54: 0x0  nop
    ctx->pc = 0x323b54u;
    // NOP
    ctx->pc = 0x323b58u;
}

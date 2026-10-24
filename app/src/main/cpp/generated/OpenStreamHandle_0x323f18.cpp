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

// Function: OpenStreamHandle
// Address: 0x323f18 - 0x324008
void OpenStreamHandle_0x323f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("OpenStreamHandle_0x323f18");
#endif

    switch (ctx->pc) {
        case 0x323f44u: goto label_323f44;
        case 0x323f58u: goto label_323f58;
        case 0x323f94u: goto label_323f94;
        case 0x323fa8u: goto label_323fa8;
        case 0x323fb0u: goto label_323fb0;
        case 0x323fb8u: goto label_323fb8;
        case 0x323fccu: goto label_323fcc;
        case 0x323fd4u: goto label_323fd4;
        case 0x323fecu: goto label_323fec;
        default: break;
    }

    ctx->pc = 0x323f18u;

    // 0x323f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323f1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x323f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x323f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323f2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x323f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323f30: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x323f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x323f34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x323f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x323f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x323f3c: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x323F3Cu;
    SET_GPR_U32(ctx, 31, 0x323F44u);
    ctx->pc = 0x323F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F3Cu;
    // 0x323f40: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323F3Cu, 0x323F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F44u;
label_323f44:
    // 0x323f44: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x323f48: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323F48u;
    {
        const bool branch_taken_0x323f48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x323F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F48u;
        // 0x323f4c: 0x24841800  addiu       $a0, $a0, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f48) {
            ctx->pc = 0x323F60u;
            goto label_323f60;
        }
    }
    ctx->pc = 0x323F50u;
    // 0x323f50: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x323F50u;
    SET_GPR_U32(ctx, 31, 0x323F58u);
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323F50u, 0x323F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F58u;
label_323f58:
    // 0x323f58: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x323F58u;
    {
        const bool branch_taken_0x323f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F58u;
        // 0x323f5c: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f58) {
            ctx->pc = 0x323FF0u;
            goto label_323ff0;
        }
    }
    ctx->pc = 0x323F60u;
label_323f60:
    // 0x323f60: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x323f60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x323f64: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x323f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323f68: 0x10710020  beq         $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x323F68u;
    {
        const bool branch_taken_0x323f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x323F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F68u;
        // 0x323f6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f68) {
            ctx->pc = 0x323FECu;
            goto label_323fec;
        }
    }
    ctx->pc = 0x323F70u;
    // 0x323f70: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323F70u;
    {
        const bool branch_taken_0x323f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323f70) {
            ctx->pc = 0x323F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323F70u;
            // 0x323f74: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323F80u;
            goto label_323f80;
        }
    }
    ctx->pc = 0x323F78u;
    // 0x323f78: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x323F78u;
    {
        const bool branch_taken_0x323f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F78u;
        // 0x323f7c: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f78) {
            ctx->pc = 0x323FECu;
            goto label_323fec;
        }
    }
    ctx->pc = 0x323F80u;
label_323f80:
    // 0x323f80: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x323F80u;
    {
        const bool branch_taken_0x323f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x323f80) {
            ctx->pc = 0x323FA0u;
            goto label_323fa0;
        }
    }
    ctx->pc = 0x323F88u;
    // 0x323f88: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x323f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x323f8c: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x323F8Cu;
    SET_GPR_U32(ctx, 31, 0x323F94u);
    ctx->pc = 0x323F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323F8Cu;
    // 0x323f90: 0x24841828  addiu       $a0, $a0, 0x1828 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x323F8Cu, 0x323F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323F94u;
label_323f94:
    // 0x323f94: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x323F94u;
    {
        const bool branch_taken_0x323f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323F94u;
        // 0x323f98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323f94) {
            ctx->pc = 0x323FF0u;
            goto label_323ff0;
        }
    }
    ctx->pc = 0x323F9Cu;
    // 0x323f9c: 0x0  nop
    ctx->pc = 0x323f9cu;
    // NOP
label_323fa0:
    // 0x323fa0: 0xc0ca0da  jal         func_328368
    ctx->pc = 0x323FA0u;
    SET_GPR_U32(ctx, 31, 0x323FA8u);
    ctx->pc = 0x328368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328368u, 0x323FA0u, 0x323FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FA8u;
label_323fa8:
    // 0x323fa8: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x323FA8u;
    SET_GPR_U32(ctx, 31, 0x323FB0u);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x323FA8u, 0x323FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FB0u;
label_323fb0:
    // 0x323fb0: 0xc0ca050  jal         func_328140
    ctx->pc = 0x323FB0u;
    SET_GPR_U32(ctx, 31, 0x323FB8u);
    ctx->pc = 0x323FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323FB0u;
    // 0x323fb4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328140u, 0x323FB0u, 0x323FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FB8u;
label_323fb8:
    // 0x323fb8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x323fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x323fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x323fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323fc4: 0xc0c8e80  jal         func_323A00
    ctx->pc = 0x323FC4u;
    SET_GPR_U32(ctx, 31, 0x323FCCu);
    ctx->pc = 0x323FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323FC4u;
    // 0x323fc8: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A00u, 0x323FC4u, 0x323FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FCCu;
label_323fcc:
    // 0x323fcc: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x323FCCu;
    SET_GPR_U32(ctx, 31, 0x323FD4u);
    ctx->pc = 0x323FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323FCCu;
    // 0x323fd0: 0xa2110001  sb          $s1, 0x1($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x323FCCu, 0x323FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FD4u;
label_323fd4:
    // 0x323fd4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x323fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x323fd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323fdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x323fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323fe0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x323fe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323fe4: 0xc0c8a30  jal         func_3228C0
    ctx->pc = 0x323FE4u;
    SET_GPR_U32(ctx, 31, 0x323FECu);
    ctx->pc = 0x323FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323FE4u;
    // 0x323fe8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3228C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3228C0u, 0x323FE4u, 0x323FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323FECu;
label_323fec:
    // 0x323fec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x323fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_323ff0:
    // 0x323ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x323ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x323ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x323FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323FFCu;
        // 0x324000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324004u;
    // 0x324004: 0x0  nop
    ctx->pc = 0x324004u;
    // NOP
    ctx->pc = 0x324008u;
}

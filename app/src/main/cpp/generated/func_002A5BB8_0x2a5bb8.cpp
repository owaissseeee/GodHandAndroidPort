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

// Function: func_002A5BB8
// Address: 0x2a5bb8 - 0x2a5d40
void func_002A5BB8_0x2a5bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A5BB8_0x2a5bb8");
#endif

    switch (ctx->pc) {
        case 0x2a5bf8u: goto label_2a5bf8;
        case 0x2a5c00u: goto label_2a5c00;
        case 0x2a5c38u: goto label_2a5c38;
        case 0x2a5c50u: goto label_2a5c50;
        case 0x2a5c74u: goto label_2a5c74;
        case 0x2a5c80u: goto label_2a5c80;
        case 0x2a5c8cu: goto label_2a5c8c;
        case 0x2a5c98u: goto label_2a5c98;
        case 0x2a5ca4u: goto label_2a5ca4;
        case 0x2a5cb0u: goto label_2a5cb0;
        case 0x2a5cbcu: goto label_2a5cbc;
        case 0x2a5cc8u: goto label_2a5cc8;
        case 0x2a5cd4u: goto label_2a5cd4;
        case 0x2a5ce0u: goto label_2a5ce0;
        case 0x2a5cecu: goto label_2a5cec;
        case 0x2a5cfcu: goto label_2a5cfc;
        case 0x2a5d10u: goto label_2a5d10;
        case 0x2a5d1cu: goto label_2a5d1c;
        default: break;
    }

    ctx->pc = 0x2a5bb8u;

    // 0x2a5bb8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2a5bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2a5bbc: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a5bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a5bc0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x2a5bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x2a5bc4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2a5bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2a5bc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a5bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a5bcc: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x2a5bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5bd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2a5bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2a5bd4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2a5bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2a5bd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2a5bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2a5bdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a5bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5be0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a5be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a5be4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A5BE4u;
    {
        const bool branch_taken_0x2a5be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5BE4u;
        // 0x2a5be8: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5be4) {
            ctx->pc = 0x2A5C10u;
            goto label_2a5c10;
        }
    }
    ctx->pc = 0x2A5BECu;
    // 0x2a5bec: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2a5becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2a5bf0: 0x24502c00  addiu       $s0, $v0, 0x2C00
    ctx->pc = 0x2a5bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x2a5bf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2a5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x752C04u));
label_2a5bf8:
    // 0x2a5bf8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2A5BF8u;
    SET_GPR_U32(ctx, 31, 0x2A5C00u);
    ctx->pc = 0x2A5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5BF8u;
    // 0x2a5bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2A5BF8u, 0x2A5C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C00u;
label_2a5c00:
    // 0x2a5c00: 0x8e227a24  lw          $v0, 0x7A24($s1)
    ctx->pc = 0x2a5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31268)));
    // 0x2a5c04: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2a5c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2a5c08: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A5C08u;
    {
        const bool branch_taken_0x2a5c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5c08) {
            ctx->pc = 0x2A5C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5C08u;
            // 0x2a5c0c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a5bf8;
        }
    }
    ctx->pc = 0x2A5C10u;
label_2a5c10:
    // 0x2a5c10: 0x3c110074  lui         $s1, 0x74
    ctx->pc = 0x2a5c10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
    // 0x2a5c14: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x2a5c14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x2a5c18: 0x263174a0  addiu       $s1, $s1, 0x74A0
    ctx->pc = 0x2a5c18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 29856));
    // 0x2a5c1c: 0x261064a0  addiu       $s0, $s0, 0x64A0
    ctx->pc = 0x2a5c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25760));
    // 0x2a5c20: 0x8e220550  lw          $v0, 0x550($s1)
    ctx->pc = 0x2a5c20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7479F0u));
    // 0x2a5c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a5c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5c2c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2a5c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a5c30: 0xc054304  jal         func_150C10
    ctx->pc = 0x2A5C30u;
    SET_GPR_U32(ctx, 31, 0x2A5C38u);
    ctx->pc = 0x2A5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C30u;
    // 0x2a5c34: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C10u, 0x2A5C30u, 0x2A5C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C38u;
label_2a5c38:
    // 0x2a5c38: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x2a5c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
    // 0x2a5c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a5c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5c44: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x2a5c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a5c48: 0xc054304  jal         func_150C10
    ctx->pc = 0x2A5C48u;
    SET_GPR_U32(ctx, 31, 0x2A5C50u);
    ctx->pc = 0x2A5C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C48u;
    // 0x2a5c4c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150C10u, 0x2A5C48u, 0x2A5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C50u;
label_2a5c50:
    // 0x2a5c50: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a5c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a5c54: 0x8e422388  lw          $v0, 0x2388($s2)
    ctx->pc = 0x2a5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9096)));
    // 0x2a5c58: 0x8c642384  lw          $a0, 0x2384($v1)
    ctx->pc = 0x2a5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2384u));
    // 0x2a5c5c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2a5c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2a5c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5c64: 0x24a5ad58  addiu       $a1, $a1, -0x52A8
    ctx->pc = 0x2a5c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946136));
    // 0x2a5c68: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2a5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a5c6c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2A5C6Cu;
    SET_GPR_U32(ctx, 31, 0x2A5C74u);
    ctx->pc = 0x2A5C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C6Cu;
    // 0x2a5c70: 0x8e240558  lw          $a0, 0x558($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1368)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2A5C6Cu, 0x2A5C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C74u;
label_2a5c74:
    // 0x2a5c74: 0x8e442388  lw          $a0, 0x2388($s2)
    ctx->pc = 0x2a5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9096)));
    // 0x2a5c78: 0xc0ab31c  jal         func_2ACC70
    ctx->pc = 0x2A5C78u;
    SET_GPR_U32(ctx, 31, 0x2A5C80u);
    ctx->pc = 0x2A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C78u;
    // 0x2a5c7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC70u, 0x2A5C78u, 0x2A5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C80u;
label_2a5c80:
    // 0x2a5c80: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5c84: 0xc0afe1e  jal         func_2BF878
    ctx->pc = 0x2A5C84u;
    SET_GPR_U32(ctx, 31, 0x2A5C8Cu);
    ctx->pc = 0x2A5C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C84u;
    // 0x2a5c88: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF878u, 0x2A5C84u, 0x2A5C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C8Cu;
label_2a5c8c:
    // 0x2a5c8c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2a5c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2a5c90: 0xc0af6de  jal         func_2BDB78
    ctx->pc = 0x2A5C90u;
    SET_GPR_U32(ctx, 31, 0x2A5C98u);
    ctx->pc = 0x2A5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C90u;
    // 0x2a5c94: 0x248480e0  addiu       $a0, $a0, -0x7F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDB78u, 0x2A5C90u, 0x2A5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5C98u;
label_2a5c98:
    // 0x2a5c98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5c9c: 0xc0a925c  jal         func_2A4970
    ctx->pc = 0x2A5C9Cu;
    SET_GPR_U32(ctx, 31, 0x2A5CA4u);
    ctx->pc = 0x2A5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5C9Cu;
    // 0x2a5ca0: 0x8c442380  lw          $a0, 0x2380($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9088)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4970u, 0x2A5C9Cu, 0x2A5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CA4u;
label_2a5ca4:
    // 0x2a5ca4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5ca8: 0xc0aba64  jal         func_2AE990
    ctx->pc = 0x2A5CA8u;
    SET_GPR_U32(ctx, 31, 0x2A5CB0u);
    ctx->pc = 0x2A5CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CA8u;
    // 0x2a5cac: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE990u, 0x2A5CA8u, 0x2A5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CB0u;
label_2a5cb0:
    // 0x2a5cb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5cb4: 0xc057f66  jal         func_15FD98
    ctx->pc = 0x2A5CB4u;
    SET_GPR_U32(ctx, 31, 0x2A5CBCu);
    ctx->pc = 0x2A5CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CB4u;
    // 0x2a5cb8: 0x8c44d930  lw          $a0, -0x26D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FD98u, 0x2A5CB4u, 0x2A5CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CBCu;
label_2a5cbc:
    // 0x2a5cbc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a5cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a5cc0: 0xc0a58ac  jal         func_2962B0
    ctx->pc = 0x2A5CC0u;
    SET_GPR_U32(ctx, 31, 0x2A5CC8u);
    ctx->pc = 0x2A5CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CC0u;
    // 0x2a5cc4: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962B0u, 0x2A5CC0u, 0x2A5CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CC8u;
label_2a5cc8:
    // 0x2a5cc8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5ccc: 0xc050322  jal         func_140C88
    ctx->pc = 0x2A5CCCu;
    SET_GPR_U32(ctx, 31, 0x2A5CD4u);
    ctx->pc = 0x2A5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CCCu;
    // 0x2a5cd0: 0x8c44d6e8  lw          $a0, -0x2918($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140C88u, 0x2A5CCCu, 0x2A5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CD4u;
label_2a5cd4:
    // 0x2a5cd4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a5cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a5cd8: 0xc07ff80  jal         func_1FFE00
    ctx->pc = 0x2A5CD8u;
    SET_GPR_U32(ctx, 31, 0x2A5CE0u);
    ctx->pc = 0x2A5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CD8u;
    // 0x2a5cdc: 0x24843ec0  addiu       $a0, $a0, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE00u, 0x2A5CD8u, 0x2A5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CE0u;
label_2a5ce0:
    // 0x2a5ce0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2a5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2a5ce4: 0xc0afc4c  jal         func_2BF130
    ctx->pc = 0x2A5CE4u;
    SET_GPR_U32(ctx, 31, 0x2A5CECu);
    ctx->pc = 0x2A5CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CE4u;
    // 0x2a5ce8: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF130u, 0x2A5CE4u, 0x2A5CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CECu;
label_2a5cec:
    // 0x2a5cec: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a5cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a5cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5cf4: 0xc07f9b2  jal         func_1FE6C8
    ctx->pc = 0x2A5CF4u;
    SET_GPR_U32(ctx, 31, 0x2A5CFCu);
    ctx->pc = 0x2A5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5CF4u;
    // 0x2a5cf8: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE6C8u, 0x2A5CF4u, 0x2A5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5CFCu;
label_2a5cfc:
    // 0x2a5cfc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2a5cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2a5d00: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x2a5d00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x2a5d04: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x2a5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x2a5d08: 0xc07f9b2  jal         func_1FE6C8
    ctx->pc = 0x2A5D08u;
    SET_GPR_U32(ctx, 31, 0x2A5D10u);
    ctx->pc = 0x2A5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D08u;
    // 0x2a5d0c: 0x24a54220  addiu       $a1, $a1, 0x4220 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE6C8u, 0x2A5D08u, 0x2A5D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D10u;
label_2a5d10:
    // 0x2a5d10: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2a5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2a5d14: 0xc0b23be  jal         func_2C8EF8
    ctx->pc = 0x2A5D14u;
    SET_GPR_U32(ctx, 31, 0x2A5D1Cu);
    ctx->pc = 0x2A5D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5D14u;
    // 0x2a5d18: 0x2484ec58  addiu       $a0, $a0, -0x13A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8EF8u, 0x2A5D14u, 0x2A5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5D1Cu;
label_2a5d1c:
    // 0x2a5d1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a5d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a5d20: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2a5d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a5d24: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x2a5d24u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a5d28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2a5d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a5d2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a5d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a5d30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2a5d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5D38u;
        // 0x2a5d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5D40u;
}

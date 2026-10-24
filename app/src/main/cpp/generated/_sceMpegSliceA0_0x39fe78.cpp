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

// Function: _sceMpegSliceA0
// Address: 0x39fe78 - 0x3a0018
void _sceMpegSliceA0_0x39fe78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceMpegSliceA0_0x39fe78");
#endif

    switch (ctx->pc) {
        case 0x39feb0u: goto label_39feb0;
        case 0x39feb8u: goto label_39feb8;
        case 0x39fec0u: goto label_39fec0;
        case 0x39feccu: goto label_39fecc;
        case 0x39fee8u: goto label_39fee8;
        case 0x39ff0cu: goto label_39ff0c;
        case 0x39ff1cu: goto label_39ff1c;
        case 0x39ff28u: goto label_39ff28;
        case 0x39ff38u: goto label_39ff38;
        case 0x39ff48u: goto label_39ff48;
        case 0x39ff54u: goto label_39ff54;
        case 0x39ff60u: goto label_39ff60;
        case 0x39ff68u: goto label_39ff68;
        case 0x39ff74u: goto label_39ff74;
        case 0x39ff84u: goto label_39ff84;
        case 0x39ffa4u: goto label_39ffa4;
        default: break;
    }

    ctx->pc = 0x39fe78u;

    // 0x39fe78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x39fe78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x39fe7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39fe7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39fe80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x39fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x39fe84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39fe84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39fe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39fe8c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x39fe8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39fe94: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x39fe94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fe98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39fe98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39fe9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x39fe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x39fea0: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x39fea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fea4: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x39fea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x39fea8: 0xc0e83e2  jal         func_3A0F88
    ctx->pc = 0x39FEA8u;
    SET_GPR_U32(ctx, 31, 0x39FEB0u);
    ctx->pc = 0x39FEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEA8u;
    // 0x39feac: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F88u, 0x39FEA8u, 0x39FEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEB0u;
label_39feb0:
    // 0x39feb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39FEB0u;
    {
        const bool branch_taken_0x39feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEB0u;
        // 0x39feb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39feb0) {
            ctx->pc = 0x39FEC4u;
            goto label_39fec4;
        }
    }
    ctx->pc = 0x39FEB8u;
label_39feb8:
    // 0x39feb8: 0xc0e8388  jal         func_3A0E20
    ctx->pc = 0x39FEB8u;
    SET_GPR_U32(ctx, 31, 0x39FEC0u);
    ctx->pc = 0x39FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEB8u;
    // 0x39febc: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x39FEB8u, 0x39FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEC0u;
label_39fec0:
    // 0x39fec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39fec4:
    // 0x39fec4: 0xc0e7ae4  jal         func_39EB90
    ctx->pc = 0x39FEC4u;
    SET_GPR_U32(ctx, 31, 0x39FECCu);
    ctx->pc = 0x39FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEC4u;
    // 0x39fec8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x39FEC4u, 0x39FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FECCu;
label_39fecc:
    // 0x39fecc: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x39FECCu;
    {
        const bool branch_taken_0x39fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x39FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FECCu;
        // 0x39fed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fecc) {
            ctx->pc = 0x39FEE0u;
            goto label_39fee0;
        }
    }
    ctx->pc = 0x39FED4u;
    // 0x39fed4: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x39fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39fed8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x39FED8u;
    {
        const bool branch_taken_0x39fed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fed8) {
            ctx->pc = 0x39FEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39feb8;
        }
    }
    ctx->pc = 0x39FEE0u;
label_39fee0:
    // 0x39fee0: 0xc0e7ae4  jal         func_39EB90
    ctx->pc = 0x39FEE0u;
    SET_GPR_U32(ctx, 31, 0x39FEE8u);
    ctx->pc = 0x39FEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FEE0u;
    // 0x39fee4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB90u, 0x39FEE0u, 0x39FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FEE8u;
label_39fee8:
    // 0x39fee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39fee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39feec: 0x2642feff  addiu       $v0, $s2, -0x101
    ctx->pc = 0x39feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967039));
    // 0x39fef0: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x39fef0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x39fef4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39FEF4u;
    {
        const bool branch_taken_0x39fef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FEF4u;
        // 0x39fef8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fef4) {
            ctx->pc = 0x39FF14u;
            goto label_39ff14;
        }
    }
    ctx->pc = 0x39FEFCu;
    // 0x39fefc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39fefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff00: 0x24a5e7a8  addiu       $a1, $a1, -0x1858
    ctx->pc = 0x39ff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961064));
    // 0x39ff04: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39FF04u;
    SET_GPR_U32(ctx, 31, 0x39FF0Cu);
    ctx->pc = 0x39FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF04u;
    // 0x39ff08: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39FF04u, 0x39FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF0Cu;
label_39ff0c:
    // 0x39ff0c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x39FF0Cu;
    {
        const bool branch_taken_0x39ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF0Cu;
        // 0x39ff10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff0c) {
            ctx->pc = 0x39FFF8u;
            goto label_39fff8;
        }
    }
    ctx->pc = 0x39FF14u;
label_39ff14:
    // 0x39ff14: 0xc0e83e0  jal         func_3A0F80
    ctx->pc = 0x39FF14u;
    SET_GPR_U32(ctx, 31, 0x39FF1Cu);
    ctx->pc = 0x39FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF14u;
    // 0x39ff18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0F80u, 0x39FF14u, 0x39FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF1Cu;
label_39ff1c:
    // 0x39ff1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff20: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39FF20u;
    SET_GPR_U32(ctx, 31, 0x39FF28u);
    ctx->pc = 0x39FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF20u;
    // 0x39ff24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39FF20u, 0x39FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF28u;
label_39ff28:
    // 0x39ff28: 0xae0201c4  sw          $v0, 0x1C4($s0)
    ctx->pc = 0x39ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x39ff2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff30: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39FF30u;
    SET_GPR_U32(ctx, 31, 0x39FF38u);
    ctx->pc = 0x39FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF30u;
    // 0x39ff34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39FF30u, 0x39FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF38u;
label_39ff38:
    // 0x39ff38: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39FF38u;
    {
        const bool branch_taken_0x39ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF38u;
        // 0x39ff3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff38) {
            ctx->pc = 0x39FF7Cu;
            goto label_39ff7c;
        }
    }
    ctx->pc = 0x39FF40u;
    // 0x39ff40: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39FF40u;
    SET_GPR_U32(ctx, 31, 0x39FF48u);
    ctx->pc = 0x39FF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF40u;
    // 0x39ff44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39FF40u, 0x39FF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF48u;
label_39ff48:
    // 0x39ff48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff4c: 0xc0e8388  jal         func_3A0E20
    ctx->pc = 0x39FF4Cu;
    SET_GPR_U32(ctx, 31, 0x39FF54u);
    ctx->pc = 0x39FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF4Cu;
    // 0x39ff50: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x39FF4Cu, 0x39FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF54u;
label_39ff54:
    // 0x39ff54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39FF54u;
    {
        const bool branch_taken_0x39ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF54u;
        // 0x39ff58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff54) {
            ctx->pc = 0x39FF6Cu;
            goto label_39ff6c;
        }
    }
    ctx->pc = 0x39FF5Cu;
    // 0x39ff5c: 0x0  nop
    ctx->pc = 0x39ff5cu;
    // NOP
label_39ff60:
    // 0x39ff60: 0xc0e8388  jal         func_3A0E20
    ctx->pc = 0x39FF60u;
    SET_GPR_U32(ctx, 31, 0x39FF68u);
    ctx->pc = 0x39FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF60u;
    // 0x39ff64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E20u, 0x39FF60u, 0x39FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF68u;
label_39ff68:
    // 0x39ff68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39ff6c:
    // 0x39ff6c: 0xc0e7aaa  jal         func_39EAA8
    ctx->pc = 0x39FF6Cu;
    SET_GPR_U32(ctx, 31, 0x39FF74u);
    ctx->pc = 0x39FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF6Cu;
    // 0x39ff70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAA8u, 0x39FF6Cu, 0x39FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF74u;
label_39ff74:
    // 0x39ff74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39FF74u;
    {
        const bool branch_taken_0x39ff74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF74u;
        // 0x39ff78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff74) {
            ctx->pc = 0x39FF60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39ff60;
        }
    }
    ctx->pc = 0x39FF7Cu;
label_39ff7c:
    // 0x39ff7c: 0xc0e7992  jal         func_39E648
    ctx->pc = 0x39FF7Cu;
    SET_GPR_U32(ctx, 31, 0x39FF84u);
    ctx->pc = 0x39FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF7Cu;
    // 0x39ff80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E648u, 0x39FF7Cu, 0x39FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FF84u;
label_39ff84:
    // 0x39ff84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39ff84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff88: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x39ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x39ff8c: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x39ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x39ff90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39FF90u;
    {
        const bool branch_taken_0x39ff90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FF90u;
        // 0x39ff94: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ff90) {
            ctx->pc = 0x39FFACu;
            goto label_39ffac;
        }
    }
    ctx->pc = 0x39FF98u;
    // 0x39ff98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ff9c: 0xc0e70e4  jal         func_39C390
    ctx->pc = 0x39FF9Cu;
    SET_GPR_U32(ctx, 31, 0x39FFA4u);
    ctx->pc = 0x39FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FF9Cu;
    // 0x39ffa0: 0x24a5e7d0  addiu       $a1, $a1, -0x1830 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C390u, 0x39FF9Cu, 0x39FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FFA4u;
label_39ffa4:
    // 0x39ffa4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x39FFA4u;
    {
        const bool branch_taken_0x39ffa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FFA4u;
        // 0x39ffa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ffa4) {
            ctx->pc = 0x39FFF8u;
            goto label_39fff8;
        }
    }
    ctx->pc = 0x39FFACu;
label_39ffac:
    // 0x39ffac: 0x8e02013c  lw          $v0, 0x13C($s0)
    ctx->pc = 0x39ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x39ffb0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x39ffb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x39ffb4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39ffb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ffbc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x39ffbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x39ffc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39ffc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ffc4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x39ffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x39ffc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x39ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39ffcc: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x39ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x39ffd0: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x39ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x39ffd4: 0xae0401c0  sw          $a0, 0x1C0($s0)
    ctx->pc = 0x39ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 4));
    // 0x39ffd8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x39ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x39ffdc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x39ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x39ffe0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x39ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x39ffe4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x39ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x39ffe8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x39ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x39ffec: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x39ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x39fff0: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x39fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x39fff4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x39fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_39fff8:
    // 0x39fff8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x39fff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39fffc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39fffcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a0000: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3a0000u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0004: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a0004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0008: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a0008u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a000c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a000cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0010: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0010u;
        // 0x3a0014: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0018u;
}

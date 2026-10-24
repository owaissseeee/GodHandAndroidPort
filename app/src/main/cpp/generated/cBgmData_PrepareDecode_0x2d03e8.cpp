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

// Function: cBgmData_PrepareDecode
// Address: 0x2d03e8 - 0x2d04f8
void cBgmData_PrepareDecode_0x2d03e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cBgmData_PrepareDecode_0x2d03e8");
#endif

    switch (ctx->pc) {
        case 0x2d03fcu: goto label_2d03fc;
        case 0x2d0424u: goto label_2d0424;
        case 0x2d045cu: goto label_2d045c;
        case 0x2d0480u: goto label_2d0480;
        case 0x2d0498u: goto label_2d0498;
        case 0x2d04b0u: goto label_2d04b0;
        case 0x2d04c4u: goto label_2d04c4;
        case 0x2d04d8u: goto label_2d04d8;
        default: break;
    }

    ctx->pc = 0x2d03e8u;

    // 0x2d03e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d03e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d03ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d03ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d03f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d03f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d03f4: 0xc0b3fda  jal         func_2CFF68
    ctx->pc = 0x2D03F4u;
    SET_GPR_U32(ctx, 31, 0x2D03FCu);
    ctx->pc = 0x2D03F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03F4u;
    // 0x2d03f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFF68u, 0x2D03F4u, 0x2D03FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03FCu;
label_2d03fc:
    // 0x2d03fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0400: 0x10430037  beq         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2D0400u;
    {
        const bool branch_taken_0x2d0400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D0404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0400u;
        // 0x2d0404: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0400) {
            ctx->pc = 0x2D04E0u;
            goto label_2d04e0;
        }
    }
    ctx->pc = 0x2D0408u;
    // 0x2d0408: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2d0408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2d040c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2d040cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d0410: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d0410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d0414: 0x2484008e  addiu       $a0, $a0, 0x8E
    ctx->pc = 0x2d0414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 142));
    // 0x2d0418: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x2d0418u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x2d041c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x2D041Cu;
    SET_GPR_U32(ctx, 31, 0x2D0424u);
    ctx->pc = 0x2D0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D041Cu;
    // 0x2d0420: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x2D041Cu, 0x2D0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0424u;
label_2d0424:
    // 0x2d0424: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2d0424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d0428: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d0428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d042c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D042Cu;
    {
        const bool branch_taken_0x2d042c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D0430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D042Cu;
        // 0x2d0430: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d042c) {
            ctx->pc = 0x2D0448u;
            goto label_2d0448;
        }
    }
    ctx->pc = 0x2D0434u;
    // 0x2d0434: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x2d0434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2d0438: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0438u;
    {
        const bool branch_taken_0x2d0438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0438u;
        // 0x2d043c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0438) {
            ctx->pc = 0x2D0464u;
            goto label_2d0464;
        }
    }
    ctx->pc = 0x2D0440u;
    // 0x2d0440: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D0440u;
    {
        const bool branch_taken_0x2d0440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0440u;
        // 0x2d0444: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0440) {
            ctx->pc = 0x2D04A0u;
            goto label_2d04a0;
        }
    }
    ctx->pc = 0x2D0448u;
label_2d0448:
    // 0x2d0448: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d0448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d044c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2d044cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d0450: 0x24a5d0b0  addiu       $a1, $a1, -0x2F50
    ctx->pc = 0x2d0450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955184));
    // 0x2d0454: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D0454u;
    SET_GPR_U32(ctx, 31, 0x2D045Cu);
    ctx->pc = 0x2D0458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0454u;
    // 0x2d0458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D0454u, 0x2D045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D045Cu;
label_2d045c:
    // 0x2d045c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D045Cu;
    {
        const bool branch_taken_0x2d045c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D045Cu;
        // 0x2d0460: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d045c) {
            ctx->pc = 0x2D049Cu;
            goto label_2d049c;
        }
    }
    ctx->pc = 0x2D0464u;
label_2d0464:
    // 0x2d0464: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x2d0464u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2d0468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d0468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d046c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D046Cu;
    {
        const bool branch_taken_0x2d046c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D046Cu;
        // 0x2d0470: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d046c) {
            ctx->pc = 0x2D0488u;
            goto label_2d0488;
        }
    }
    ctx->pc = 0x2D0474u;
    // 0x2d0474: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d0474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d0478: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D0478u;
    SET_GPR_U32(ctx, 31, 0x2D0480u);
    ctx->pc = 0x2D047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0478u;
    // 0x2d047c: 0x24a5d0c0  addiu       $a1, $a1, -0x2F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D0478u, 0x2D0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0480u;
label_2d0480:
    // 0x2d0480: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D0480u;
    {
        const bool branch_taken_0x2d0480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0480u;
        // 0x2d0484: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0480) {
            ctx->pc = 0x2D049Cu;
            goto label_2d049c;
        }
    }
    ctx->pc = 0x2D0488u;
label_2d0488:
    // 0x2d0488: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d0488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d048c: 0x24a5d0d8  addiu       $a1, $a1, -0x2F28
    ctx->pc = 0x2d048cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955224));
    // 0x2d0490: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2D0490u;
    SET_GPR_U32(ctx, 31, 0x2D0498u);
    ctx->pc = 0x2D0494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0490u;
    // 0x2d0494: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2D0490u, 0x2D0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0498u;
label_2d0498:
    // 0x2d0498: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2d0498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2d049c:
    // 0x2d049c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d049cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d04a0:
    // 0x2d04a0: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x2d04a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x2d04a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d04a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04a8: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x2D04A8u;
    SET_GPR_U32(ctx, 31, 0x2D04B0u);
    ctx->pc = 0x2D04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04A8u;
    // 0x2d04ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x2D04A8u, 0x2D04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04B0u;
label_2d04b0:
    // 0x2d04b0: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2d04b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d04b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d04b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04b8: 0x8e070014  lw          $a3, 0x14($s0)
    ctx->pc = 0x2d04b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2d04bc: 0xc0c8a9a  jal         func_322A68
    ctx->pc = 0x2D04BCu;
    SET_GPR_U32(ctx, 31, 0x2D04C4u);
    ctx->pc = 0x2D04C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04BCu;
    // 0x2d04c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322A68u, 0x2D04BCu, 0x2D04C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04C4u;
label_2d04c4:
    // 0x2d04c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D04C4u;
    {
        const bool branch_taken_0x2d04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04C4u;
        // 0x2d04c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04c4) {
            ctx->pc = 0x2D04E4u;
            goto label_2d04e4;
        }
    }
    ctx->pc = 0x2D04CCu;
    // 0x2d04cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d04ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d04d0: 0xc0b40d4  jal         func_2D0350
    ctx->pc = 0x2D04D0u;
    SET_GPR_U32(ctx, 31, 0x2D04D8u);
    ctx->pc = 0x2D04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D04D0u;
    // 0x2d04d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0350u, 0x2D04D0u, 0x2D04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D04D8u;
label_2d04d8:
    // 0x2d04d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D04D8u;
    {
        const bool branch_taken_0x2d04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04D8u;
        // 0x2d04dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d04d8) {
            ctx->pc = 0x2D04E4u;
            goto label_2d04e4;
        }
    }
    ctx->pc = 0x2D04E0u;
label_2d04e0:
    // 0x2d04e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d04e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d04e4:
    // 0x2d04e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d04e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d04e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d04e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d04ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2D04ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D04ECu;
        // 0x2d04f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D04ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D04F4u;
    // 0x2d04f4: 0x0  nop
    ctx->pc = 0x2d04f4u;
    // NOP
    ctx->pc = 0x2d04f8u;
}

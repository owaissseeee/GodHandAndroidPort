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

// Function: _getpic
// Address: 0x39a140 - 0x39a2f8
void _getpic_0x39a140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_getpic_0x39a140");
#endif

    switch (ctx->pc) {
        case 0x39a188u: goto label_39a188;
        case 0x39a1a4u: goto label_39a1a4;
        case 0x39a1acu: goto label_39a1ac;
        case 0x39a1b4u: goto label_39a1b4;
        case 0x39a1c8u: goto label_39a1c8;
        case 0x39a1d0u: goto label_39a1d0;
        case 0x39a1d8u: goto label_39a1d8;
        case 0x39a230u: goto label_39a230;
        case 0x39a258u: goto label_39a258;
        case 0x39a27cu: goto label_39a27c;
        case 0x39a2a0u: goto label_39a2a0;
        default: break;
    }

    ctx->pc = 0x39a140u;

    // 0x39a140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x39a144: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x39a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x39a148: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39a148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39a14c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39a14cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a150: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39a154: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x39a154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39a15c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39a15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a160: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a164: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x39a164u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x39a168: 0x8e0600ec  lw          $a2, 0xEC($s0)
    ctx->pc = 0x39a168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x39a16c: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x39a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x39a170: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A170u;
    {
        const bool branch_taken_0x39a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A170u;
        // 0x39a174: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a170) {
            ctx->pc = 0x39A190u;
            goto label_39a190;
        }
    }
    ctx->pc = 0x39A178u;
    // 0x39a178: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x39a178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x39a17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a180: 0xc0e70fa  jal         func_39C3E8
    ctx->pc = 0x39A180u;
    SET_GPR_U32(ctx, 31, 0x39A188u);
    ctx->pc = 0x39A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A180u;
    // 0x39a184: 0x24a5e490  addiu       $a1, $a1, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3E8u, 0x39A180u, 0x39A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A188u;
label_39a188:
    // 0x39a188: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x39A188u;
    {
        const bool branch_taken_0x39a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A188u;
        // 0x39a18c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a188) {
            ctx->pc = 0x39A2D8u;
            goto label_39a2d8;
        }
    }
    ctx->pc = 0x39A190u;
label_39a190:
    // 0x39a190: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x39a190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39a194: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39A194u;
    {
        const bool branch_taken_0x39a194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A194u;
        // 0x39a198: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a194) {
            ctx->pc = 0x39A1BCu;
            goto label_39a1bc;
        }
    }
    ctx->pc = 0x39A19Cu;
    // 0x39a19c: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x39A19Cu;
    SET_GPR_U32(ctx, 31, 0x39A1A4u);
    ctx->pc = 0x39A1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A19Cu;
    // 0x39a1a0: 0x2484e4d0  addiu       $a0, $a0, -0x1B30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x39A19Cu, 0x39A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1A4u;
label_39a1a4:
    // 0x39a1a4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x39A1A4u;
    {
        const bool branch_taken_0x39a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1A4u;
        // 0x39a1a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1a4) {
            ctx->pc = 0x39A2D8u;
            goto label_39a2d8;
        }
    }
    ctx->pc = 0x39A1ACu;
label_39a1ac:
    // 0x39a1ac: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x39A1ACu;
    SET_GPR_U32(ctx, 31, 0x39A1B4u);
    ctx->pc = 0x39A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1ACu;
    // 0x39a1b0: 0x2484e510  addiu       $a0, $a0, -0x1AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x39A1ACu, 0x39A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1B4u;
label_39a1b4:
    // 0x39a1b4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x39A1B4u;
    {
        const bool branch_taken_0x39a1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1B4u;
        // 0x39a1b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1b4) {
            ctx->pc = 0x39A2D8u;
            goto label_39a2d8;
        }
    }
    ctx->pc = 0x39A1BCu;
label_39a1bc:
    // 0x39a1bc: 0xae000834  sw          $zero, 0x834($s0)
    ctx->pc = 0x39a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2100), GPR_U32(ctx, 0));
    // 0x39a1c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39a1c4: 0x0  nop
    ctx->pc = 0x39a1c4u;
    // NOP
label_39a1c8:
    // 0x39a1c8: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39A1C8u;
    {
        const bool branch_taken_0x39a1c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1C8u;
        // 0x39a1cc: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1c8) {
            ctx->pc = 0x39A208u;
            goto label_39a208;
        }
    }
    ctx->pc = 0x39A1D0u;
label_39a1d0:
    // 0x39a1d0: 0xc0e838a  jal         func_3A0E28
    ctx->pc = 0x39A1D0u;
    SET_GPR_U32(ctx, 31, 0x39A1D8u);
    ctx->pc = 0x39A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1D0u;
    // 0x39a1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0E28u, 0x39A1D0u, 0x39A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1D8u;
label_39a1d8:
    // 0x39a1d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39a1d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a1dc: 0x640003e  bltz        $s2, . + 4 + (0x3E << 2)
    ctx->pc = 0x39A1DCu;
    {
        const bool branch_taken_0x39a1dc = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x39A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1DCu;
        // 0x39a1e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1dc) {
            ctx->pc = 0x39A2D8u;
            goto label_39a2d8;
        }
    }
    ctx->pc = 0x39A1E4u;
    // 0x39a1e4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x39A1E4u;
    {
        const bool branch_taken_0x39a1e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1E4u;
        // 0x39a1e8: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1e4) {
            ctx->pc = 0x39A208u;
            goto label_39a208;
        }
    }
    ctx->pc = 0x39A1ECu;
    // 0x39a1ec: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x39a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x39a1f0: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x39a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x39a1f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A1F4u;
    {
        const bool branch_taken_0x39a1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1F4u;
        // 0x39a1f8: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1f4) {
            ctx->pc = 0x39A208u;
            goto label_39a208;
        }
    }
    ctx->pc = 0x39A1FCu;
    // 0x39a1fc: 0x8e020858  lw          $v0, 0x858($s0)
    ctx->pc = 0x39a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x39a200: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x39A200u;
    {
        const bool branch_taken_0x39a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A200u;
        // 0x39a204: 0x2e420005  sltiu       $v0, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a200) {
            ctx->pc = 0x39A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a1d0;
        }
    }
    ctx->pc = 0x39A208u;
label_39a208:
    // 0x39a208: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x39A208u;
    {
        const bool branch_taken_0x39a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A208u;
        // 0x39a20c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a208) {
            ctx->pc = 0x39A2B0u;
            goto label_39a2b0;
        }
    }
    ctx->pc = 0x39A210u;
    // 0x39a210: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x39a210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x39a214: 0x2442e530  addiu       $v0, $v0, -0x1AD0
    ctx->pc = 0x39a214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x39a218: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39a218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39a21c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x39a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39a220: 0x800008  jr          $a0
    ctx->pc = 0x39A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x39A228u: goto label_39a228;
            case 0x39A23Cu: goto label_39a23c;
            case 0x39A26Cu: goto label_39a26c;
            case 0x39A290u: goto label_39a290;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A220u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x39A228u;
label_39a228:
    // 0x39a228: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x39A228u;
    SET_GPR_U32(ctx, 31, 0x39A230u);
    ctx->pc = 0x39A22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A228u;
    // 0x39a22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39A228u, 0x39A230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A230u;
label_39a230:
    // 0x39a230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a234: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x39A234u;
    {
        const bool branch_taken_0x39a234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A234u;
        // 0x39a238: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a234) {
            ctx->pc = 0x39A2B0u;
            goto label_39a2b0;
        }
    }
    ctx->pc = 0x39A23Cu;
label_39a23c:
    // 0x39a23c: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x39a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x39a240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a244: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x39a244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x39a248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a24c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x39a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x39a250: 0xc0e6b04  jal         func_39AC10
    ctx->pc = 0x39A250u;
    SET_GPR_U32(ctx, 31, 0x39A258u);
    ctx->pc = 0x39A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A250u;
    // 0x39a254: 0x8e0600a8  lw          $a2, 0xA8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AC10u, 0x39A250u, 0x39A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A258u;
label_39a258:
    // 0x39a258: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x39a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x39a25c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39a25cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a260: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39a260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39a264: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x39A264u;
    {
        const bool branch_taken_0x39a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A264u;
        // 0x39a268: 0xae0300b4  sw          $v1, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a264) {
            ctx->pc = 0x39A2B0u;
            goto label_39a2b0;
        }
    }
    ctx->pc = 0x39A26Cu;
label_39a26c:
    // 0x39a26c: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x39a26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x39a270: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a274: 0xc0e6b04  jal         func_39AC10
    ctx->pc = 0x39A274u;
    SET_GPR_U32(ctx, 31, 0x39A27Cu);
    ctx->pc = 0x39A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A274u;
    // 0x39a278: 0x8e0600ac  lw          $a2, 0xAC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AC10u, 0x39A274u, 0x39A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A27Cu;
label_39a27c:
    // 0x39a27c: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x39a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x39a280: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39a280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a284: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39a288: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x39A288u;
    {
        const bool branch_taken_0x39a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A288u;
        // 0x39a28c: 0xae0300b8  sw          $v1, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a288) {
            ctx->pc = 0x39A2B0u;
            goto label_39a2b0;
        }
    }
    ctx->pc = 0x39A290u;
label_39a290:
    // 0x39a290: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x39a290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x39a294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a298: 0xc0e6b04  jal         func_39AC10
    ctx->pc = 0x39A298u;
    SET_GPR_U32(ctx, 31, 0x39A2A0u);
    ctx->pc = 0x39A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A298u;
    // 0x39a29c: 0x8e0600b0  lw          $a2, 0xB0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AC10u, 0x39A298u, 0x39A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A2A0u;
label_39a2a0:
    // 0x39a2a0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x39a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x39a2a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x39a2a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a2a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39a2ac: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x39a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
label_39a2b0:
    // 0x39a2b0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x39a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x39a2b4: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x39A2B4u;
    {
        const bool branch_taken_0x39a2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2B4u;
        // 0x39a2b8: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2b4) {
            ctx->pc = 0x39A1ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a1ac;
        }
    }
    ctx->pc = 0x39A2BCu;
    // 0x39a2bc: 0x8e020834  lw          $v0, 0x834($s0)
    ctx->pc = 0x39a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2100)));
    // 0x39a2c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A2C0u;
    {
        const bool branch_taken_0x39a2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2C0u;
        // 0x39a2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2c0) {
            ctx->pc = 0x39A2D8u;
            goto label_39a2d8;
        }
    }
    ctx->pc = 0x39A2C8u;
    // 0x39a2c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x39a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39a2cc: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x39A2CCu;
    {
        const bool branch_taken_0x39a2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2CCu;
        // 0x39a2d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2cc) {
            ctx->pc = 0x39A1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39a1c8;
        }
    }
    ctx->pc = 0x39A2D4u;
    // 0x39a2d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a2d8:
    // 0x39a2d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39a2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39a2dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x39a2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39a2e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39a2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39a2e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39a2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x39A2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2ECu;
        // 0x39a2f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A2F4u;
    // 0x39a2f4: 0x0  nop
    ctx->pc = 0x39a2f4u;
    // NOP
    ctx->pc = 0x39a2f8u;
}

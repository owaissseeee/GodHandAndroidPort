#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: slotCheck__7cMcLoad
// Address: 0x7c16d8 - 0x7c18d0
void slotCheck__7cMcLoad_0x7c16d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("slotCheck__7cMcLoad_0x7c16d8");
#endif

    switch (ctx->pc) {
        case 0x7c1734u: goto label_7c1734;
        case 0x7c1748u: goto label_7c1748;
        case 0x7c1778u: goto label_7c1778;
        case 0x7c1780u: goto label_7c1780;
        case 0x7c1790u: goto label_7c1790;
        case 0x7c17a4u: goto label_7c17a4;
        case 0x7c17b8u: goto label_7c17b8;
        case 0x7c17c8u: goto label_7c17c8;
        case 0x7c17e8u: goto label_7c17e8;
        case 0x7c1800u: goto label_7c1800;
        default: break;
    }

    ctx->pc = 0x7c16d8u;

    // 0x7c16d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7c16d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7c16dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7c16dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7c16e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7c16e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7c16e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c16e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c16e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7c16e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7c16ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c16ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c16f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7c16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7c16f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c16f8: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x7c16f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x7c16fc: 0x1072002a  beq         $v1, $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x7C16FCu;
    {
        const bool branch_taken_0x7c16fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C1700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C16FCu;
        // 0x7c1700: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c16fc) {
            ctx->pc = 0x7C17A8u;
            goto label_7c17a8;
        }
    }
    ctx->pc = 0x7C1704u;
    // 0x7c1704: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1704u;
    {
        const bool branch_taken_0x7c1704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1704) {
            ctx->pc = 0x7C1708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1704u;
            // 0x7c1708: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C171Cu;
            goto label_7c171c;
        }
    }
    ctx->pc = 0x7C170Cu;
    // 0x7c170c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C170Cu;
    {
        const bool branch_taken_0x7c170c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c170c) {
            ctx->pc = 0x7C172Cu;
            goto label_7c172c;
        }
    }
    ctx->pc = 0x7C1714u;
    // 0x7c1714: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x7C1714u;
    {
        const bool branch_taken_0x7c1714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1714u;
        // 0x7c1718: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1714) {
            ctx->pc = 0x7C18B8u;
            goto label_7c18b8;
        }
    }
    ctx->pc = 0x7C171Cu;
label_7c171c:
    // 0x7c171c: 0x1062002e  beq         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7C171Cu;
    {
        const bool branch_taken_0x7c171c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C171Cu;
        // 0x7c1720: 0x3c04007d  lui         $a0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c171c) {
            ctx->pc = 0x7C17D8u;
            goto label_7c17d8;
        }
    }
    ctx->pc = 0x7C1724u;
    // 0x7c1724: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x7C1724u;
    {
        const bool branch_taken_0x7c1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1724u;
        // 0x7c1728: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1724) {
            ctx->pc = 0x7C18B8u;
            goto label_7c18b8;
        }
    }
    ctx->pc = 0x7C172Cu;
label_7c172c:
    // 0x7c172c: 0xc1f1eb8  jal         func_7C7AE0
    ctx->pc = 0x7C172Cu;
    SET_GPR_U32(ctx, 31, 0x7C1734u);
    ctx->pc = 0x7C1730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C172Cu;
    // 0x7c1730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C7AE0u, 0x7C172Cu, 0x7C1734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1734u;
label_7c1734:
    // 0x7c1734: 0xae120078  sw          $s2, 0x78($s0)
    ctx->pc = 0x7c1734u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 18));
    // 0x7c1738: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x7c1738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c173c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x7c173cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x7c1740: 0x26020088  addiu       $v0, $s0, 0x88
    ctx->pc = 0x7c1740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x7c1744: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x7c1744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_7c1748:
    // 0x7c1748: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x7c1748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x7c174c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x7c174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7c1750: 0x0  nop
    ctx->pc = 0x7c1750u;
    // NOP
    // 0x7c1754: 0x0  nop
    ctx->pc = 0x7c1754u;
    // NOP
    // 0x7c1758: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C1758u;
    {
        const bool branch_taken_0x7c1758 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x7C175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1758u;
        // 0x7c175c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1758) {
            ctx->pc = 0x7C1748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1748;
        }
    }
    ctx->pc = 0x7C1760u;
    // 0x7c1760: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x7c1760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x7c1764: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x7C1764u;
    {
        const bool branch_taken_0x7c1764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1764u;
        // 0x7c1768: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1764) {
            ctx->pc = 0x7C179Cu;
            goto label_7c179c;
        }
    }
    ctx->pc = 0x7C176Cu;
    // 0x7c176c: 0x24065000  addiu       $a2, $zero, 0x5000
    ctx->pc = 0x7c176cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x7c1770: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C1770u;
    SET_GPR_U32(ctx, 31, 0x7C1778u);
    ctx->pc = 0x7C1774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1770u;
    // 0x7c1774: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C1770u, 0x7C1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1778u;
label_7c1778:
    // 0x7c1778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7c1778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c177c: 0x0  nop
    ctx->pc = 0x7c177cu;
    // NOP
label_7c1780:
    // 0x7c1780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c1780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1784: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c1784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c1788: 0xc1f23de  jal         func_7C8F78
    ctx->pc = 0x7C1788u;
    SET_GPR_U32(ctx, 31, 0x7C1790u);
    ctx->pc = 0x7C178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1788u;
    // 0x7c178c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F78u, 0x7C1788u, 0x7C1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1790u;
label_7c1790:
    // 0x7c1790: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x7c1790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c1794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C1794u;
    {
        const bool branch_taken_0x7c1794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1794u;
        // 0x7c1798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1794) {
            ctx->pc = 0x7C1780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c1780;
        }
    }
    ctx->pc = 0x7C179Cu;
label_7c179c:
    // 0x7c179c: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C179Cu;
    SET_GPR_U32(ctx, 31, 0x7C17A4u);
    ctx->pc = 0x7C17A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C179Cu;
    // 0x7c17a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C179Cu, 0x7C17A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C17A4u;
label_7c17a4:
    // 0x7c17a4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x7c17a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_7c17a8:
    // 0x7c17a8: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c17a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c17ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c17acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c17b0: 0xc1f0e1c  jal         func_7C3870
    ctx->pc = 0x7C17B0u;
    SET_GPR_U32(ctx, 31, 0x7C17B8u);
    ctx->pc = 0x7C17B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C17B0u;
    // 0x7c17b4: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3870u, 0x7C17B0u, 0x7C17B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C17B8u;
label_7c17b8:
    // 0x7c17b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c17b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c17bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c17bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c17c0: 0xc1f0b7a  jal         func_7C2DE8
    ctx->pc = 0x7C17C0u;
    SET_GPR_U32(ctx, 31, 0x7C17C8u);
    ctx->pc = 0x7C17C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C17C0u;
    // 0x7c17c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2DE8u, 0x7C17C0u, 0x7C17C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C17C8u;
label_7c17c8:
    // 0x7c17c8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x7C17C8u;
    {
        const bool branch_taken_0x7c17c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C17CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C17C8u;
        // 0x7c17cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c17c8) {
            ctx->pc = 0x7C18A4u;
            goto label_7c18a4;
        }
    }
    ctx->pc = 0x7C17D0u;
    // 0x7c17d0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x7C17D0u;
    {
        const bool branch_taken_0x7c17d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C17D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C17D0u;
        // 0x7c17d4: 0xae0200f4  sw          $v0, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c17d0) {
            ctx->pc = 0x7C18B4u;
            goto label_7c18b4;
        }
    }
    ctx->pc = 0x7C17D8u;
label_7c17d8:
    // 0x7c17d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c17d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c17dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x7c17dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c17e0: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C17E0u;
    SET_GPR_U32(ctx, 31, 0x7C17E8u);
    ctx->pc = 0x7C17E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C17E0u;
    // 0x7c17e4: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C17E0u, 0x7C17E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C17E8u;
label_7c17e8:
    // 0x7c17e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7c17e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c17ec: 0x56320032  bnel        $s1, $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x7C17ECu;
    {
        const bool branch_taken_0x7c17ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c17ec) {
            ctx->pc = 0x7C17F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C17ECu;
            // 0x7c17f0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C18B8u;
            goto label_7c18b8;
        }
    }
    ctx->pc = 0x7C17F4u;
    // 0x7c17f4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c17f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c17f8: 0xc1f0b90  jal         func_7C2E40
    ctx->pc = 0x7C17F8u;
    SET_GPR_U32(ctx, 31, 0x7C1800u);
    ctx->pc = 0x7C17FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C17F8u;
    // 0x7c17fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C2E40u, 0x7C17F8u, 0x7C1800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1800u;
label_7c1800:
    // 0x7c1800: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c1800u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1804: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x7c1804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c1808: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x7C1808u;
    {
        const bool branch_taken_0x7c1808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1808u;
        // 0x7c180c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1808) {
            ctx->pc = 0x7C1858u;
            goto label_7c1858;
        }
    }
    ctx->pc = 0x7C1810u;
    // 0x7c1810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1810u;
    {
        const bool branch_taken_0x7c1810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1810u;
        // 0x7c1814: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1810) {
            ctx->pc = 0x7C1828u;
            goto label_7c1828;
        }
    }
    ctx->pc = 0x7C1818u;
    // 0x7c1818: 0x1071000f  beq         $v1, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x7C1818u;
    {
        const bool branch_taken_0x7c1818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x7C181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1818u;
        // 0x7c181c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1818) {
            ctx->pc = 0x7C1858u;
            goto label_7c1858;
        }
    }
    ctx->pc = 0x7C1820u;
    // 0x7c1820: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x7C1820u;
    {
        const bool branch_taken_0x7c1820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1820u;
        // 0x7c1824: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1820) {
            ctx->pc = 0x7C18ACu;
            goto label_7c18ac;
        }
    }
    ctx->pc = 0x7C1828u;
label_7c1828:
    // 0x7c1828: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x7C1828u;
    {
        const bool branch_taken_0x7c1828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1828u;
        // 0x7c182c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1828) {
            ctx->pc = 0x7C18A8u;
            goto label_7c18a8;
        }
    }
    ctx->pc = 0x7C1830u;
    // 0x7c1830: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x7c1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x7c1834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c1834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c1838: 0x28430003  slti        $v1, $v0, 0x3
    ctx->pc = 0x7c1838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7c183c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C183Cu;
    {
        const bool branch_taken_0x7c183c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C183Cu;
        // 0x7c1840: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c183c) {
            ctx->pc = 0x7C1850u;
            goto label_7c1850;
        }
    }
    ctx->pc = 0x7C1844u;
    // 0x7c1844: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7c1844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c1848: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x7C1848u;
    {
        const bool branch_taken_0x7c1848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1848u;
        // 0x7c184c: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1848) {
            ctx->pc = 0x7C18B4u;
            goto label_7c18b4;
        }
    }
    ctx->pc = 0x7C1850u;
label_7c1850:
    // 0x7c1850: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7C1850u;
    {
        const bool branch_taken_0x7c1850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1850u;
        // 0x7c1854: 0xae1100f4  sw          $s1, 0xF4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1850) {
            ctx->pc = 0x7C18B4u;
            goto label_7c18b4;
        }
    }
    ctx->pc = 0x7C1858u;
label_7c1858:
    // 0x7c1858: 0x26641740  addiu       $a0, $s3, 0x1740
    ctx->pc = 0x7c1858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
    // 0x7c185c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7c185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7c1860: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x7c1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x7c1864: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C1864u;
    {
        const bool branch_taken_0x7c1864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x7C1868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1864u;
        // 0x7c1868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1864) {
            ctx->pc = 0x7C1880u;
            goto label_7c1880;
        }
    }
    ctx->pc = 0x7C186Cu;
    // 0x7c186c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7c186cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c1870: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x7c1870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x7c1874: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x7c1874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x7c1878: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C1878u;
    {
        const bool branch_taken_0x7c1878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1878u;
        // 0x7c187c: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1878) {
            ctx->pc = 0x7C18B0u;
            goto label_7c18b0;
        }
    }
    ctx->pc = 0x7C1880u;
label_7c1880:
    // 0x7c1880: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x7c1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x7c1884: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C1884u;
    {
        const bool branch_taken_0x7c1884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1884u;
        // 0x7c1888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1884) {
            ctx->pc = 0x7C18A8u;
            goto label_7c18a8;
        }
    }
    ctx->pc = 0x7C188Cu;
    // 0x7c188c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x7c188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7c1890: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x7c1890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x7c1894: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x7c1894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x7c1898: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x7c1898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x7c189c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7C189Cu;
    {
        const bool branch_taken_0x7c189c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C189Cu;
        // 0x7c18a0: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c189c) {
            ctx->pc = 0x7C18B0u;
            goto label_7c18b0;
        }
    }
    ctx->pc = 0x7C18A4u;
label_7c18a4:
    // 0x7c18a4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x7c18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_7c18a8:
    // 0x7c18a8: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x7c18a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_7c18ac:
    // 0x7c18ac: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x7c18acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_7c18b0:
    // 0x7c18b0: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x7c18b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_7c18b4:
    // 0x7c18b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7c18b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_7c18b8:
    // 0x7c18b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7c18b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c18bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7c18bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c18c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7c18c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c18c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c18c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c18c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C18C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C18C8u;
        // 0x7c18cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C18C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C18D0u;
}
} // namespace gh_mcport

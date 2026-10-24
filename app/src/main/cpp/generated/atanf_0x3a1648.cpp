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

// Function: atanf
// Address: 0x3a1648 - 0x3a18f0
void atanf_0x3a1648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("atanf_0x3a1648");
#endif

    switch (ctx->pc) {
        case 0x3a1728u: goto label_3a1728;
        default: break;
    }

    ctx->pc = 0x3a1648u;

    // 0x3a1648: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a1648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a164c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a164cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a1650: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3a1650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3a1654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a1654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1658: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a1658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a165c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a165cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1660: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a1660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a1664: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a1664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a1668: 0x3c02507f  lui         $v0, 0x507F
    ctx->pc = 0x3a1668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20607 << 16));
    // 0x3a166c: 0x2238024  and         $s0, $s1, $v1
    ctx->pc = 0x3a166cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3a1670: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a1670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1674: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a1674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a1678: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A1678u;
    {
        const bool branch_taken_0x3a1678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1678u;
        // 0x3a167c: 0x3c027f80  lui         $v0, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1678) {
            ctx->pc = 0x3A16CCu;
            goto label_3a16cc;
        }
    }
    ctx->pc = 0x3A1680u;
    // 0x3a1680: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a1680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a1684: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1684u;
    {
        const bool branch_taken_0x3a1684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1684) {
            ctx->pc = 0x3A1698u;
            goto label_3a1698;
        }
    }
    ctx->pc = 0x3A168Cu;
    // 0x3a168c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x3A168Cu;
    {
        const bool branch_taken_0x3a168c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A168Cu;
        // 0x3a1690: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a168c) {
            ctx->pc = 0x3A18DCu;
            goto label_3a18dc;
        }
    }
    ctx->pc = 0x3A1694u;
    // 0x3a1694: 0x0  nop
    ctx->pc = 0x3a1694u;
    // NOP
label_3a1698:
    // 0x3a1698: 0x1a200006  blez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1698u;
    {
        const bool branch_taken_0x3a1698 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x3A169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1698u;
        // 0x3a169c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1698) {
            ctx->pc = 0x3A16B4u;
            goto label_3a16b4;
        }
    }
    ctx->pc = 0x3A16A0u;
    // 0x3a16a0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a16a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a16a4: 0xc441ea14  lwc1        $f1, -0x15EC($v0)
    ctx->pc = 0x3a16a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a16a8: 0xc460ea24  lwc1        $f0, -0x15DC($v1)
    ctx->pc = 0x3a16a8u;
    { uint32_t bits = FAST_READ32(0x45EA24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a16ac: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3A16ACu;
    {
        const bool branch_taken_0x3a16ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A16B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16ACu;
        // 0x3a16b0: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16ac) {
            ctx->pc = 0x3A18DCu;
            goto label_3a18dc;
        }
    }
    ctx->pc = 0x3A16B4u;
label_3a16b4:
    // 0x3a16b4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a16b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a16b8: 0xc440ea14  lwc1        $f0, -0x15EC($v0)
    ctx->pc = 0x3a16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3a16bc: 0xc461ea24  lwc1        $f1, -0x15DC($v1)
    ctx->pc = 0x3a16bcu;
    { uint32_t bits = FAST_READ32(0x45EA24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a16c0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a16c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3a16c4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x3A16C4u;
    {
        const bool branch_taken_0x3a16c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A16C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16C4u;
        // 0x3a16c8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16c4) {
            ctx->pc = 0x3A18DCu;
            goto label_3a18dc;
        }
    }
    ctx->pc = 0x3A16CCu;
label_3a16cc:
    // 0x3a16cc: 0x3c023edf  lui         $v0, 0x3EDF
    ctx->pc = 0x3a16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16095 << 16));
    // 0x3a16d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a16d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a16d4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a16d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a16d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A16D8u;
    {
        const bool branch_taken_0x3a16d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A16DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16D8u;
        // 0x3a16dc: 0x3c0230ff  lui         $v0, 0x30FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12543 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16d8) {
            ctx->pc = 0x3A1720u;
            goto label_3a1720;
        }
    }
    ctx->pc = 0x3A16E0u;
    // 0x3a16e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a16e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a16e4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a16e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a16e8: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3A16E8u;
    {
        const bool branch_taken_0x3a16e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A16E8u;
        // 0x3a16ec: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a16e8) {
            ctx->pc = 0x3A17FCu;
            goto label_3a17fc;
        }
    }
    ctx->pc = 0x3A16F0u;
    // 0x3a16f0: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a16f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a16f4: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a16f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a16f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a16f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a16fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a16fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a1700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a1700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1704: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x3a1704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a1708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3a1708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a170c: 0x0  nop
    ctx->pc = 0x3a170cu;
    // NOP
    // 0x3a1710: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x3A1710u;
    {
        const bool branch_taken_0x3a1710 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a1710) {
            ctx->pc = 0x3A1714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1710u;
            // 0x3a1714: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
            ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1800u;
            goto label_3a1800;
        }
    }
    ctx->pc = 0x3A1718u;
    // 0x3a1718: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x3A1718u;
    {
        const bool branch_taken_0x3a1718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1718u;
        // 0x3a171c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1718) {
            ctx->pc = 0x3A18DCu;
            goto label_3a18dc;
        }
    }
    ctx->pc = 0x3A1720u;
label_3a1720:
    // 0x3a1720: 0xc0e8676  jal         func_3A19D8
    ctx->pc = 0x3A1720u;
    SET_GPR_U32(ctx, 31, 0x3A1728u);
    ctx->pc = 0x3A19D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19D8u, 0x3A1720u, 0x3A1728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1728u;
label_3a1728:
    // 0x3a1728: 0x3c023f97  lui         $v0, 0x3F97
    ctx->pc = 0x3a1728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16279 << 16));
    // 0x3a172c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a172cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1730: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a1730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a1734: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A1734u;
    {
        const bool branch_taken_0x3a1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1734u;
        // 0x3a1738: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1734) {
            ctx->pc = 0x3A17A4u;
            goto label_3a17a4;
        }
    }
    ctx->pc = 0x3A173Cu;
    // 0x3a173c: 0x3c023f2f  lui         $v0, 0x3F2F
    ctx->pc = 0x3a173cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16175 << 16));
    // 0x3a1740: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a1740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a1744: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a1744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a1748: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A1748u;
    {
        const bool branch_taken_0x3a1748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1748u;
        // 0x3a174c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1748) {
            ctx->pc = 0x3A1780u;
            goto label_3a1780;
        }
    }
    ctx->pc = 0x3A1750u;
    // 0x3a1750: 0x460c6000  add.s       $f0, $f12, $f12
    ctx->pc = 0x3a1750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x3a1754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a1758: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a1758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a175c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3a175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3a1760: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a1760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a1764: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a1764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a1768: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x3a1768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x3a176c: 0x0  nop
    ctx->pc = 0x3a176cu;
    // NOP
    // 0x3a1770: 0x0  nop
    ctx->pc = 0x3a1770u;
    // NOP
    // 0x3a1774: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3a1774u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x3a1778: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A1778u;
    {
        const bool branch_taken_0x3a1778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1778u;
        // 0x3a177c: 0x460c6282  mul.s       $f10, $f12, $f12 (Delay Slot)
        ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1778) {
            ctx->pc = 0x3A1800u;
            goto label_3a1800;
        }
    }
    ctx->pc = 0x3A1780u;
label_3a1780:
    // 0x3a1780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a1780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a1784: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a1784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1788: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x3a1788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3a178c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x3a178cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3a1790: 0x0  nop
    ctx->pc = 0x3a1790u;
    // NOP
    // 0x3a1794: 0x0  nop
    ctx->pc = 0x3a1794u;
    // NOP
    // 0x3a1798: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3a1798u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x3a179c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3A179Cu;
    {
        const bool branch_taken_0x3a179c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A17A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A179Cu;
        // 0x3a17a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a179c) {
            ctx->pc = 0x3A17FCu;
            goto label_3a17fc;
        }
    }
    ctx->pc = 0x3A17A4u;
label_3a17a4:
    // 0x3a17a4: 0x3c02401b  lui         $v0, 0x401B
    ctx->pc = 0x3a17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16411 << 16));
    // 0x3a17a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a17a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a17ac: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3a17acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3a17b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A17B0u;
    {
        const bool branch_taken_0x3a17b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A17B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17B0u;
        // 0x3a17b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a17b0) {
            ctx->pc = 0x3A17E8u;
            goto label_3a17e8;
        }
    }
    ctx->pc = 0x3A17B8u;
    // 0x3a17b8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3a17b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x3a17bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a17bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a17c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a17c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3a17c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a17c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a17c8: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x3a17c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a17cc: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x3a17ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3a17d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3a17d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3a17d4: 0x0  nop
    ctx->pc = 0x3a17d4u;
    // NOP
    // 0x3a17d8: 0x0  nop
    ctx->pc = 0x3a17d8u;
    // NOP
    // 0x3a17dc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x3a17dcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x3a17e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A17E0u;
    {
        const bool branch_taken_0x3a17e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A17E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A17E0u;
        // 0x3a17e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a17e0) {
            ctx->pc = 0x3A17FCu;
            goto label_3a17fc;
        }
    }
    ctx->pc = 0x3A17E8u;
label_3a17e8:
    // 0x3a17e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3a17e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3a17ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a17ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a17f0: 0x0  nop
    ctx->pc = 0x3a17f0u;
    // NOP
    // 0x3a17f4: 0x0  nop
    ctx->pc = 0x3a17f4u;
    // NOP
    // 0x3a17f8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x3a17f8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[12]);
label_3a17fc:
    // 0x3a17fc: 0x460c6282  mul.s       $f10, $f12, $f12
    ctx->pc = 0x3a17fcu;
    ctx->f[10] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_3a1800:
    // 0x3a1800: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a1800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a1804: 0x2462ea28  addiu       $v0, $v1, -0x15D8
    ctx->pc = 0x3a1804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961704));
    // 0x3a1808: 0xc469ea28  lwc1        $f9, -0x15D8($v1)
    ctx->pc = 0x3a1808u;
    { uint32_t bits = FAST_READ32(0x45EA28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3a180c: 0xc4430028  lwc1        $f3, 0x28($v0)
    ctx->pc = 0x3a180cu;
    { uint32_t bits = FAST_READ32(0x45EA50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a1810: 0x460a5002  mul.s       $f0, $f10, $f10
    ctx->pc = 0x3a1810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x3a1814: 0xc4450020  lwc1        $f5, 0x20($v0)
    ctx->pc = 0x3a1814u;
    { uint32_t bits = FAST_READ32(0x45EA48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3a1818: 0xc4440024  lwc1        $f4, 0x24($v0)
    ctx->pc = 0x3a1818u;
    { uint32_t bits = FAST_READ32(0x45EA4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a181c: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x3a181cu;
    { uint32_t bits = FAST_READ32(0x45EA44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a1820: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3a1820u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a1824: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x3a1824u;
    { uint32_t bits = FAST_READ32(0x45EA40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3a1828: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x3a1828u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3a182c: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3a182cu;
    { uint32_t bits = FAST_READ32(0x45EA3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a1830: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x3a1830u;
    { uint32_t bits = FAST_READ32(0x45EA38u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3a1834: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x3a1834u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x3a1838: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x3a1838u;
    { uint32_t bits = FAST_READ32(0x45EA30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3a183c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3a183cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3a1840: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3a1840u;
    { uint32_t bits = FAST_READ32(0x45EA34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3a1844: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x3a1844u;
    { uint32_t bits = FAST_READ32(0x45EA2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3a1848: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x3a1848u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3a184c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3a184cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3a1850: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x3a1850u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x3a1854: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3a1854u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3a1858: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x3a1858u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x3a185c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x3a185cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3a1860: 0x460639c0  add.s       $f7, $f7, $f6
    ctx->pc = 0x3a1860u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
    // 0x3a1864: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3a1864u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3a1868: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x3a1868u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3a186c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x3a186cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3a1870: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x3a1870u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x3a1874: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x3a1874u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x3a1878: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x3a1878u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3a187c: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x3a187cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3a1880: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x3a1880u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x3a1884: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1884u;
    {
        const bool branch_taken_0x3a1884 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x3A1888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1884u;
        // 0x3a1888: 0x46095002  mul.s       $f0, $f10, $f9 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1884) {
            ctx->pc = 0x3A189Cu;
            goto label_3a189c;
        }
    }
    ctx->pc = 0x3A188Cu;
    // 0x3a188c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a188cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a1890: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a1890u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a1894: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3A1894u;
    {
        const bool branch_taken_0x3a1894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1894u;
        // 0x3a1898: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1894) {
            ctx->pc = 0x3A18DCu;
            goto label_3a18dc;
        }
    }
    ctx->pc = 0x3A189Cu;
label_3a189c:
    // 0x3a189c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a189cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a18a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a18a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3a18a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3a18a8: 0x2442ea18  addiu       $v0, $v0, -0x15E8
    ctx->pc = 0x3a18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961688));
    // 0x3a18ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a18acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a18b0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a18b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a18b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3a18b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3a18b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3a18b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3a18bc: 0x2463ea08  addiu       $v1, $v1, -0x15F8
    ctx->pc = 0x3a18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961672));
    // 0x3a18c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3a18c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3a18c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a18c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a18c8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3a18c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3a18cc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3a18ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3a18d0: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A18D0u;
    {
        const bool branch_taken_0x3a18d0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3A18D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18D0u;
        // 0x3a18d4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a18d0) {
            ctx->pc = 0x3A18DCu;
            goto label_3a18dc;
        }
    }
    ctx->pc = 0x3A18D8u;
    // 0x3a18d8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3a18d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3a18dc:
    // 0x3a18dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a18dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a18e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3a18e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a18e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a18e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a18e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A18E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18E8u;
        // 0x3a18ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A18E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A18F0u;
}

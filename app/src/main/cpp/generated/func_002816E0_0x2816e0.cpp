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

// Function: func_002816E0
// Address: 0x2816e0 - 0x281940
void func_002816E0_0x2816e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002816E0_0x2816e0");
#endif

    switch (ctx->pc) {
        case 0x281728u: goto label_281728;
        case 0x281748u: goto label_281748;
        case 0x281790u: goto label_281790;
        case 0x281798u: goto label_281798;
        case 0x2817a0u: goto label_2817a0;
        case 0x2817acu: goto label_2817ac;
        case 0x2817b4u: goto label_2817b4;
        case 0x2817ecu: goto label_2817ec;
        case 0x2817f8u: goto label_2817f8;
        case 0x281824u: goto label_281824;
        case 0x281880u: goto label_281880;
        case 0x2818a4u: goto label_2818a4;
        case 0x2818dcu: goto label_2818dc;
        case 0x281904u: goto label_281904;
        default: break;
    }

    ctx->pc = 0x2816e0u;

    // 0x2816e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2816e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2816e4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2816e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2816e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2816e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2816ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2816ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2816f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2816f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2816f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2816f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2816f8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2816f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2816fc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2816fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x281700: 0x2412026c  addiu       $s2, $zero, 0x26C
    ctx->pc = 0x281700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x281704: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x281704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x281708: 0xae320564  sw          $s2, 0x564($s1)
    ctx->pc = 0x281708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
    // 0x28170c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28170cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281710: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x281710u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x281714: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x281714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x281718: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x281718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x28171c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x28171cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x281720: 0xc0a0bb0  jal         func_282EC0
    ctx->pc = 0x281720u;
    SET_GPR_U32(ctx, 31, 0x281728u);
    ctx->pc = 0x281724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281720u;
    // 0x281724: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282EC0u, 0x281720u, 0x281728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281728u;
label_281728:
    // 0x281728: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281728u;
    {
        const bool branch_taken_0x281728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281728u;
        // 0x28172c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281728) {
            ctx->pc = 0x281738u;
            goto label_281738;
        }
    }
    ctx->pc = 0x281730u;
    // 0x281730: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x281730u;
    {
        const bool branch_taken_0x281730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281730u;
        // 0x281734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281730) {
            ctx->pc = 0x281924u;
            goto label_281924;
        }
    }
    ctx->pc = 0x281738u;
label_281738:
    // 0x281738: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x281738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28173c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281740: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x281740u;
    SET_GPR_U32(ctx, 31, 0x281748u);
    ctx->pc = 0x281744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281740u;
    // 0x281744: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x281740u, 0x281748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281748u;
label_281748:
    // 0x281748: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x281748u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28174c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x281750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x281750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281754: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x281754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x281758: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28175c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x28175cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x281760: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x281760u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281764: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x281764u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x281768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28176c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x28176cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x281770: 0xae201580  sw          $zero, 0x1580($s1)
    ctx->pc = 0x281770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5504), GPR_U32(ctx, 0));
    // 0x281774: 0xae201584  sw          $zero, 0x1584($s1)
    ctx->pc = 0x281774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5508), GPR_U32(ctx, 0));
    // 0x281778: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x281778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28177c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x28177cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x281780: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x281780u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x281784: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x281784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x281788: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x281788u;
    SET_GPR_U32(ctx, 31, 0x281790u);
    ctx->pc = 0x28178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281788u;
    // 0x28178c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x281788u, 0x281790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281790u;
label_281790:
    // 0x281790: 0xc055f06  jal         func_157C18
    ctx->pc = 0x281790u;
    SET_GPR_U32(ctx, 31, 0x281798u);
    ctx->pc = 0x281794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281790u;
    // 0x281794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x281790u, 0x281798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281798u;
label_281798:
    // 0x281798: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x281798u;
    SET_GPR_U32(ctx, 31, 0x2817A0u);
    ctx->pc = 0x28179Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281798u;
    // 0x28179c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x281798u, 0x2817A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817A0u;
label_2817a0:
    // 0x2817a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2817a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817a4: 0xc054a88  jal         func_152A20
    ctx->pc = 0x2817A4u;
    SET_GPR_U32(ctx, 31, 0x2817ACu);
    ctx->pc = 0x2817A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817A4u;
    // 0x2817a8: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x2817A4u, 0x2817ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817ACu;
label_2817ac:
    // 0x2817ac: 0xc05280e  jal         func_14A038
    ctx->pc = 0x2817ACu;
    SET_GPR_U32(ctx, 31, 0x2817B4u);
    ctx->pc = 0x2817B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817ACu;
    // 0x2817b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x2817ACu, 0x2817B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817B4u;
label_2817b4:
    // 0x2817b4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x2817b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x2817b8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2817b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2817bc: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2817bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x2817c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2817c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2817c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2817c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2817c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2817c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2817cc: 0xa62502ae  sh          $a1, 0x2AE($s1)
    ctx->pc = 0x2817ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 686), (uint16_t)GPR_U32(ctx, 5));
    // 0x2817d0: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x2817d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x2817d4: 0xa2260616  sb          $a2, 0x616($s1)
    ctx->pc = 0x2817d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 6));
    // 0x2817d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2817d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817dc: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x2817dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x2817e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2817e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817e4: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x2817E4u;
    SET_GPR_U32(ctx, 31, 0x2817ECu);
    ctx->pc = 0x2817E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817E4u;
    // 0x2817e8: 0xa2270531  sb          $a3, 0x531($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x2817E4u, 0x2817ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817ECu;
label_2817ec:
    // 0x2817ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2817ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817f0: 0xc05404a  jal         func_150128
    ctx->pc = 0x2817F0u;
    SET_GPR_U32(ctx, 31, 0x2817F8u);
    ctx->pc = 0x2817F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2817F0u;
    // 0x2817f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x2817F0u, 0x2817F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817F8u;
label_2817f8:
    // 0x2817f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2817f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2817fc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2817fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x281800: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x281800u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x281804: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x281804u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x281808: 0x1072001e  beq         $v1, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x281808u;
    {
        const bool branch_taken_0x281808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x28180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281808u;
        // 0x28180c: 0xae200670  sw          $zero, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281808) {
            ctx->pc = 0x281884u;
            goto label_281884;
        }
    }
    ctx->pc = 0x281810u;
    // 0x281810: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x281810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x281814: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281818: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x281818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x28181c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x28181Cu;
    SET_GPR_U32(ctx, 31, 0x281824u);
    ctx->pc = 0x281820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28181Cu;
    // 0x281820: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x28181Cu, 0x281824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281824u;
label_281824:
    // 0x281824: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x281824u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x281828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28182c: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x28182cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x281830: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x281830u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x281834: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x281834u;
    {
        const bool branch_taken_0x281834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281834u;
        // 0x281838: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281834) {
            ctx->pc = 0x281848u;
            goto label_281848;
        }
    }
    ctx->pc = 0x28183Cu;
    // 0x28183c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x28183cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x281840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281840u;
    {
        const bool branch_taken_0x281840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281840u;
        // 0x281844: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281840) {
            ctx->pc = 0x28184Cu;
            goto label_28184c;
        }
    }
    ctx->pc = 0x281848u;
label_281848:
    // 0x281848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28184c:
    // 0x28184c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x28184cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x281850: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x281854: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x281854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x281858: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x281858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x28185c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x28185cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x281860: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x281860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281864: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x281864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x281868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28186c: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x28186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x281870: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x281870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x281874: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281878: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x281878u;
    SET_GPR_U32(ctx, 31, 0x281880u);
    ctx->pc = 0x28187Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281878u;
    // 0x28187c: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x281878u, 0x281880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281880u;
label_281880:
    // 0x281880: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x281880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_281884:
    // 0x281884: 0x26702fc0  addiu       $s0, $s3, 0x2FC0
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x281888: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x281888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x28188c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28188cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x281890: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x281890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x281894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281898: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x281898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28189c: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x28189Cu;
    SET_GPR_U32(ctx, 31, 0x2818A4u);
    ctx->pc = 0x2818A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28189Cu;
    // 0x2818a0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x28189Cu, 0x2818A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818A4u;
label_2818a4:
    // 0x2818a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2818a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2818a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2818a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2818ac: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2818acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2818b0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2818b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2818b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2818b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818b8: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x2818b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2818bc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2818bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2818c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2818c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2818c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2818c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2818c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818cc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2818ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2818d0: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2818d4: 0xc04d220  jal         func_134880
    ctx->pc = 0x2818D4u;
    SET_GPR_U32(ctx, 31, 0x2818DCu);
    ctx->pc = 0x2818D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818D4u;
    // 0x2818d8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x2818D4u, 0x2818DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2818DCu;
label_2818dc:
    // 0x2818dc: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x2818dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x2818e0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x2818e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x2818e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2818e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2818e8: 0xa22015b0  sb          $zero, 0x15B0($s1)
    ctx->pc = 0x2818e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5552), (uint8_t)GPR_U32(ctx, 0));
    // 0x2818ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2818ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2818f0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2818f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2818f4: 0xae2302d0  sw          $v1, 0x2D0($s1)
    ctx->pc = 0x2818f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 3));
    // 0x2818f8: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x2818f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x2818fc: 0xc0b6630  jal         func_2D98C0
    ctx->pc = 0x2818FCu;
    SET_GPR_U32(ctx, 31, 0x281904u);
    ctx->pc = 0x281900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818FCu;
    // 0x281900: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D98C0u, 0x2818FCu, 0x281904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281904u;
label_281904:
    // 0x281904: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x281904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x281908: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x281908u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28190c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28190cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x281910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281914: 0xa2220617  sb          $v0, 0x617($s1)
    ctx->pc = 0x281914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x281918: 0xe6201564  swc1        $f0, 0x1564($s1)
    ctx->pc = 0x281918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5476), bits); }
    // 0x28191c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281920: 0xae201568  sw          $zero, 0x1568($s1)
    ctx->pc = 0x281920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 0));
label_281924:
    // 0x281924: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x281924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x281928: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x281928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28192c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x28192cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x281930: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x281930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281934: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x281934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281938: 0x3e00008  jr          $ra
    ctx->pc = 0x281938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281938u;
        // 0x28193c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281940u;
}

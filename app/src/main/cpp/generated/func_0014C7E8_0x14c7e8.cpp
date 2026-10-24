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

// Function: func_0014C7E8
// Address: 0x14c7e8 - 0x14d0e8
void func_0014C7E8_0x14c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0014C7E8_0x14c7e8");
#endif

    switch (ctx->pc) {
        case 0x14c87cu: goto label_14c87c;
        case 0x14c884u: goto label_14c884;
        case 0x14c898u: goto label_14c898;
        case 0x14c8b4u: goto label_14c8b4;
        case 0x14c92cu: goto label_14c92c;
        case 0x14c988u: goto label_14c988;
        case 0x14c9fcu: goto label_14c9fc;
        case 0x14ca28u: goto label_14ca28;
        case 0x14ca34u: goto label_14ca34;
        case 0x14ca44u: goto label_14ca44;
        case 0x14ca60u: goto label_14ca60;
        case 0x14cab4u: goto label_14cab4;
        case 0x14cb14u: goto label_14cb14;
        case 0x14cb24u: goto label_14cb24;
        case 0x14cb2cu: goto label_14cb2c;
        case 0x14cc04u: goto label_14cc04;
        case 0x14cc7cu: goto label_14cc7c;
        case 0x14ccd8u: goto label_14ccd8;
        case 0x14cd4cu: goto label_14cd4c;
        case 0x14cd78u: goto label_14cd78;
        case 0x14cd84u: goto label_14cd84;
        case 0x14ce78u: goto label_14ce78;
        case 0x14ce94u: goto label_14ce94;
        case 0x14cee8u: goto label_14cee8;
        case 0x14cf48u: goto label_14cf48;
        case 0x14cf58u: goto label_14cf58;
        case 0x14cf60u: goto label_14cf60;
        case 0x14d034u: goto label_14d034;
        case 0x14d070u: goto label_14d070;
        case 0x14d084u: goto label_14d084;
        default: break;
    }

    ctx->pc = 0x14c7e8u;

    // 0x14c7e8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14c7ec: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x14c7ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
    // 0x14c7f0: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14c7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14c7f4: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x14c7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
    // 0x14c7f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14c7fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x14c7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x14c800: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14c800u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c804: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x14c804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
    // 0x14c808: 0x26c40228  addiu       $a0, $s6, 0x228
    ctx->pc = 0x14c808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 552));
    // 0x14c80c: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x14c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
    // 0x14c810: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14c810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14c814: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x14c814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
    // 0x14c818: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14c818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14c81c: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x14c81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
    // 0x14c820: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x14c820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
    // 0x14c824: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x14c824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
    // 0x14c828: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x14c828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
    // 0x14c82c: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x14c82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
    // 0x14c830: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x14c830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
    // 0x14c834: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x14c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
    // 0x14c838: 0xe7bc02b0  swc1        $f28, 0x2B0($sp)
    ctx->pc = 0x14c838u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
    // 0x14c83c: 0xe7bb02a8  swc1        $f27, 0x2A8($sp)
    ctx->pc = 0x14c83cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
    // 0x14c840: 0xe7ba02a0  swc1        $f26, 0x2A0($sp)
    ctx->pc = 0x14c840u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
    // 0x14c844: 0xe7b90298  swc1        $f25, 0x298($sp)
    ctx->pc = 0x14c844u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
    // 0x14c848: 0xe7b80290  swc1        $f24, 0x290($sp)
    ctx->pc = 0x14c848u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
    // 0x14c84c: 0xe7b70288  swc1        $f23, 0x288($sp)
    ctx->pc = 0x14c84cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x14c850: 0xe7b60280  swc1        $f22, 0x280($sp)
    ctx->pc = 0x14c850u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x14c854: 0xe7b50278  swc1        $f21, 0x278($sp)
    ctx->pc = 0x14c854u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 632), bits); }
    // 0x14c858: 0xe7b40270  swc1        $f20, 0x270($sp)
    ctx->pc = 0x14c858u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x14c85c: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x14c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x14c860: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14c864: 0x245e0050  addiu       $fp, $v0, 0x50
    ctx->pc = 0x14c864u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x14c868: 0x24570010  addiu       $s7, $v0, 0x10
    ctx->pc = 0x14c868u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14c86c: 0x24420110  addiu       $v0, $v0, 0x110
    ctx->pc = 0x14c86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x14c870: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x14c870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c874: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14C874u;
    SET_GPR_U32(ctx, 31, 0x14C87Cu);
    ctx->pc = 0x14C878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C874u;
    // 0x14c878: 0xafa201c4  sw          $v0, 0x1C4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14C874u, 0x14C87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C87Cu;
label_14c87c:
    // 0x14c87c: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14C87Cu;
    SET_GPR_U32(ctx, 31, 0x14C884u);
    ctx->pc = 0x14C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C87Cu;
    // 0x14c880: 0x8fa401c4  lw          $a0, 0x1C4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14C87Cu, 0x14C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C884u;
label_14c884:
    // 0x14c884: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14c888: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x14c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c88c: 0x8c65aff0  lw          $a1, -0x5010($v1)
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14c890: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14C890u;
    SET_GPR_U32(ctx, 31, 0x14C898u);
    ctx->pc = 0x14C894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C890u;
    // 0x14c894: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14C890u, 0x14C898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C898u;
label_14c898:
    // 0x14c898: 0x8ec20250  lw          $v0, 0x250($s6)
    ctx->pc = 0x14c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 592)));
    // 0x14c89c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14c89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x14c8a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C8A0u;
    {
        const bool branch_taken_0x14c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8A0u;
        // 0x14c8a4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8a0) {
            ctx->pc = 0x14C8B4u;
            goto label_14c8b4;
        }
    }
    ctx->pc = 0x14C8A8u;
    // 0x14c8a8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x14c8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x14c8ac: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14C8ACu;
    SET_GPR_U32(ctx, 31, 0x14C8B4u);
    ctx->pc = 0x14C8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C8ACu;
    // 0x14c8b0: 0x24a56900  addiu       $a1, $a1, 0x6900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14C8ACu, 0x14C8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C8B4u;
label_14c8b4:
    // 0x14c8b4: 0x8ec20250  lw          $v0, 0x250($s6)
    ctx->pc = 0x14c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 592)));
    // 0x14c8b8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x14c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x14c8bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14c8c0: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x14C8C0u;
    {
        const bool branch_taken_0x14c8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C8C0u;
        // 0x14c8c4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8c0) {
            ctx->pc = 0x14CC04u;
            goto label_14cc04;
        }
    }
    ctx->pc = 0x14C8C8u;
    // 0x14c8c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14c8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14c8cc: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14c8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x14c8d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14c8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14c8d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c8d8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14c8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14c8dc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x14c8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x14c8e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14c8e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14c8e4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14c8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14c8e8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x14c8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x14c8ec: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x14c8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14c8f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14c8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14c8f4: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x14c8f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x14c8f8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x14c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14c8fc: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x14c8fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x14c900: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x14c900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x14c904: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x14c904u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x14c908: 0xe7b8005c  swc1        $f24, 0x5C($sp)
    ctx->pc = 0x14c908u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14c90c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x14c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x14c910: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x14c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x14c914: 0xe7b8006c  swc1        $f24, 0x6C($sp)
    ctx->pc = 0x14c914u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x14c918: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x14c918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x14c91c: 0xe7b80074  swc1        $f24, 0x74($sp)
    ctx->pc = 0x14c91cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x14c920: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x14c920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x14c924: 0xc0c2a32  jal         func_30A8C8
    ctx->pc = 0x14C924u;
    SET_GPR_U32(ctx, 31, 0x14C92Cu);
    ctx->pc = 0x14C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C924u;
    // 0x14c928: 0xe7b8007c  swc1        $f24, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8C8u, 0x14C924u, 0x14C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C92Cu;
label_14c92c:
    // 0x14c92c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x14c92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x14c930: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x14c930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x14c934: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14c934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14c938: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14c938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14c93c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x14c93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x14c940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14c940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14c944: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14c948: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14c948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14c94c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x14c94cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x14c950: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x14c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c954: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x14c954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x14c958: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x14c958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x14c95c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x14c95cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x14c960: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14c960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14c964: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x14c964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x14c968: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14c968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x14c96c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14c96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14c970: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x14c970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x14c974: 0x0  nop
    ctx->pc = 0x14c974u;
    // NOP
    // 0x14c978: 0x0  nop
    ctx->pc = 0x14c978u;
    // NOP
    // 0x14c97c: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14c97cu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14c980: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x14C980u;
    SET_GPR_U32(ctx, 31, 0x14C988u);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x14C980u, 0x14C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C988u;
label_14c988:
    // 0x14c988: 0xc6616b88  lwc1        $f1, 0x6B88($s3)
    ctx->pc = 0x14c988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14c98c: 0xc64d1180  lwc1        $f13, 0x1180($s2)
    ctx->pc = 0x14c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14c990: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x14c990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x14c994: 0xc68c1190  lwc1        $f12, 0x1190($s4)
    ctx->pc = 0x14c994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14c998: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x14c998u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14c99c: 0xc6cf0130  lwc1        $f15, 0x130($s6)
    ctx->pc = 0x14c99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14c9a0: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x14c9a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x14c9a4: 0x0  nop
    ctx->pc = 0x14c9a4u;
    // NOP
    // 0x14c9a8: 0x0  nop
    ctx->pc = 0x14c9a8u;
    // NOP
    // 0x14c9ac: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x14c9acu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x14c9b0: 0xc6d00134  lwc1        $f16, 0x134($s6)
    ctx->pc = 0x14c9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x14c9b4: 0x0  nop
    ctx->pc = 0x14c9b4u;
    // NOP
    // 0x14c9b8: 0x461b6b43  div.s       $f13, $f13, $f27
    ctx->pc = 0x14c9b8u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[27]);
    // 0x14c9bc: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x14c9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x14c9c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14c9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14c9c4: 0x46197bc0  add.s       $f15, $f15, $f25
    ctx->pc = 0x14c9c4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[25]);
    // 0x14c9c8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x14c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x14c9cc: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x14c9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x14c9d0: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x14c9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x14c9d4: 0x46198400  add.s       $f16, $f16, $f25
    ctx->pc = 0x14c9d4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[25]);
    // 0x14c9d8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x14c9d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14c9dc: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x14c9dcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x14c9e0: 0x4600d4c6  mov.s       $f19, $f26
    ctx->pc = 0x14c9e0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[26]);
    // 0x14c9e4: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x14c9e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x14c9e8: 0x0  nop
    ctx->pc = 0x14c9e8u;
    // NOP
    // 0x14c9ec: 0x0  nop
    ctx->pc = 0x14c9ecu;
    // NOP
    // 0x14c9f0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x14c9f0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x14c9f4: 0xc0c2a90  jal         func_30AA40
    ctx->pc = 0x14C9F4u;
    SET_GPR_U32(ctx, 31, 0x14C9FCu);
    ctx->pc = 0x14C9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C9F4u;
    // 0x14c9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA40u, 0x14C9F4u, 0x14C9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9FCu;
label_14c9fc:
    // 0x14c9fc: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x14c9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ca00: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x14ca00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14ca04: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x14ca04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14ca08: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14ca08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ca0c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14ca0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14ca10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14ca10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca14: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14ca14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14ca18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14ca18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca1c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x14ca1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14ca20: 0xc051d52  jal         func_147548
    ctx->pc = 0x14CA20u;
    SET_GPR_U32(ctx, 31, 0x14CA28u);
    ctx->pc = 0x14CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA20u;
    // 0x14ca24: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x14CA20u, 0x14CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA28u;
label_14ca28:
    // 0x14ca28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca2c: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14CA2Cu;
    SET_GPR_U32(ctx, 31, 0x14CA34u);
    ctx->pc = 0x14CA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA2Cu;
    // 0x14ca30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14CA2Cu, 0x14CA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA34u;
label_14ca34:
    // 0x14ca34: 0x27b00180  addiu       $s0, $sp, 0x180
    ctx->pc = 0x14ca34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14ca38: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14ca38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ca3c: 0xc051d4a  jal         func_147528
    ctx->pc = 0x14CA3Cu;
    SET_GPR_U32(ctx, 31, 0x14CA44u);
    ctx->pc = 0x14CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA3Cu;
    // 0x14ca40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x14CA3Cu, 0x14CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA44u;
label_14ca44:
    // 0x14ca44: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14ca48: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14ca4c: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x14ca4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ca50: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x14ca50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x14ca54: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14ca54u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14ca58: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x14CA58u;
    SET_GPR_U32(ctx, 31, 0x14CA60u);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x14CA58u, 0x14CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA60u;
label_14ca60:
    // 0x14ca60: 0xc6756b88  lwc1        $f21, 0x6B88($s3)
    ctx->pc = 0x14ca60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14ca64: 0xc6571180  lwc1        $f23, 0x1180($s2)
    ctx->pc = 0x14ca64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14ca68: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x14ca68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x14ca6c: 0xc6941190  lwc1        $f20, 0x1190($s4)
    ctx->pc = 0x14ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ca70: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x14ca70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14ca74: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x14ca74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x14ca78: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14ca78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14ca7c: 0x0  nop
    ctx->pc = 0x14ca7cu;
    // NOP
    // 0x14ca80: 0x0  nop
    ctx->pc = 0x14ca80u;
    // NOP
    // 0x14ca84: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x14ca84u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x14ca88: 0x0  nop
    ctx->pc = 0x14ca88u;
    // NOP
    // 0x14ca8c: 0x0  nop
    ctx->pc = 0x14ca8cu;
    // NOP
    // 0x14ca90: 0x461bbdc3  div.s       $f23, $f23, $f27
    ctx->pc = 0x14ca90u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[27]);
    // 0x14ca94: 0x461ca502  mul.s       $f20, $f20, $f28
    ctx->pc = 0x14ca94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x14ca98: 0x0  nop
    ctx->pc = 0x14ca98u;
    // NOP
    // 0x14ca9c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x14ca9cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x14caa0: 0x0  nop
    ctx->pc = 0x14caa0u;
    // NOP
    // 0x14caa4: 0x0  nop
    ctx->pc = 0x14caa4u;
    // NOP
    // 0x14caa8: 0x4614b583  div.s       $f22, $f22, $f20
    ctx->pc = 0x14caa8u;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[20]);
    // 0x14caac: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14CAACu;
    SET_GPR_U32(ctx, 31, 0x14CAB4u);
    ctx->pc = 0x14CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CAACu;
    // 0x14cab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14CAACu, 0x14CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CAB4u;
label_14cab4:
    // 0x14cab4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x14cab8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14cab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14cabc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cabcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cac0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14cac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14cac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14cac8: 0x34210aec  ori         $at, $at, 0xAEC
    ctx->pc = 0x14cac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2796);
    // 0x14cacc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14caccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cad4: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x14cad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x14cad8: 0x3421d58a  ori         $at, $at, 0xD58A
    ctx->pc = 0x14cad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54666);
    // 0x14cadc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14cadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14cae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cae4: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x14cae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x14cae8: 0x4616b0c0  add.s       $f3, $f22, $f22
    ctx->pc = 0x14cae8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x14caec: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x14caecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x14caf0: 0xe7b8012c  swc1        $f24, 0x12C($sp)
    ctx->pc = 0x14caf0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x14caf4: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x14caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x14caf8: 0x0  nop
    ctx->pc = 0x14caf8u;
    // NOP
    // 0x14cafc: 0x0  nop
    ctx->pc = 0x14cafcu;
    // NOP
    // 0x14cb00: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x14cb00u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x14cb04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14cb04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14cb08: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x14cb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x14cb0c: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x14CB0Cu;
    SET_GPR_U32(ctx, 31, 0x14CB14u);
    ctx->pc = 0x14CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB0Cu;
    // 0x14cb10: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x14CB0Cu, 0x14CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB14u;
label_14cb14:
    // 0x14cb14: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x14cb14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14cb18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cb18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cb1c: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x14CB1Cu;
    SET_GPR_U32(ctx, 31, 0x14CB24u);
    ctx->pc = 0x14CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB1Cu;
    // 0x14cb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x14CB1Cu, 0x14CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB24u;
label_14cb24:
    // 0x14cb24: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14CB24u;
    SET_GPR_U32(ctx, 31, 0x14CB2Cu);
    ctx->pc = 0x14CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB24u;
    // 0x14cb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14CB24u, 0x14CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB2Cu;
label_14cb2c:
    // 0x14cb2c: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x14cb2cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x14cb30: 0x3c01c6ff  lui         $at, 0xC6FF
    ctx->pc = 0x14cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50943 << 16));
    // 0x14cb34: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x14cb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x14cb38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cb3c: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x14cb3cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x14cb40: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14cb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14cb44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cb48: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x14cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x14cb4c: 0x26c20080  addiu       $v0, $s6, 0x80
    ctx->pc = 0x14cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x14cb50: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x14cb50u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x14cb54: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x14cb54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x14cb58: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x14cb58u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x14cb5c: 0xe7b90174  swc1        $f25, 0x174($sp)
    ctx->pc = 0x14cb5cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x14cb60: 0xe7b8017c  swc1        $f24, 0x17C($sp)
    ctx->pc = 0x14cb60u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x14cb64: 0x0  nop
    ctx->pc = 0x14cb64u;
    // NOP
    // 0x14cb68: 0x0  nop
    ctx->pc = 0x14cb68u;
    // NOP
    // 0x14cb6c: 0x461aad43  div.s       $f21, $f21, $f26
    ctx->pc = 0x14cb6cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[26]);
    // 0x14cb70: 0xe7b90170  swc1        $f25, 0x170($sp)
    ctx->pc = 0x14cb70u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x14cb74: 0x0  nop
    ctx->pc = 0x14cb74u;
    // NOP
    // 0x14cb78: 0x0  nop
    ctx->pc = 0x14cb78u;
    // NOP
    // 0x14cb7c: 0x461aa503  div.s       $f20, $f20, $f26
    ctx->pc = 0x14cb7cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[26]);
    // 0x14cb80: 0xe7b50154  swc1        $f21, 0x154($sp)
    ctx->pc = 0x14cb80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x14cb84: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x14cb84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x14cb88: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x14cb88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cb8c: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x14cb8cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14cb90: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x14cb90u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x14cb94: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x14cb94u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x14cb98: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x14cb98u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14cb9c: 0xd8490010  lqc2        $vf9, 0x10($v0)
    ctx->pc = 0x14cb9cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14cba0: 0xd84a0020  lqc2        $vf10, 0x20($v0)
    ctx->pc = 0x14cba0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x14cba4: 0xd84b0030  lqc2        $vf11, 0x30($v0)
    ctx->pc = 0x14cba4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x14cba8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14cba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14cbacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbb0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14cbb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbb4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14cbb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14cbb8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14cbb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbbc: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14cbbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbc0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14cbc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbc4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14cbc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14cbc8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14cbc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbcc: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14cbccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbd0: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14cbd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbd4: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14cbd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14cbd8: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14cbd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbdc: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14cbdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbe0: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14cbe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cbe4: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14cbe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14cbe8: 0xfbcc0000  sqc2        $vf12, 0x0($fp)
    ctx->pc = 0x14cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14cbec: 0xfbcd0010  sqc2        $vf13, 0x10($fp)
    ctx->pc = 0x14cbecu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14cbf0: 0xfbce0020  sqc2        $vf14, 0x20($fp)
    ctx->pc = 0x14cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14cbf4: 0xfbcf0030  sqc2        $vf15, 0x30($fp)
    ctx->pc = 0x14cbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14cbf8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x14cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x14cbfc: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14CBFCu;
    SET_GPR_U32(ctx, 31, 0x14CC04u);
    ctx->pc = 0x14CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CBFCu;
    // 0x14cc00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14CBFCu, 0x14CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC04u;
label_14cc04:
    // 0x14cc04: 0x8ec20250  lw          $v0, 0x250($s6)
    ctx->pc = 0x14cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 592)));
    // 0x14cc08: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14cc0c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14cc10: 0x10400108  beqz        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x14CC10u;
    {
        const bool branch_taken_0x14cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CC10u;
        // 0x14cc14: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cc10) {
            ctx->pc = 0x14D034u;
            goto label_14d034;
        }
    }
    ctx->pc = 0x14CC18u;
    // 0x14cc18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14cc18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14cc1c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14cc1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x14cc20: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x14cc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x14cc24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cc24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cc28: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14cc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14cc2c: 0x3c014311  lui         $at, 0x4311
    ctx->pc = 0x14cc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17169 << 16));
    // 0x14cc30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cc30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cc34: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x14cc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14cc38: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x14cc38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x14cc3c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x14cc3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14cc40: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14cc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14cc44: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x14cc44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x14cc48: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x14cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x14cc4c: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x14cc4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x14cc50: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x14cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x14cc54: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x14cc54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x14cc58: 0xe7b8005c  swc1        $f24, 0x5C($sp)
    ctx->pc = 0x14cc58u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14cc5c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x14cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x14cc60: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x14cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x14cc64: 0xe7b8006c  swc1        $f24, 0x6C($sp)
    ctx->pc = 0x14cc64u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x14cc68: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x14cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x14cc6c: 0xe7b80074  swc1        $f24, 0x74($sp)
    ctx->pc = 0x14cc6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x14cc70: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x14cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x14cc74: 0xc0c2a32  jal         func_30A8C8
    ctx->pc = 0x14CC74u;
    SET_GPR_U32(ctx, 31, 0x14CC7Cu);
    ctx->pc = 0x14CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CC74u;
    // 0x14cc78: 0xe7b8007c  swc1        $f24, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A8C8u, 0x14CC74u, 0x14CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CC7Cu;
label_14cc7c:
    // 0x14cc7c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x14cc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x14cc80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x14cc80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x14cc84: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14cc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x14cc88: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14cc8c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x14cc8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x14cc90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14cc90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14cc94: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14cc98: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14cc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14cc9c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x14cc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x14cca0: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x14cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cca4: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x14cca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x14cca8: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x14cca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x14ccac: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x14ccacu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x14ccb0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x14ccb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x14ccb4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x14ccb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x14ccb8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x14ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x14ccbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14ccbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14ccc0: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x14ccc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x14ccc4: 0x0  nop
    ctx->pc = 0x14ccc4u;
    // NOP
    // 0x14ccc8: 0x0  nop
    ctx->pc = 0x14ccc8u;
    // NOP
    // 0x14cccc: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14ccccu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14ccd0: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x14CCD0u;
    SET_GPR_U32(ctx, 31, 0x14CCD8u);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x14CCD0u, 0x14CCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CCD8u;
label_14ccd8:
    // 0x14ccd8: 0xc6816b88  lwc1        $f1, 0x6B88($s4)
    ctx->pc = 0x14ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ccdc: 0xc66d1180  lwc1        $f13, 0x1180($s3)
    ctx->pc = 0x14ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x14cce0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x14cce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x14cce4: 0xc6ac1190  lwc1        $f12, 0x1190($s5)
    ctx->pc = 0x14cce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14cce8: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x14cce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14ccec: 0xc6cf0130  lwc1        $f15, 0x130($s6)
    ctx->pc = 0x14ccecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x14ccf0: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x14ccf0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x14ccf4: 0x0  nop
    ctx->pc = 0x14ccf4u;
    // NOP
    // 0x14ccf8: 0x0  nop
    ctx->pc = 0x14ccf8u;
    // NOP
    // 0x14ccfc: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x14ccfcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x14cd00: 0xc6d00134  lwc1        $f16, 0x134($s6)
    ctx->pc = 0x14cd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x14cd04: 0x0  nop
    ctx->pc = 0x14cd04u;
    // NOP
    // 0x14cd08: 0x461b6b43  div.s       $f13, $f13, $f27
    ctx->pc = 0x14cd08u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[13], ctx->f[27]);
    // 0x14cd0c: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x14cd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x14cd10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cd10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cd14: 0x46197bc0  add.s       $f15, $f15, $f25
    ctx->pc = 0x14cd14u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[25]);
    // 0x14cd18: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x14cd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x14cd1c: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x14cd1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x14cd20: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x14cd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x14cd24: 0x46198400  add.s       $f16, $f16, $f25
    ctx->pc = 0x14cd24u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[25]);
    // 0x14cd28: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x14cd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14cd2c: 0x4600c446  mov.s       $f17, $f24
    ctx->pc = 0x14cd2cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[24]);
    // 0x14cd30: 0x4600d4c6  mov.s       $f19, $f26
    ctx->pc = 0x14cd30u;
    ctx->f[19] = FPU_MOV_S(ctx->f[26]);
    // 0x14cd34: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x14cd34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x14cd38: 0x0  nop
    ctx->pc = 0x14cd38u;
    // NOP
    // 0x14cd3c: 0x0  nop
    ctx->pc = 0x14cd3cu;
    // NOP
    // 0x14cd40: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x14cd40u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x14cd44: 0xc0c2a90  jal         func_30AA40
    ctx->pc = 0x14CD44u;
    SET_GPR_U32(ctx, 31, 0x14CD4Cu);
    ctx->pc = 0x14CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD44u;
    // 0x14cd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA40u, 0x14CD44u, 0x14CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD4Cu;
label_14cd4c:
    // 0x14cd4c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x14cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14cd50: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x14cd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x14cd54: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x14cd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14cd58: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cd58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd5c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x14cd5cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x14cd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14cd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14cd64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14cd68: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x14cd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14cd6c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x14cd6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x14cd70: 0xc051d52  jal         func_147548
    ctx->pc = 0x14CD70u;
    SET_GPR_U32(ctx, 31, 0x14CD78u);
    ctx->pc = 0x14CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD70u;
    // 0x14cd74: 0xe7a00094  swc1        $f0, 0x94($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x14CD70u, 0x14CD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD78u;
label_14cd78:
    // 0x14cd78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14cd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cd7c: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14CD7Cu;
    SET_GPR_U32(ctx, 31, 0x14CD84u);
    ctx->pc = 0x14CD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CD7Cu;
    // 0x14cd80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14CD7Cu, 0x14CD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CD84u;
label_14cd84:
    // 0x14cd84: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x14cd84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14cd88: 0xdac50010  lqc2        $vf5, 0x10($s6)
    ctx->pc = 0x14cd88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x14cd8c: 0xdac60020  lqc2        $vf6, 0x20($s6)
    ctx->pc = 0x14cd8cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x14cd90: 0xdac70030  lqc2        $vf7, 0x30($s6)
    ctx->pc = 0x14cd90u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x14cd94: 0xdae80000  lqc2        $vf8, 0x0($s7)
    ctx->pc = 0x14cd94u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14cd98: 0xdae90010  lqc2        $vf9, 0x10($s7)
    ctx->pc = 0x14cd98u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x14cd9c: 0xdaea0020  lqc2        $vf10, 0x20($s7)
    ctx->pc = 0x14cd9cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x14cda0: 0xdaeb0030  lqc2        $vf11, 0x30($s7)
    ctx->pc = 0x14cda0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x14cda4: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14cda4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cda8: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14cda8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdac: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14cdacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdb0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14cdb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14cdb4: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14cdb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdb8: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14cdb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdbc: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14cdbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdc0: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14cdc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14cdc4: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14cdc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdc8: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14cdc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdcc: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14cdccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdd0: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14cdd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14cdd4: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14cdd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cdd8: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14cdd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cddc: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14cddcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cde0: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14cde0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14cde4: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x14cde4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14cde8: 0xfaed0010  sqc2        $vf13, 0x10($s7)
    ctx->pc = 0x14cde8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14cdec: 0xfaee0020  sqc2        $vf14, 0x20($s7)
    ctx->pc = 0x14cdecu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14cdf0: 0xfaef0030  sqc2        $vf15, 0x30($s7)
    ctx->pc = 0x14cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14cdf4: 0x26d20080  addiu       $s2, $s6, 0x80
    ctx->pc = 0x14cdf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 128));
    // 0x14cdf8: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x14cdf8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14cdfc: 0xdae50010  lqc2        $vf5, 0x10($s7)
    ctx->pc = 0x14cdfcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x14ce00: 0xdae60020  lqc2        $vf6, 0x20($s7)
    ctx->pc = 0x14ce00u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x14ce04: 0xdae70030  lqc2        $vf7, 0x30($s7)
    ctx->pc = 0x14ce04u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x14ce08: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x14ce08u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ce0c: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x14ce0cu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14ce10: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x14ce10u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14ce14: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x14ce14u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x14ce18: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14ce18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce1c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14ce1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce20: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14ce20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce24: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14ce24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14ce28: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14ce28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce2c: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14ce2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce30: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14ce30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce34: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14ce34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14ce38: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14ce38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce3c: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14ce3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce40: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14ce40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce44: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14ce44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14ce48: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14ce48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce4c: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14ce4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce50: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14ce50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14ce54: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14ce54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14ce58: 0xfaec0000  sqc2        $vf12, 0x0($s7)
    ctx->pc = 0x14ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14ce5c: 0xfaed0010  sqc2        $vf13, 0x10($s7)
    ctx->pc = 0x14ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14ce60: 0xfaee0020  sqc2        $vf14, 0x20($s7)
    ctx->pc = 0x14ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14ce64: 0xfaef0030  sqc2        $vf15, 0x30($s7)
    ctx->pc = 0x14ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14ce68: 0x27b00180  addiu       $s0, $sp, 0x180
    ctx->pc = 0x14ce68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x14ce6c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x14ce6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ce70: 0xc051d4a  jal         func_147528
    ctx->pc = 0x14CE70u;
    SET_GPR_U32(ctx, 31, 0x14CE78u);
    ctx->pc = 0x14CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CE70u;
    // 0x14ce74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x14CE70u, 0x14CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE78u;
label_14ce78:
    // 0x14ce78: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x14ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x14ce7c: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x14ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x14ce80: 0xc44c0250  lwc1        $f12, 0x250($v0)
    ctx->pc = 0x14ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14ce84: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x14ce84u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x14ce88: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x14ce88u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[20]);
    // 0x14ce8c: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x14CE8Cu;
    SET_GPR_U32(ctx, 31, 0x14CE94u);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x14CE8Cu, 0x14CE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CE94u;
label_14ce94:
    // 0x14ce94: 0xc6956b88  lwc1        $f21, 0x6B88($s4)
    ctx->pc = 0x14ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14ce98: 0xc6771180  lwc1        $f23, 0x1180($s3)
    ctx->pc = 0x14ce98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14ce9c: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x14ce9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
    // 0x14cea0: 0xc6b41190  lwc1        $f20, 0x1190($s5)
    ctx->pc = 0x14cea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14cea4: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x14cea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14cea8: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x14cea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x14ceac: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x14ceacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x14ceb0: 0x0  nop
    ctx->pc = 0x14ceb0u;
    // NOP
    // 0x14ceb4: 0x0  nop
    ctx->pc = 0x14ceb4u;
    // NOP
    // 0x14ceb8: 0x4615a503  div.s       $f20, $f20, $f21
    ctx->pc = 0x14ceb8u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[21]);
    // 0x14cebc: 0x0  nop
    ctx->pc = 0x14cebcu;
    // NOP
    // 0x14cec0: 0x0  nop
    ctx->pc = 0x14cec0u;
    // NOP
    // 0x14cec4: 0x461bbdc3  div.s       $f23, $f23, $f27
    ctx->pc = 0x14cec4u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[27]);
    // 0x14cec8: 0x461ca502  mul.s       $f20, $f20, $f28
    ctx->pc = 0x14cec8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[28]);
    // 0x14cecc: 0x0  nop
    ctx->pc = 0x14ceccu;
    // NOP
    // 0x14ced0: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x14ced0u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x14ced4: 0x0  nop
    ctx->pc = 0x14ced4u;
    // NOP
    // 0x14ced8: 0x0  nop
    ctx->pc = 0x14ced8u;
    // NOP
    // 0x14cedc: 0x4614b583  div.s       $f22, $f22, $f20
    ctx->pc = 0x14cedcu;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[20]);
    // 0x14cee0: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14CEE0u;
    SET_GPR_U32(ctx, 31, 0x14CEE8u);
    ctx->pc = 0x14CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CEE0u;
    // 0x14cee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14CEE0u, 0x14CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CEE8u;
label_14cee8:
    // 0x14cee8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x14cee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x14ceec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14ceecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14cef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cef4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14cef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14cef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14cefc: 0x34210aec  ori         $at, $at, 0xAEC
    ctx->pc = 0x14cefcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2796);
    // 0x14cf00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cf00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cf04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14cf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf08: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x14cf08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x14cf0c: 0x3421d58a  ori         $at, $at, 0xD58A
    ctx->pc = 0x14cf0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54666);
    // 0x14cf10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x14cf10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14cf14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf18: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x14cf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x14cf1c: 0x4616b0c0  add.s       $f3, $f22, $f22
    ctx->pc = 0x14cf1cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x14cf20: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x14cf20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x14cf24: 0xe7b8012c  swc1        $f24, 0x12C($sp)
    ctx->pc = 0x14cf24u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x14cf28: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x14cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
    // 0x14cf2c: 0x0  nop
    ctx->pc = 0x14cf2cu;
    // NOP
    // 0x14cf30: 0x0  nop
    ctx->pc = 0x14cf30u;
    // NOP
    // 0x14cf34: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x14cf34u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x14cf38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14cf38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x14cf3c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x14cf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x14cf40: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x14CF40u;
    SET_GPR_U32(ctx, 31, 0x14CF48u);
    ctx->pc = 0x14CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF40u;
    // 0x14cf44: 0xe7a00100  swc1        $f0, 0x100($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x14CF40u, 0x14CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF48u;
label_14cf48:
    // 0x14cf48: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x14cf48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x14cf4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14cf4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cf50: 0xc0c28fe  jal         func_30A3F8
    ctx->pc = 0x14CF50u;
    SET_GPR_U32(ctx, 31, 0x14CF58u);
    ctx->pc = 0x14CF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF50u;
    // 0x14cf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3F8u, 0x14CF50u, 0x14CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF58u;
label_14cf58:
    // 0x14cf58: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x14CF58u;
    SET_GPR_U32(ctx, 31, 0x14CF60u);
    ctx->pc = 0x14CF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CF58u;
    // 0x14cf5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x14CF58u, 0x14CF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CF60u;
label_14cf60:
    // 0x14cf60: 0x4615a542  mul.s       $f21, $f20, $f21
    ctx->pc = 0x14cf60u;
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x14cf64: 0x3c01c6ff  lui         $at, 0xC6FF
    ctx->pc = 0x14cf64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50943 << 16));
    // 0x14cf68: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x14cf68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x14cf6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14cf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14cf70: 0x4617a502  mul.s       $f20, $f20, $f23
    ctx->pc = 0x14cf70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    // 0x14cf74: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x14cf74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x14cf78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14cf78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14cf7c: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x14cf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x14cf80: 0x4616ad42  mul.s       $f21, $f21, $f22
    ctx->pc = 0x14cf80u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x14cf84: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x14cf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x14cf88: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x14cf88u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x14cf8c: 0xe7b90174  swc1        $f25, 0x174($sp)
    ctx->pc = 0x14cf8cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x14cf90: 0xe7b8017c  swc1        $f24, 0x17C($sp)
    ctx->pc = 0x14cf90u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x14cf94: 0x0  nop
    ctx->pc = 0x14cf94u;
    // NOP
    // 0x14cf98: 0x0  nop
    ctx->pc = 0x14cf98u;
    // NOP
    // 0x14cf9c: 0x461aad43  div.s       $f21, $f21, $f26
    ctx->pc = 0x14cf9cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[26]);
    // 0x14cfa0: 0xe7b90170  swc1        $f25, 0x170($sp)
    ctx->pc = 0x14cfa0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x14cfa4: 0x0  nop
    ctx->pc = 0x14cfa4u;
    // NOP
    // 0x14cfa8: 0x0  nop
    ctx->pc = 0x14cfa8u;
    // NOP
    // 0x14cfac: 0x461aa503  div.s       $f20, $f20, $f26
    ctx->pc = 0x14cfacu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[26]);
    // 0x14cfb0: 0xe7b50154  swc1        $f21, 0x154($sp)
    ctx->pc = 0x14cfb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x14cfb4: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x14cfb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x14cfb8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x14cfb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14cfbc: 0xda250010  lqc2        $vf5, 0x10($s1)
    ctx->pc = 0x14cfbcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x14cfc0: 0xda260020  lqc2        $vf6, 0x20($s1)
    ctx->pc = 0x14cfc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x14cfc4: 0xda270030  lqc2        $vf7, 0x30($s1)
    ctx->pc = 0x14cfc4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x14cfc8: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x14cfc8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14cfcc: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x14cfccu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14cfd0: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x14cfd0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x14cfd4: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x14cfd4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x14cfd8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14cfd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cfdc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14cfdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cfe0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14cfe0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cfe4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14cfe4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14cfe8: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x14cfe8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cfec: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x14cfecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cff0: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x14cff0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cff4: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x14cff4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x14cff8: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x14cff8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14cffc: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x14cffcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d000: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x14d000u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d004: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x14d004u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x14d008: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x14d008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d00c: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x14d00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d010: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x14d010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14d014: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x14d014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x14d018: 0xfbcc0000  sqc2        $vf12, 0x0($fp)
    ctx->pc = 0x14d018u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14d01c: 0xfbcd0010  sqc2        $vf13, 0x10($fp)
    ctx->pc = 0x14d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x14d020: 0xfbce0020  sqc2        $vf14, 0x20($fp)
    ctx->pc = 0x14d020u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x14d024: 0xfbcf0030  sqc2        $vf15, 0x30($fp)
    ctx->pc = 0x14d024u;
    WRITE128(ADD32(GPR_U32(ctx, 30), 48), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x14d028: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x14d028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x14d02c: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x14D02Cu;
    SET_GPR_U32(ctx, 31, 0x14D034u);
    ctx->pc = 0x14D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D02Cu;
    // 0x14d030: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x14D02Cu, 0x14D034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D034u;
label_14d034:
    // 0x14d034: 0x92c202b4  lbu         $v0, 0x2B4($s6)
    ctx->pc = 0x14d034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 692)));
    // 0x14d038: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14d038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d03c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D03Cu;
    {
        const bool branch_taken_0x14d03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D03Cu;
        // 0x14d040: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d03c) {
            ctx->pc = 0x14D050u;
            goto label_14d050;
        }
    }
    ctx->pc = 0x14D044u;
    // 0x14d044: 0x8ec20278  lw          $v0, 0x278($s6)
    ctx->pc = 0x14d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 632)));
    // 0x14d048: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14D048u;
    {
        const bool branch_taken_0x14d048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D048u;
        // 0x14d04c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d048) {
            ctx->pc = 0x14D054u;
            goto label_14d054;
        }
    }
    ctx->pc = 0x14D050u;
label_14d050:
    // 0x14d050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d054:
    // 0x14d054: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x14d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x14d058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d05c: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x14d05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14d060: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14d060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d064: 0x26c20230  addiu       $v0, $s6, 0x230
    ctx->pc = 0x14d064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 560));
    // 0x14d068: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x14d068u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d06c: 0x0  nop
    ctx->pc = 0x14d06cu;
    // NOP
label_14d070:
    // 0x14d070: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x14d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14d074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14d074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d078: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x14d078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14d07c: 0xc0540ee  jal         func_1503B8
    ctx->pc = 0x14D07Cu;
    SET_GPR_U32(ctx, 31, 0x14D084u);
    ctx->pc = 0x14D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D07Cu;
    // 0x14d080: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1503B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1503B8u, 0x14D07Cu, 0x14D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D084u;
label_14d084:
    // 0x14d084: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x14d084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x14d088: 0x1660fff9  bnez        $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D088u;
    {
        const bool branch_taken_0x14d088 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D088u;
        // 0x14d08c: 0x8e310144  lw          $s1, 0x144($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d088) {
            ctx->pc = 0x14D070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d070;
        }
    }
    ctx->pc = 0x14D090u;
    // 0x14d090: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x14d090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x14d094: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x14d094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x14d098: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x14d098u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x14d09c: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x14d09cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x14d0a0: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x14d0a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x14d0a4: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x14d0a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x14d0a8: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x14d0a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x14d0ac: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x14d0acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x14d0b0: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x14d0b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x14d0b4: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x14d0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x14d0b8: 0xc7bc02b0  lwc1        $f28, 0x2B0($sp)
    ctx->pc = 0x14d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x14d0bc: 0xc7bb02a8  lwc1        $f27, 0x2A8($sp)
    ctx->pc = 0x14d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x14d0c0: 0xc7ba02a0  lwc1        $f26, 0x2A0($sp)
    ctx->pc = 0x14d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x14d0c4: 0xc7b90298  lwc1        $f25, 0x298($sp)
    ctx->pc = 0x14d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14d0c8: 0xc7b80290  lwc1        $f24, 0x290($sp)
    ctx->pc = 0x14d0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14d0cc: 0xc7b70288  lwc1        $f23, 0x288($sp)
    ctx->pc = 0x14d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14d0d0: 0xc7b60280  lwc1        $f22, 0x280($sp)
    ctx->pc = 0x14d0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14d0d4: 0xc7b50278  lwc1        $f21, 0x278($sp)
    ctx->pc = 0x14d0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14d0d8: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x14d0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14d0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x14D0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D0DCu;
        // 0x14d0e0: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D0E4u;
    // 0x14d0e4: 0x0  nop
    ctx->pc = 0x14d0e4u;
    // NOP
    ctx->pc = 0x14d0e8u;
}

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

// Function: SetEffect
// Address: 0x306528 - 0x3066d0
void SetEffect_0x306528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEffect_0x306528");
#endif

    switch (ctx->pc) {
        case 0x3065a8u: goto label_3065a8;
        case 0x3065c0u: goto label_3065c0;
        case 0x3066acu: goto label_3066ac;
        default: break;
    }

    ctx->pc = 0x306528u;

    // 0x306528: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x306528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x30652c: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x30652cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x306530: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x306530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x306534: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x306534u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x306538: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x306538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x30653c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x30653cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x306540: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x306540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x306544: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x306544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x306548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30654c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x30654cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x306550: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x306550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306554: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x306554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x306558: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x306558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30655c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x30655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x306560: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x306560u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306564: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x306564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x306568: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x306568u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30656c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x30656Cu;
    {
        const bool branch_taken_0x30656c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30656Cu;
        // 0x306570: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30656c) {
            ctx->pc = 0x306588u;
            goto label_306588;
        }
    }
    ctx->pc = 0x306574u;
    // 0x306574: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x306574u;
    {
        const bool branch_taken_0x306574 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x306578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306574u;
        // 0x306578: 0x121027  nor         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306574) {
            ctx->pc = 0x306590u;
            goto label_306590;
        }
    }
    ctx->pc = 0x30657Cu;
    // 0x30657c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30657cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306580: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x306580u;
    {
        const bool branch_taken_0x306580 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x306584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306580u;
        // 0x306584: 0x121027  nor         $v0, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306580) {
            ctx->pc = 0x306590u;
            goto label_306590;
        }
    }
    ctx->pc = 0x306588u;
label_306588:
    // 0x306588: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x306588u;
    {
        const bool branch_taken_0x306588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306588u;
        // 0x30658c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306588) {
            ctx->pc = 0x3066ACu;
            goto label_3066ac;
        }
    }
    ctx->pc = 0x306590u;
label_306590:
    // 0x306590: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x306590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x306594: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x306594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306598: 0x282900a  movz        $s2, $s4, $v0
    ctx->pc = 0x306598u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 20));
    // 0x30659c: 0x248419a0  addiu       $a0, $a0, 0x19A0
    ctx->pc = 0x30659cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    // 0x3065a0: 0xc0c180c  jal         func_306030
    ctx->pc = 0x3065A0u;
    SET_GPR_U32(ctx, 31, 0x3065A8u);
    ctx->pc = 0x3065A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065A0u;
    // 0x3065a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306030u, 0x3065A0u, 0x3065A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065A8u;
label_3065a8:
    // 0x3065a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3065a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065ac: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3065ACu;
    {
        const bool branch_taken_0x3065ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3065B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065ACu;
        // 0x3065b0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065ac) {
            ctx->pc = 0x3065C8u;
            goto label_3065c8;
        }
    }
    ctx->pc = 0x3065B4u;
    // 0x3065b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3065b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3065b8: 0xc0c14f0  jal         func_3053C0
    ctx->pc = 0x3065B8u;
    SET_GPR_U32(ctx, 31, 0x3065C0u);
    ctx->pc = 0x3065BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065B8u;
    // 0x3065bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3053C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3053C0u, 0x3065B8u, 0x3065C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065C0u;
label_3065c0:
    // 0x3065c0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3065C0u;
    {
        const bool branch_taken_0x3065c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065C0u;
        // 0x3065c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065c0) {
            ctx->pc = 0x3066ACu;
            goto label_3066ac;
        }
    }
    ctx->pc = 0x3065C8u;
label_3065c8:
    // 0x3065c8: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3065c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3065cc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3065ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3065d0: 0x34425345  ori         $v0, $v0, 0x5345
    ctx->pc = 0x3065d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21317);
    // 0x3065d4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3065D4u;
    {
        const bool branch_taken_0x3065d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3065D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065D4u;
        // 0x3065d8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065d4) {
            ctx->pc = 0x3065E4u;
            goto label_3065e4;
        }
    }
    ctx->pc = 0x3065DCu;
    // 0x3065dc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x3065DCu;
    {
        const bool branch_taken_0x3065dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065DCu;
        // 0x3065e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065dc) {
            ctx->pc = 0x3066ACu;
            goto label_3066ac;
        }
    }
    ctx->pc = 0x3065E4u;
label_3065e4:
    // 0x3065e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3065e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3065e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3065e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3065ec: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x3065ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3065f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3065f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3065f4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3065f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3065f8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3065f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3065fc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x3065fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x306600: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x306600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306604: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x306604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306608: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x306608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30660c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x30660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x306610: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x306610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x306614: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x306614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x306618: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x306618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x30661c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x30661cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x306620: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x306620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x306624: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x306624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x306628: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x306628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x30662c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x30662cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x306630: 0xa064004c  sb          $a0, 0x4C($v1)
    ctx->pc = 0x306630u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x306634: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x306634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
    // 0x306638: 0xa3a0005e  sb          $zero, 0x5E($sp)
    ctx->pc = 0x306638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 0));
    // 0x30663c: 0xa065004f  sb          $a1, 0x4F($v1)
    ctx->pc = 0x30663cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 5));
    // 0x306640: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x306640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x306644: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x306644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x306648: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x306648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30664c: 0x70800a  movz        $s0, $v1, $s0
    ctx->pc = 0x30664cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x306650: 0x8c827a84  lw          $v0, 0x7A84($a0)
    ctx->pc = 0x306650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31364)));
    // 0x306654: 0xa7a00080  sh          $zero, 0x80($sp)
    ctx->pc = 0x306654u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x306658: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x306658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x30665c: 0xa7a00082  sh          $zero, 0x82($sp)
    ctx->pc = 0x30665cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 0));
    // 0x306660: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x306660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x306664: 0xa3a00084  sb          $zero, 0x84($sp)
    ctx->pc = 0x306664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x306668: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x306668u;
    {
        const bool branch_taken_0x306668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306668u;
        // 0x30666c: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306668) {
            ctx->pc = 0x306688u;
            goto label_306688;
        }
    }
    ctx->pc = 0x306670u;
    // 0x306670: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x306674: 0x52220005  beql        $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x306674u;
    {
        const bool branch_taken_0x306674 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x306674) {
            ctx->pc = 0x306678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306674u;
            // 0x306678: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30668Cu;
            goto label_30668c;
        }
    }
    ctx->pc = 0x30667Cu;
    // 0x30667c: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x30667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x306680: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x306680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x306684: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x306684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_306688:
    // 0x306688: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x306688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_30668c:
    // 0x30668c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x30668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306690: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x306690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306694: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x306694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306698: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x306698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30669c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x30669cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3066a0: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x3066a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3066a4: 0xc0c19b4  jal         func_3066D0
    ctx->pc = 0x3066A4u;
    SET_GPR_U32(ctx, 31, 0x3066ACu);
    ctx->pc = 0x3066A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066A4u;
    // 0x3066a8: 0x326bffff  andi        $t3, $s3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3066D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3066D0u, 0x3066A4u, 0x3066ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066ACu;
label_3066ac:
    // 0x3066ac: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3066acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3066b0: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3066b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3066b4: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3066b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3066b8: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3066b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3066bc: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3066bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3066c0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3066c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3066c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3066c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3066c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3066C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3066CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066C8u;
        // 0x3066cc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3066C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3066D0u;
}

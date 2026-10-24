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

// Function: func_00242880
// Address: 0x242880 - 0x242b68
void func_00242880_0x242880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00242880_0x242880");
#endif

    switch (ctx->pc) {
        case 0x24292cu: goto label_24292c;
        case 0x242984u: goto label_242984;
        case 0x2429acu: goto label_2429ac;
        case 0x242a34u: goto label_242a34;
        case 0x242a5cu: goto label_242a5c;
        case 0x242a7cu: goto label_242a7c;
        case 0x242b0cu: goto label_242b0c;
        case 0x242b44u: goto label_242b44;
        case 0x242b50u: goto label_242b50;
        default: break;
    }

    ctx->pc = 0x242880u;

    // 0x242880: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x242880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x242884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24288c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x24288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x242890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242894: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x242894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x242898: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x242898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24289c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x24289cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2428a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2428a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2428a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2428a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2428a8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2428a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2428ac: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2428acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2428b0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2428b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2428b4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2428b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2428b8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x2428b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2428bc: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2428bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2428c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2428c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2428c4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2428c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2428c8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2428c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2428cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2428ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2428d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2428d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2428d4: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x2428d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2428d8: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x2428d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x2428dc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2428dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2428e0: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2428e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2428e4: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x2428e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2428e8: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x2428e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x2428ec: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2428ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2428f0: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2428f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2428f4: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x2428f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2428f8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2428f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2428fc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x242900: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242904: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x242904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x242908: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x242908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24290c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24290cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242910: 0xe601054c  swc1        $f1, 0x54C($s0)
    ctx->pc = 0x242910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x242914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242918: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x242918u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x24291c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x24291cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x242920: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x242920u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x242924: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x242924u;
    SET_GPR_U32(ctx, 31, 0x24292Cu);
    ctx->pc = 0x242928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242924u;
    // 0x242928: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x242924u, 0x24292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24292Cu;
label_24292c:
    // 0x24292c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x24292cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x242930: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x242930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x242934: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x242934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x242938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x242938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24293c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24293Cu;
    {
        const bool branch_taken_0x24293c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x242940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24293Cu;
        // 0x242940: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24293c) {
            ctx->pc = 0x242958u;
            goto label_242958;
        }
    }
    ctx->pc = 0x242944u;
    // 0x242944: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x242944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242948: 0x50820053  beql        $a0, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x242948u;
    {
        const bool branch_taken_0x242948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x242948) {
            ctx->pc = 0x24294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242948u;
            // 0x24294c: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242A98u;
            goto label_242a98;
        }
    }
    ctx->pc = 0x242950u;
    // 0x242950: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x242950u;
    {
        const bool branch_taken_0x242950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242950u;
        // 0x242954: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242950) {
            ctx->pc = 0x242B54u;
            goto label_242b54;
        }
    }
    ctx->pc = 0x242958u;
label_242958:
    // 0x242958: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x242958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x24295c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24295cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242960: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x242960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x242964: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x242964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x242968: 0x8c45245c  lw          $a1, 0x245C($v0)
    ctx->pc = 0x242968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9308)));
    // 0x24296c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24296cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242970: 0x8c462460  lw          $a2, 0x2460($v0)
    ctx->pc = 0x242970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9312)));
    // 0x242974: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242978: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x242978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x24297c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x24297Cu;
    SET_GPR_U32(ctx, 31, 0x242984u);
    ctx->pc = 0x242980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24297Cu;
    // 0x242980: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x24297Cu, 0x242984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242984u;
label_242984:
    // 0x242984: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x242984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x242988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24298c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24298cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x242990: 0x3c013d5a  lui         $at, 0x3D5A
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15706 << 16));
    // 0x242994: 0x3421740e  ori         $at, $at, 0x740E
    ctx->pc = 0x242994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29710);
    // 0x242998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24299c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x24299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x2429a0: 0xe6010600  swc1        $f1, 0x600($s0)
    ctx->pc = 0x2429a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2429a4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2429A4u;
    SET_GPR_U32(ctx, 31, 0x2429ACu);
    ctx->pc = 0x2429A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2429A4u;
    // 0x2429a8: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2429A4u, 0x2429ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2429ACu;
label_2429ac:
    // 0x2429ac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2429acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2429b0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2429b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2429b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2429B4u;
    {
        const bool branch_taken_0x2429b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429B4u;
        // 0x2429b8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429b4) {
            ctx->pc = 0x2429D4u;
            goto label_2429d4;
        }
    }
    ctx->pc = 0x2429BCu;
    // 0x2429bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2429bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2429c0: 0x2442c850  addiu       $v0, $v0, -0x37B0
    ctx->pc = 0x2429c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953040));
    // 0x2429c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2429c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2429c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2429c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2429cc: 0x800008  jr          $a0
    ctx->pc = 0x2429CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2429D4u: goto label_2429d4;
            case 0x2429E4u: goto label_2429e4;
            case 0x2429F4u: goto label_2429f4;
            case 0x242A08u: goto label_242a08;
            case 0x242A1Cu: goto label_242a1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2429CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2429D4u;
label_2429d4:
    // 0x2429d4: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x2429d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x2429d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2429d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2429dc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2429DCu;
    {
        const bool branch_taken_0x2429dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429DCu;
        // 0x2429e0: 0xe600172c  swc1        $f0, 0x172C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429dc) {
            ctx->pc = 0x242A2Cu;
            goto label_242a2c;
        }
    }
    ctx->pc = 0x2429E4u;
label_2429e4:
    // 0x2429e4: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2429e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2429e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2429e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2429ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2429ECu;
    {
        const bool branch_taken_0x2429ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2429ECu;
        // 0x2429f0: 0xe600172c  swc1        $f0, 0x172C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429ec) {
            ctx->pc = 0x242A2Cu;
            goto label_242a2c;
        }
    }
    ctx->pc = 0x2429F4u;
label_2429f4:
    // 0x2429f4: 0x3c01443b  lui         $at, 0x443B
    ctx->pc = 0x2429f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17467 << 16));
    // 0x2429f8: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x2429f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x2429fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2429fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242a00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x242A00u;
    {
        const bool branch_taken_0x242a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A00u;
        // 0x242a04: 0xe600172c  swc1        $f0, 0x172C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a00) {
            ctx->pc = 0x242A2Cu;
            goto label_242a2c;
        }
    }
    ctx->pc = 0x242A08u;
label_242a08:
    // 0x242a08: 0x3c01443b  lui         $at, 0x443B
    ctx->pc = 0x242a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17467 << 16));
    // 0x242a0c: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x242a0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x242a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242a14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x242A14u;
    {
        const bool branch_taken_0x242a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242A14u;
        // 0x242a18: 0xe600172c  swc1        $f0, 0x172C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5932), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242a14) {
            ctx->pc = 0x242A2Cu;
            goto label_242a2c;
        }
    }
    ctx->pc = 0x242A1Cu;
label_242a1c:
    // 0x242a1c: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x242a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x242a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x242a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242a24: 0x0  nop
    ctx->pc = 0x242a24u;
    // NOP
    // 0x242a28: 0xe600172c  swc1        $f0, 0x172C($s0)
    ctx->pc = 0x242a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5932), bits); }
label_242a2c:
    // 0x242a2c: 0xc09ae7a  jal         func_26B9E8
    ctx->pc = 0x242A2Cu;
    SET_GPR_U32(ctx, 31, 0x242A34u);
    ctx->pc = 0x242A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A2Cu;
    // 0x242a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B9E8u, 0x242A2Cu, 0x242A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A34u;
label_242a34:
    // 0x242a34: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x242a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x242a38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x242a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x242a3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x242a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a44: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x242a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x242a48: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x242a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x242a4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x242a4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x242a50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a54: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x242A54u;
    SET_GPR_U32(ctx, 31, 0x242A5Cu);
    ctx->pc = 0x242A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A54u;
    // 0x242a58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x242A54u, 0x242A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A5Cu;
label_242a5c:
    // 0x242a5c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x242a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x242a60: 0x24040069  addiu       $a0, $zero, 0x69
    ctx->pc = 0x242a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    // 0x242a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x242a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242a68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x242a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a6c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x242a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242a70: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x242a70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x242a74: 0xc0c194a  jal         func_306528
    ctx->pc = 0x242A74u;
    SET_GPR_U32(ctx, 31, 0x242A7Cu);
    ctx->pc = 0x242A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242A74u;
    // 0x242a78: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x242A74u, 0x242A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242A7Cu;
label_242a7c:
    // 0x242a7c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x242a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x242a80: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x242a80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x242a84: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x242a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x242a88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x242a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x242a8c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x242a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x242a90: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x242a90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x242a94: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x242a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_242a98:
    // 0x242a98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x242a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242a9c: 0x0  nop
    ctx->pc = 0x242a9cu;
    // NOP
    // 0x242aa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x242aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x242aa4: 0x0  nop
    ctx->pc = 0x242aa4u;
    // NOP
    // 0x242aa8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x242AA8u;
    {
        const bool branch_taken_0x242aa8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x242aa8) {
            ctx->pc = 0x242AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x242AA8u;
            // 0x242aac: 0xc60205a8  lwc1        $f2, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x242AC0u;
            goto label_242ac0;
        }
    }
    ctx->pc = 0x242AB0u;
    // 0x242ab0: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x242ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242ab4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x242ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x242ab8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x242AB8u;
    {
        const bool branch_taken_0x242ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242AB8u;
        // 0x242abc: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x242ab8) {
            ctx->pc = 0x242AE8u;
            goto label_242ae8;
        }
    }
    ctx->pc = 0x242AC0u;
label_242ac0:
    // 0x242ac0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x242ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x242ac4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x242ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x242ac8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x242ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x242acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x242ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242ad4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x242ad4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x242ad8: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x242ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242adc: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x242adcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x242ae0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x242ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x242ae4: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x242ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_242ae8:
    // 0x242ae8: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x242ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x242aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242af0: 0xc60205a8  lwc1        $f2, 0x5A8($s0)
    ctx->pc = 0x242af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x242af4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x242af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x242af8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x242af8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x242afc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x242afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242b00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x242b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x242b04: 0xc055f06  jal         func_157C18
    ctx->pc = 0x242B04u;
    SET_GPR_U32(ctx, 31, 0x242B0Cu);
    ctx->pc = 0x242B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B04u;
    // 0x242b08: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x242B04u, 0x242B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B0Cu;
label_242b0c:
    // 0x242b0c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x242B0Cu;
    {
        const bool branch_taken_0x242b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B0Cu;
        // 0x242b10: 0x2403007f  addiu       $v1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242b0c) {
            ctx->pc = 0x242B30u;
            goto label_242b30;
        }
    }
    ctx->pc = 0x242B14u;
    // 0x242b14: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x242b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x242b18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x242b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242b1c: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x242b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x242b20: 0xe6001738  swc1        $f0, 0x1738($s0)
    ctx->pc = 0x242b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5944), bits); }
    // 0x242b24: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x242b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x242b28: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x242b28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x242b2c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x242b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_242b30:
    // 0x242b30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242b34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x242b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x242b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b3c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x242B3Cu;
    SET_GPR_U32(ctx, 31, 0x242B44u);
    ctx->pc = 0x242B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B3Cu;
    // 0x242b40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x242B3Cu, 0x242B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B44u;
label_242b44:
    // 0x242b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242b48: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x242B48u;
    SET_GPR_U32(ctx, 31, 0x242B50u);
    ctx->pc = 0x242B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242B48u;
    // 0x242b4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x242B48u, 0x242B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x242B50u;
label_242b50:
    // 0x242b50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x242b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_242b54:
    // 0x242b54: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x242b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242b58: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x242b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x242b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x242B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242B5Cu;
        // 0x242b60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242B64u;
    // 0x242b64: 0x0  nop
    ctx->pc = 0x242b64u;
    // NOP
    ctx->pc = 0x242b68u;
}

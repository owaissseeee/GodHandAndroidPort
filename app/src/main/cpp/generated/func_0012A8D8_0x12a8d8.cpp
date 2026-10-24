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

// Function: func_0012A8D8
// Address: 0x12a8d8 - 0x12ac28
void func_0012A8D8_0x12a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012A8D8_0x12a8d8");
#endif

    switch (ctx->pc) {
        case 0x12a8fcu: goto label_12a8fc;
        case 0x12ac14u: goto label_12ac14;
        default: break;
    }

    ctx->pc = 0x12a8d8u;

    // 0x12a8d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12a8dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12a8e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12a8e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12a8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8e8: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x12a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12a8ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A8ECu;
    {
        const bool branch_taken_0x12a8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8ec) {
            ctx->pc = 0x12A904u;
            goto label_12a904;
        }
    }
    ctx->pc = 0x12A8F4u;
    // 0x12a8f4: 0xc04a984  jal         func_12A610
    ctx->pc = 0x12A8F4u;
    SET_GPR_U32(ctx, 31, 0x12A8FCu);
    ctx->pc = 0x12A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A610u, 0x12A8F4u, 0x12A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A8FCu;
label_12a8fc:
    // 0x12a8fc: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x12A8FCu;
    {
        const bool branch_taken_0x12a8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8FCu;
        // 0x12a900: 0xae020698  sw          $v0, 0x698($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8fc) {
            ctx->pc = 0x12AC14u;
            goto label_12ac14;
        }
    }
    ctx->pc = 0x12A904u;
label_12a904:
    // 0x12a904: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a908: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x12a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a90c: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x12a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12a910: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x12a910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x12a914: 0x2463fc9f  addiu       $v1, $v1, -0x361
    ctx->pc = 0x12a914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966431));
    // 0x12a918: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x12a918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x12a91c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A91Cu;
    {
        const bool branch_taken_0x12a91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A91Cu;
        // 0x12a920: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a91c) {
            ctx->pc = 0x12A93Cu;
            goto label_12a93c;
        }
    }
    ctx->pc = 0x12A924u;
    // 0x12a924: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12a924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12a928: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x12a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x12a92c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a930: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12a930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a934: 0x800008  jr          $a0
    ctx->pc = 0x12A934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A93Cu: goto label_12a93c;
            case 0x12A968u: goto label_12a968;
            case 0x12A994u: goto label_12a994;
            case 0x12A9C0u: goto label_12a9c0;
            case 0x12A9E8u: goto label_12a9e8;
            case 0x12AA14u: goto label_12aa14;
            case 0x12AA40u: goto label_12aa40;
            case 0x12AA6Cu: goto label_12aa6c;
            case 0x12AA98u: goto label_12aa98;
            case 0x12AAC4u: goto label_12aac4;
            case 0x12AAF0u: goto label_12aaf0;
            case 0x12AB1Cu: goto label_12ab1c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12A93Cu;
label_12a93c:
    // 0x12a93c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x12a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x12a940: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12a940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12a944: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a948: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x12a948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x12a94c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12a94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12a950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a954: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12a954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x12a958: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12a958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12a95c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a960: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x12A960u;
    {
        const bool branch_taken_0x12a960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A960u;
        // 0x12a964: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a960) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12A968u;
label_12a968:
    // 0x12a968: 0x3c01be75  lui         $at, 0xBE75
    ctx->pc = 0x12a968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48757 << 16));
    // 0x12a96c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12a96cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12a970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a974: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x12a974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x12a978: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12a978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12a97c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a980: 0x3c013ed7  lui         $at, 0x3ED7
    ctx->pc = 0x12a980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16087 << 16));
    // 0x12a984: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x12a984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x12a988: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a98c: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x12A98Cu;
    {
        const bool branch_taken_0x12a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A98Cu;
        // 0x12a990: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a98c) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12A994u;
label_12a994:
    // 0x12a994: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x12a994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
    // 0x12a998: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x12a998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x12a99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9a0: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x12a9a4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12a9a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12a9a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a9ac: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x12a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x12a9b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12a9b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12a9b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a9b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a9b8: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x12A9B8u;
    {
        const bool branch_taken_0x12a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9B8u;
        // 0x12a9bc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9b8) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12A9C0u;
label_12a9c0:
    // 0x12a9c0: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x12a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x12a9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9c8: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x12a9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x12a9cc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12a9ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12a9d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a9d4: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x12a9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
    // 0x12a9d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12a9d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x12a9dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a9e0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x12A9E0u;
    {
        const bool branch_taken_0x12a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9E0u;
        // 0x12a9e4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9e0) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12A9E8u;
label_12a9e8:
    // 0x12a9e8: 0x3c01be75  lui         $at, 0xBE75
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48757 << 16));
    // 0x12a9ec: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12a9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12a9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a9f4: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x12a9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x12a9f8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12a9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x12a9fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aa00: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x12aa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x12aa04: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x12aa08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aa08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aa0c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x12AA0Cu;
    {
        const bool branch_taken_0x12aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA0Cu;
        // 0x12aa10: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa0c) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AA14u;
label_12aa14:
    // 0x12aa14: 0x3c01be9e  lui         $at, 0xBE9E
    ctx->pc = 0x12aa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48798 << 16));
    // 0x12aa18: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x12aa18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x12aa1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aa1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aa20: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x12aa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x12aa24: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12aa24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12aa28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aa2c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x12aa2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x12aa30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12aa34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aa34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aa38: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x12AA38u;
    {
        const bool branch_taken_0x12aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA38u;
        // 0x12aa3c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa38) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AA40u;
label_12aa40:
    // 0x12aa40: 0x3c01bebd  lui         $at, 0xBEBD
    ctx->pc = 0x12aa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48829 << 16));
    // 0x12aa44: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x12aa44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x12aa48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aa48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aa4c: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x12aa4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x12aa50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12aa50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12aa54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aa54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aa58: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12aa58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x12aa5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12aa5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12aa60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aa60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aa64: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x12AA64u;
    {
        const bool branch_taken_0x12aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA64u;
        // 0x12aa68: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa64) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AA6Cu;
label_12aa6c:
    // 0x12aa6c: 0x3c01bec2  lui         $at, 0xBEC2
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48834 << 16));
    // 0x12aa70: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x12aa70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x12aa74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aa74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aa78: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x12aa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x12aa7c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12aa7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12aa80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aa84: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x12aa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x12aa88: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x12aa88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x12aa8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aa90: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12AA90u;
    {
        const bool branch_taken_0x12aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA90u;
        // 0x12aa94: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa90) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AA98u;
label_12aa98:
    // 0x12aa98: 0x3c01be6b  lui         $at, 0xBE6B
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48747 << 16));
    // 0x12aa9c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x12aa9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x12aaa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aaa4: 0x3c01bcf5  lui         $at, 0xBCF5
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48373 << 16));
    // 0x12aaa8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x12aaa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x12aaac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aab0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12aab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x12aab4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12aab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12aab8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aabc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x12AABCu;
    {
        const bool branch_taken_0x12aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AABCu;
        // 0x12aac0: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aabc) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AAC4u;
label_12aac4:
    // 0x12aac4: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x12aac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x12aac8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12aac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12aacc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aad0: 0x3c01bd8f  lui         $at, 0xBD8F
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48527 << 16));
    // 0x12aad4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x12aad4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x12aad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12aad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12aadc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x12aadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x12aae0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12aae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12aae4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12aae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12aae8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12AAE8u;
    {
        const bool branch_taken_0x12aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAE8u;
        // 0x12aaec: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aae8) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AAF0u;
label_12aaf0:
    // 0x12aaf0: 0x3c01bebd  lui         $at, 0xBEBD
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48829 << 16));
    // 0x12aaf4: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x12aaf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x12aaf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12aaf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12aafc: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x12ab00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12ab00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x12ab04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ab08: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
    // 0x12ab0c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x12ab0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x12ab10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ab10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12ab14: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12AB14u;
    {
        const bool branch_taken_0x12ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB14u;
        // 0x12ab18: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab14) {
            ctx->pc = 0x12AB44u;
            goto label_12ab44;
        }
    }
    ctx->pc = 0x12AB1Cu;
label_12ab1c:
    // 0x12ab1c: 0x3c01bde1  lui         $at, 0xBDE1
    ctx->pc = 0x12ab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48609 << 16));
    // 0x12ab20: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x12ab20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x12ab24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ab24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ab28: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x12ab28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x12ab2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12ab2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12ab30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ab30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ab34: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x12ab34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x12ab38: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x12ab38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x12ab3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ab3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12ab40: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_12ab44:
    // 0x12ab44: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12ab44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12ab48: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12ab48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12ab4c: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12ab50: 0x2403037b  addiu       $v1, $zero, 0x37B
    ctx->pc = 0x12ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 891));
    // 0x12ab54: 0x944402fe  lhu         $a0, 0x2FE($v0)
    ctx->pc = 0x12ab54u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x12ab58: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x12AB58u;
    {
        const bool branch_taken_0x12ab58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x12AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB58u;
        // 0x12ab5c: 0x2882037c  slti        $v0, $a0, 0x37C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)892) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab58) {
            ctx->pc = 0x12ABD0u;
            goto label_12abd0;
        }
    }
    ctx->pc = 0x12AB60u;
    // 0x12ab60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12AB60u;
    {
        const bool branch_taken_0x12ab60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB60u;
        // 0x12ab64: 0x28820379  slti        $v0, $a0, 0x379 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)889) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab60) {
            ctx->pc = 0x12AB80u;
            goto label_12ab80;
        }
    }
    ctx->pc = 0x12AB68u;
    // 0x12ab68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12AB68u;
    {
        const bool branch_taken_0x12ab68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB68u;
        // 0x12ab6c: 0x28820377  slti        $v0, $a0, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab68) {
            ctx->pc = 0x12AB8Cu;
            goto label_12ab8c;
        }
    }
    ctx->pc = 0x12AB70u;
    // 0x12ab70: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AB70u;
    {
        const bool branch_taken_0x12ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ab70) {
            ctx->pc = 0x12AB8Cu;
            goto label_12ab8c;
        }
    }
    ctx->pc = 0x12AB78u;
    // 0x12ab78: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12AB78u;
    {
        const bool branch_taken_0x12ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ab78) {
            ctx->pc = 0x12ABA8u;
            goto label_12aba8;
        }
    }
    ctx->pc = 0x12AB80u;
label_12ab80:
    // 0x12ab80: 0x24020390  addiu       $v0, $zero, 0x390
    ctx->pc = 0x12ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x12ab84: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x12AB84u;
    {
        const bool branch_taken_0x12ab84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ab84) {
            ctx->pc = 0x12ABD0u;
            goto label_12abd0;
        }
    }
    ctx->pc = 0x12AB8Cu;
label_12ab8c:
    // 0x12ab8c: 0x3c01beb2  lui         $at, 0xBEB2
    ctx->pc = 0x12ab8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48818 << 16));
    // 0x12ab90: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x12ab90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x12ab94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ab98: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x12ab9c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12ab9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12aba0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12ABA0u;
    {
        const bool branch_taken_0x12aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABA0u;
        // 0x12aba4: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aba0) {
            ctx->pc = 0x12ABFCu;
            goto label_12abfc;
        }
    }
    ctx->pc = 0x12ABA8u;
label_12aba8:
    // 0x12aba8: 0x3c013eb2  lui         $at, 0x3EB2
    ctx->pc = 0x12aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16050 << 16));
    // 0x12abac: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x12abacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x12abb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12abb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12abb4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12abb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12abb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12abb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12abbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12abbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12abc0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x12abc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12abc4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x12abc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12abc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12ABC8u;
    {
        const bool branch_taken_0x12abc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABC8u;
        // 0x12abcc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abc8) {
            ctx->pc = 0x12ABFCu;
            goto label_12abfc;
        }
    }
    ctx->pc = 0x12ABD0u;
label_12abd0:
    // 0x12abd0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x12abd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x12abd4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12abd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12abd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12abd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12abdc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12abdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12abe0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12abe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12abe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12abe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12abe8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x12abe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x12abec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12abecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12abf0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12abf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12abf4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12abf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12abf8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12abf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12abfc:
    // 0x12abfc: 0x8e040698  lw          $a0, 0x698($s0)
    ctx->pc = 0x12abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
    // 0x12ac00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ac00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac04: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12ac08: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x12ac08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac0c: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x12AC0Cu;
    SET_GPR_U32(ctx, 31, 0x12AC14u);
    ctx->pc = 0x12AC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC0Cu;
    // 0x12ac10: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x12AC0Cu, 0x12AC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC14u;
label_12ac14:
    // 0x12ac14: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12ac14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ac18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x12AC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC1Cu;
        // 0x12ac20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AC24u;
    // 0x12ac24: 0x0  nop
    ctx->pc = 0x12ac24u;
    // NOP
    ctx->pc = 0x12ac28u;
}

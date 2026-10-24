#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: setBomb__5cR409P8cGameObjf
// Address: 0x79b820 - 0x79bab8
void setBomb__5cR409P8cGameObjf_0x79b820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setBomb__5cR409P8cGameObjf_0x79b820");
#endif

    switch (ctx->pc) {
        case 0x79b820u: goto label_79b820;
        case 0x79b824u: goto label_79b824;
        case 0x79b828u: goto label_79b828;
        case 0x79b82cu: goto label_79b82c;
        case 0x79b830u: goto label_79b830;
        case 0x79b834u: goto label_79b834;
        case 0x79b838u: goto label_79b838;
        case 0x79b83cu: goto label_79b83c;
        case 0x79b840u: goto label_79b840;
        case 0x79b844u: goto label_79b844;
        case 0x79b848u: goto label_79b848;
        case 0x79b84cu: goto label_79b84c;
        case 0x79b850u: goto label_79b850;
        case 0x79b854u: goto label_79b854;
        case 0x79b858u: goto label_79b858;
        case 0x79b85cu: goto label_79b85c;
        case 0x79b860u: goto label_79b860;
        case 0x79b864u: goto label_79b864;
        case 0x79b868u: goto label_79b868;
        case 0x79b86cu: goto label_79b86c;
        case 0x79b870u: goto label_79b870;
        case 0x79b874u: goto label_79b874;
        case 0x79b878u: goto label_79b878;
        case 0x79b87cu: goto label_79b87c;
        case 0x79b880u: goto label_79b880;
        case 0x79b884u: goto label_79b884;
        case 0x79b888u: goto label_79b888;
        case 0x79b88cu: goto label_79b88c;
        case 0x79b890u: goto label_79b890;
        case 0x79b894u: goto label_79b894;
        case 0x79b898u: goto label_79b898;
        case 0x79b89cu: goto label_79b89c;
        case 0x79b8a0u: goto label_79b8a0;
        case 0x79b8a4u: goto label_79b8a4;
        case 0x79b8a8u: goto label_79b8a8;
        case 0x79b8acu: goto label_79b8ac;
        case 0x79b8b0u: goto label_79b8b0;
        case 0x79b8b4u: goto label_79b8b4;
        case 0x79b8b8u: goto label_79b8b8;
        case 0x79b8bcu: goto label_79b8bc;
        case 0x79b8c0u: goto label_79b8c0;
        case 0x79b8c4u: goto label_79b8c4;
        case 0x79b8c8u: goto label_79b8c8;
        case 0x79b8ccu: goto label_79b8cc;
        case 0x79b8d0u: goto label_79b8d0;
        case 0x79b8d4u: goto label_79b8d4;
        case 0x79b8d8u: goto label_79b8d8;
        case 0x79b8dcu: goto label_79b8dc;
        case 0x79b8e0u: goto label_79b8e0;
        case 0x79b8e4u: goto label_79b8e4;
        case 0x79b8e8u: goto label_79b8e8;
        case 0x79b8ecu: goto label_79b8ec;
        case 0x79b8f0u: goto label_79b8f0;
        case 0x79b8f4u: goto label_79b8f4;
        case 0x79b8f8u: goto label_79b8f8;
        case 0x79b8fcu: goto label_79b8fc;
        case 0x79b900u: goto label_79b900;
        case 0x79b904u: goto label_79b904;
        case 0x79b908u: goto label_79b908;
        case 0x79b90cu: goto label_79b90c;
        case 0x79b910u: goto label_79b910;
        case 0x79b914u: goto label_79b914;
        case 0x79b918u: goto label_79b918;
        case 0x79b91cu: goto label_79b91c;
        case 0x79b920u: goto label_79b920;
        case 0x79b924u: goto label_79b924;
        case 0x79b928u: goto label_79b928;
        case 0x79b92cu: goto label_79b92c;
        case 0x79b930u: goto label_79b930;
        case 0x79b934u: goto label_79b934;
        case 0x79b938u: goto label_79b938;
        case 0x79b93cu: goto label_79b93c;
        case 0x79b940u: goto label_79b940;
        case 0x79b944u: goto label_79b944;
        case 0x79b948u: goto label_79b948;
        case 0x79b94cu: goto label_79b94c;
        case 0x79b950u: goto label_79b950;
        case 0x79b954u: goto label_79b954;
        case 0x79b958u: goto label_79b958;
        case 0x79b95cu: goto label_79b95c;
        case 0x79b960u: goto label_79b960;
        case 0x79b964u: goto label_79b964;
        case 0x79b968u: goto label_79b968;
        case 0x79b96cu: goto label_79b96c;
        case 0x79b970u: goto label_79b970;
        case 0x79b974u: goto label_79b974;
        case 0x79b978u: goto label_79b978;
        case 0x79b97cu: goto label_79b97c;
        case 0x79b980u: goto label_79b980;
        case 0x79b984u: goto label_79b984;
        case 0x79b988u: goto label_79b988;
        case 0x79b98cu: goto label_79b98c;
        case 0x79b990u: goto label_79b990;
        case 0x79b994u: goto label_79b994;
        case 0x79b998u: goto label_79b998;
        case 0x79b99cu: goto label_79b99c;
        case 0x79b9a0u: goto label_79b9a0;
        case 0x79b9a4u: goto label_79b9a4;
        case 0x79b9a8u: goto label_79b9a8;
        case 0x79b9acu: goto label_79b9ac;
        case 0x79b9b0u: goto label_79b9b0;
        case 0x79b9b4u: goto label_79b9b4;
        case 0x79b9b8u: goto label_79b9b8;
        case 0x79b9bcu: goto label_79b9bc;
        case 0x79b9c0u: goto label_79b9c0;
        case 0x79b9c4u: goto label_79b9c4;
        case 0x79b9c8u: goto label_79b9c8;
        case 0x79b9ccu: goto label_79b9cc;
        case 0x79b9d0u: goto label_79b9d0;
        case 0x79b9d4u: goto label_79b9d4;
        case 0x79b9d8u: goto label_79b9d8;
        case 0x79b9dcu: goto label_79b9dc;
        case 0x79b9e0u: goto label_79b9e0;
        case 0x79b9e4u: goto label_79b9e4;
        case 0x79b9e8u: goto label_79b9e8;
        case 0x79b9ecu: goto label_79b9ec;
        case 0x79b9f0u: goto label_79b9f0;
        case 0x79b9f4u: goto label_79b9f4;
        case 0x79b9f8u: goto label_79b9f8;
        case 0x79b9fcu: goto label_79b9fc;
        case 0x79ba00u: goto label_79ba00;
        case 0x79ba04u: goto label_79ba04;
        case 0x79ba08u: goto label_79ba08;
        case 0x79ba0cu: goto label_79ba0c;
        case 0x79ba10u: goto label_79ba10;
        case 0x79ba14u: goto label_79ba14;
        case 0x79ba18u: goto label_79ba18;
        case 0x79ba1cu: goto label_79ba1c;
        case 0x79ba20u: goto label_79ba20;
        case 0x79ba24u: goto label_79ba24;
        case 0x79ba28u: goto label_79ba28;
        case 0x79ba2cu: goto label_79ba2c;
        case 0x79ba30u: goto label_79ba30;
        case 0x79ba34u: goto label_79ba34;
        case 0x79ba38u: goto label_79ba38;
        case 0x79ba3cu: goto label_79ba3c;
        case 0x79ba40u: goto label_79ba40;
        case 0x79ba44u: goto label_79ba44;
        case 0x79ba48u: goto label_79ba48;
        case 0x79ba4cu: goto label_79ba4c;
        case 0x79ba50u: goto label_79ba50;
        case 0x79ba54u: goto label_79ba54;
        case 0x79ba58u: goto label_79ba58;
        case 0x79ba5cu: goto label_79ba5c;
        case 0x79ba60u: goto label_79ba60;
        case 0x79ba64u: goto label_79ba64;
        case 0x79ba68u: goto label_79ba68;
        case 0x79ba6cu: goto label_79ba6c;
        case 0x79ba70u: goto label_79ba70;
        case 0x79ba74u: goto label_79ba74;
        case 0x79ba78u: goto label_79ba78;
        case 0x79ba7cu: goto label_79ba7c;
        case 0x79ba80u: goto label_79ba80;
        case 0x79ba84u: goto label_79ba84;
        case 0x79ba88u: goto label_79ba88;
        case 0x79ba8cu: goto label_79ba8c;
        case 0x79ba90u: goto label_79ba90;
        case 0x79ba94u: goto label_79ba94;
        case 0x79ba98u: goto label_79ba98;
        case 0x79ba9cu: goto label_79ba9c;
        case 0x79baa0u: goto label_79baa0;
        case 0x79baa4u: goto label_79baa4;
        case 0x79baa8u: goto label_79baa8;
        case 0x79baacu: goto label_79baac;
        case 0x79bab0u: goto label_79bab0;
        case 0x79bab4u: goto label_79bab4;
        default: break;
    }

    ctx->pc = 0x79b820u;

label_79b820:
    // 0x79b820: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x79b820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_79b824:
    // 0x79b824: 0x3c01c202  lui         $at, 0xC202
    ctx->pc = 0x79b824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49666 << 16));
label_79b828:
    // 0x79b828: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x79b828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_79b82c:
    // 0x79b82c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_79b830:
    // 0x79b830: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x79b830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_79b834:
    // 0x79b834: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x79b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_79b838:
    // 0x79b838: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x79b838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
label_79b83c:
    // 0x79b83c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79b840:
    // 0x79b840: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x79b840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_79b844:
    // 0x79b844: 0x3c01c082  lui         $at, 0xC082
    ctx->pc = 0x79b844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49282 << 16));
label_79b848:
    // 0x79b848: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x79b848u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
label_79b84c:
    // 0x79b84c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b84cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b850:
    // 0x79b850: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_79b854:
    // 0x79b854: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x79b854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_79b858:
    // 0x79b858: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x79b858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_79b85c:
    // 0x79b85c: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x79b85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_79b860:
    // 0x79b860: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x79b860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_79b864:
    // 0x79b864: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x79b864u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_79b868:
    // 0x79b868: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x79b868u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_79b86c:
    // 0x79b86c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x79b86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_79b870:
    // 0x79b870: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x79b870u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_79b874:
    // 0x79b874: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x79b874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_79b878:
    // 0x79b878: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x79b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_79b87c:
    // 0x79b87c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x79b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_79b880:
    // 0x79b880: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x79b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_79b884:
    // 0x79b884: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x79b884u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_79b888:
    // 0x79b888: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x79b888u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_79b88c:
    // 0x79b88c: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x79b88cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_79b890:
    // 0x79b890: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x79b890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_79b894:
    // 0x79b894: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x79b894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_79b898:
    // 0x79b898: 0x8e830214  lw          $v1, 0x214($s4)
    ctx->pc = 0x79b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 532)));
label_79b89c:
    // 0x79b89c: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79b89cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79b8a0:
    // 0x79b8a0: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79b8a4:
    // 0x79b8a4: 0x40f809  jalr        $v0
label_79b8a8:
    if (ctx->pc == 0x79B8A8u) {
        ctx->pc = 0x79B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8A4u;
        // 0x79b8a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B8ACu;
        goto label_79b8ac;
    }
    ctx->pc = 0x79B8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79B8ACu);
        ctx->pc = 0x79B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8A4u;
        // 0x79b8a8: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B8A4u, 0x79B8ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79B8ACu;
label_79b8ac:
    // 0x79b8ac: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79b8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79b8b0:
    // 0x79b8b0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b8b4:
    // 0x79b8b4: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x79b8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b8b8:
    // 0x79b8b8: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x79b8b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_79b8bc:
    // 0x79b8bc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x79b8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b8c0:
    // 0x79b8c0: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x79b8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_79b8c4:
    // 0x79b8c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x79b8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_79b8c8:
    // 0x79b8c8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x79b8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_79b8cc:
    // 0x79b8cc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x79b8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_79b8d0:
    // 0x79b8d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x79b8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_79b8d4:
    // 0x79b8d4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x79b8d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_79b8d8:
    // 0x79b8d8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x79b8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b8dc:
    // 0x79b8dc: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x79b8dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_79b8e0:
    // 0x79b8e0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x79b8e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79b8e4:
    // 0x79b8e4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79b8e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79b8e8:
    // 0x79b8e8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79b8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b8ec:
    // 0x79b8ec: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x79b8ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_79b8f0:
    // 0x79b8f0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b8f4:
    // 0x79b8f4: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x79b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b8f8:
    // 0x79b8f8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x79b8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_79b8fc:
    // 0x79b8fc: 0xc1e6f8e  jal         func_79BE38
label_79b900:
    if (ctx->pc == 0x79B900u) {
        ctx->pc = 0x79B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8FCu;
        // 0x79b900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B904u;
        goto label_79b904;
    }
    ctx->pc = 0x79B8FCu;
    SET_GPR_U32(ctx, 31, 0x79B904u);
    ctx->pc = 0x79B900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8FCu;
    // 0x79b900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BE38u, 0x79B8FCu, 0x79B904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B904u;
label_79b904:
    // 0x79b904: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x79b904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79b908:
    // 0x79b908: 0x0  nop
    ctx->pc = 0x79b908u;
    // NOP
label_79b90c:
    // 0x79b90c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_79b910:
    if (ctx->pc == 0x79B910u) {
        ctx->pc = 0x79B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B90Cu;
        // 0x79b910: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B914u;
        goto label_79b914;
    }
    ctx->pc = 0x79B90Cu;
    {
        const bool branch_taken_0x79b90c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79B910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B90Cu;
        // 0x79b910: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b90c) {
            ctx->pc = 0x79B948u;
            goto label_79b948;
        }
    }
    ctx->pc = 0x79B914u;
label_79b914:
    // 0x79b914: 0x0  nop
    ctx->pc = 0x79b914u;
    // NOP
label_79b918:
    // 0x79b918: 0x0  nop
    ctx->pc = 0x79b918u;
    // NOP
label_79b91c:
    // 0x79b91c: 0x4600a083  div.s       $f2, $f20, $f0
    ctx->pc = 0x79b91cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
label_79b920:
    // 0x79b920: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x79b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_79b924:
    // 0x79b924: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x79b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b928:
    // 0x79b928: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x79b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b92c:
    // 0x79b92c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x79b92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_79b930:
    // 0x79b930: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x79b930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_79b934:
    // 0x79b934: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x79b934u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_79b938:
    // 0x79b938: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x79b938u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_79b93c:
    // 0x79b93c: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x79b93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_79b940:
    // 0x79b940: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x79b940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_79b944:
    // 0x79b944: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x79b944u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_79b948:
    // 0x79b948: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x79b948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_79b94c:
    // 0x79b94c: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79b94cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_79b950:
    // 0x79b950: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b954:
    // 0x79b954: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x79b954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79b958:
    // 0x79b958: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x79b958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_79b95c:
    // 0x79b95c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x79b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_79b960:
    // 0x79b960: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x79b960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_79b964:
    // 0x79b964: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x79b964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_79b968:
    // 0x79b968: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x79b968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_79b96c:
    // 0x79b96c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79b96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_79b970:
    // 0x79b970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_79b974:
    // 0x79b974: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79b974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79b978:
    // 0x79b978: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x79b978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_79b97c:
    // 0x79b97c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79b97cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_79b980:
    // 0x79b980: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79b980u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79b984:
    // 0x79b984: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x79b984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b988:
    // 0x79b988: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79b988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79b98c:
    // 0x79b98c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79b98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b990:
    // 0x79b990: 0xdba40070  lqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79b990u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_79b994:
    // 0x79b994: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x79b994u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_79b998:
    // 0x79b998: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79b998u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79b99c:
    // 0x79b99c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x79b99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b9a0:
    // 0x79b9a0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79b9a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_79b9a4:
    // 0x79b9a4: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x79b9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_79b9a8:
    // 0x79b9a8: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x79b9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b9ac:
    // 0x79b9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b9b0:
    // 0x79b9b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x79b9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79b9b4:
    // 0x79b9b4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x79b9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_79b9b8:
    // 0x79b9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79b9bc:
    // 0x79b9bc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x79b9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_79b9c0:
    // 0x79b9c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x79b9c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79b9c4:
    // 0x79b9c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x79b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_79b9c8:
    // 0x79b9c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b9c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b9cc:
    // 0x79b9cc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79b9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_79b9d0:
    // 0x79b9d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x79b9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79b9d4:
    // 0x79b9d4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x79b9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_79b9d8:
    // 0x79b9d8: 0x24090024  addiu       $t1, $zero, 0x24
    ctx->pc = 0x79b9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_79b9dc:
    // 0x79b9dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b9dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79b9e0:
    // 0x79b9e0: 0xc04c784  jal         func_131E10
label_79b9e4:
    if (ctx->pc == 0x79B9E4u) {
        ctx->pc = 0x79B9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E0u;
        // 0x79b9e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9E8u;
        goto label_79b9e8;
    }
    ctx->pc = 0x79B9E0u;
    SET_GPR_U32(ctx, 31, 0x79B9E8u);
    ctx->pc = 0x79B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9E0u;
    // 0x79b9e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x79B9E0u, 0x79B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9E8u;
label_79b9e8:
    // 0x79b9e8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_79b9ec:
    if (ctx->pc == 0x79B9ECu) {
        ctx->pc = 0x79B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E8u;
        // 0x79b9ec: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79B9F0u;
        goto label_79b9f0;
    }
    ctx->pc = 0x79B9E8u;
    {
        const bool branch_taken_0x79b9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E8u;
        // 0x79b9ec: 0x27b20090  addiu       $s2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9e8) {
            ctx->pc = 0x79BA80u;
            goto label_79ba80;
        }
    }
    ctx->pc = 0x79B9F0u;
label_79b9f0:
    // 0x79b9f0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x79b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_79b9f4:
    // 0x79b9f4: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x79b9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
label_79b9f8:
    // 0x79b9f8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79b9f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_79b9fc:
    // 0x79b9fc: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x79b9fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_79ba00:
    // 0x79ba00: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ba00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ba04:
    // 0x79ba04: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79ba04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ba08:
    // 0x79ba08: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x79ba08u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_79ba0c:
    // 0x79ba0c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x79ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ba10:
    // 0x79ba10: 0xc07df8a  jal         func_1F7E28
label_79ba14:
    if (ctx->pc == 0x79BA14u) {
        ctx->pc = 0x79BA18u;
        goto label_79ba18;
    }
    ctx->pc = 0x79BA10u;
    SET_GPR_U32(ctx, 31, 0x79BA18u);
    ctx->pc = 0x1F7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E28u, 0x79BA10u, 0x79BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA18u;
label_79ba18:
    // 0x79ba18: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x79ba18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_79ba1c:
    // 0x79ba1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79ba1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_79ba20:
    // 0x79ba20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79ba20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79ba24:
    // 0x79ba24: 0x0  nop
    ctx->pc = 0x79ba24u;
    // NOP
label_79ba28:
    // 0x79ba28: 0x4601a840  add.s       $f1, $f21, $f1
    ctx->pc = 0x79ba28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
label_79ba2c:
    // 0x79ba2c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x79ba2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_79ba30:
    // 0x79ba30: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x79ba30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ba34:
    // 0x79ba34: 0x0  nop
    ctx->pc = 0x79ba34u;
    // NOP
label_79ba38:
    // 0x79ba38: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_79ba3c:
    if (ctx->pc == 0x79BA3Cu) {
        ctx->pc = 0x79BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA38u;
        // 0x79ba3c: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA40u;
        goto label_79ba40;
    }
    ctx->pc = 0x79BA38u;
    {
        const bool branch_taken_0x79ba38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA38u;
        // 0x79ba3c: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba38) {
            ctx->pc = 0x79BA80u;
            goto label_79ba80;
        }
    }
    ctx->pc = 0x79BA40u;
label_79ba40:
    // 0x79ba40: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x79ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
label_79ba44:
    // 0x79ba44: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x79ba44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_79ba48:
    // 0x79ba48: 0xda650000  lqc2        $vf5, 0x0($s3)
    ctx->pc = 0x79ba48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_79ba4c:
    // 0x79ba4c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79ba4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_79ba50:
    // 0x79ba50: 0xfba400a0  sqc2        $vf4, 0xA0($sp)
    ctx->pc = 0x79ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ba54:
    // 0x79ba54: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79ba54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_79ba58:
    // 0x79ba58: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x79ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
label_79ba5c:
    // 0x79ba5c: 0xc680054c  lwc1        $f0, 0x54C($s4)
    ctx->pc = 0x79ba5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_79ba60:
    // 0x79ba60: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x79ba60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_79ba64:
    // 0x79ba64: 0x0  nop
    ctx->pc = 0x79ba64u;
    // NOP
label_79ba68:
    // 0x79ba68: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_79ba6c:
    if (ctx->pc == 0x79BA6Cu) {
        ctx->pc = 0x79BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA68u;
        // 0x79ba6c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA70u;
        goto label_79ba70;
    }
    ctx->pc = 0x79BA68u;
    {
        const bool branch_taken_0x79ba68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x79BA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA68u;
        // 0x79ba6c: 0x7bb00120  lq          $s0, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba68) {
            ctx->pc = 0x79BA84u;
            goto label_79ba84;
        }
    }
    ctx->pc = 0x79BA70u;
label_79ba70:
    // 0x79ba70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x79ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_79ba74:
    // 0x79ba74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x79ba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_79ba78:
    // 0x79ba78: 0xc1e6d6a  jal         func_79B5A8
label_79ba7c:
    if (ctx->pc == 0x79BA7Cu) {
        ctx->pc = 0x79BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA78u;
        // 0x79ba7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BA80u;
        goto label_79ba80;
    }
    ctx->pc = 0x79BA78u;
    SET_GPR_U32(ctx, 31, 0x79BA80u);
    ctx->pc = 0x79BA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA78u;
    // 0x79ba7c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B5A8u, 0x79BA78u, 0x79BA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA80u;
label_79ba80:
    // 0x79ba80: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x79ba80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_79ba84:
    // 0x79ba84: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x79ba84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_79ba88:
    // 0x79ba88: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x79ba88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_79ba8c:
    // 0x79ba8c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x79ba8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_79ba90:
    // 0x79ba90: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x79ba90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_79ba94:
    // 0x79ba94: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x79ba94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_79ba98:
    // 0x79ba98: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x79ba98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_79ba9c:
    // 0x79ba9c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x79ba9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_79baa0:
    // 0x79baa0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x79baa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_79baa4:
    // 0x79baa4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x79baa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_79baa8:
    // 0x79baa8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x79baa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79baac:
    // 0x79baac: 0x3e00008  jr          $ra
label_79bab0:
    if (ctx->pc == 0x79BAB0u) {
        ctx->pc = 0x79BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAACu;
        // 0x79bab0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79BAB4u;
        goto label_79bab4;
    }
    ctx->pc = 0x79BAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAACu;
        // 0x79bab0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAB4u;
label_79bab4:
    // 0x79bab4: 0x0  nop
    ctx->pc = 0x79bab4u;
    // NOP
    ctx->pc = 0x79bab8u;
}
} // namespace gh_r409

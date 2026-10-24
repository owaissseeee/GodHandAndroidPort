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

// Function: func_001AA188
// Address: 0x1aa188 - 0x1aa478
void func_001AA188_0x1aa188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001AA188_0x1aa188");
#endif

    switch (ctx->pc) {
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa18cu: goto label_1aa18c;
        case 0x1aa190u: goto label_1aa190;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa198u: goto label_1aa198;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1a8u: goto label_1aa1a8;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1b0u: goto label_1aa1b0;
        case 0x1aa1b4u: goto label_1aa1b4;
        case 0x1aa1b8u: goto label_1aa1b8;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1c0u: goto label_1aa1c0;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1c8u: goto label_1aa1c8;
        case 0x1aa1ccu: goto label_1aa1cc;
        case 0x1aa1d0u: goto label_1aa1d0;
        case 0x1aa1d4u: goto label_1aa1d4;
        case 0x1aa1d8u: goto label_1aa1d8;
        case 0x1aa1dcu: goto label_1aa1dc;
        case 0x1aa1e0u: goto label_1aa1e0;
        case 0x1aa1e4u: goto label_1aa1e4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa1f0u: goto label_1aa1f0;
        case 0x1aa1f4u: goto label_1aa1f4;
        case 0x1aa1f8u: goto label_1aa1f8;
        case 0x1aa1fcu: goto label_1aa1fc;
        case 0x1aa200u: goto label_1aa200;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa208u: goto label_1aa208;
        case 0x1aa20cu: goto label_1aa20c;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa214u: goto label_1aa214;
        case 0x1aa218u: goto label_1aa218;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa220u: goto label_1aa220;
        case 0x1aa224u: goto label_1aa224;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa22cu: goto label_1aa22c;
        case 0x1aa230u: goto label_1aa230;
        case 0x1aa234u: goto label_1aa234;
        case 0x1aa238u: goto label_1aa238;
        case 0x1aa23cu: goto label_1aa23c;
        case 0x1aa240u: goto label_1aa240;
        case 0x1aa244u: goto label_1aa244;
        case 0x1aa248u: goto label_1aa248;
        case 0x1aa24cu: goto label_1aa24c;
        case 0x1aa250u: goto label_1aa250;
        case 0x1aa254u: goto label_1aa254;
        case 0x1aa258u: goto label_1aa258;
        case 0x1aa25cu: goto label_1aa25c;
        case 0x1aa260u: goto label_1aa260;
        case 0x1aa264u: goto label_1aa264;
        case 0x1aa268u: goto label_1aa268;
        case 0x1aa26cu: goto label_1aa26c;
        case 0x1aa270u: goto label_1aa270;
        case 0x1aa274u: goto label_1aa274;
        case 0x1aa278u: goto label_1aa278;
        case 0x1aa27cu: goto label_1aa27c;
        case 0x1aa280u: goto label_1aa280;
        case 0x1aa284u: goto label_1aa284;
        case 0x1aa288u: goto label_1aa288;
        case 0x1aa28cu: goto label_1aa28c;
        case 0x1aa290u: goto label_1aa290;
        case 0x1aa294u: goto label_1aa294;
        case 0x1aa298u: goto label_1aa298;
        case 0x1aa29cu: goto label_1aa29c;
        case 0x1aa2a0u: goto label_1aa2a0;
        case 0x1aa2a4u: goto label_1aa2a4;
        case 0x1aa2a8u: goto label_1aa2a8;
        case 0x1aa2acu: goto label_1aa2ac;
        case 0x1aa2b0u: goto label_1aa2b0;
        case 0x1aa2b4u: goto label_1aa2b4;
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2bcu: goto label_1aa2bc;
        case 0x1aa2c0u: goto label_1aa2c0;
        case 0x1aa2c4u: goto label_1aa2c4;
        case 0x1aa2c8u: goto label_1aa2c8;
        case 0x1aa2ccu: goto label_1aa2cc;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2d4u: goto label_1aa2d4;
        case 0x1aa2d8u: goto label_1aa2d8;
        case 0x1aa2dcu: goto label_1aa2dc;
        case 0x1aa2e0u: goto label_1aa2e0;
        case 0x1aa2e4u: goto label_1aa2e4;
        case 0x1aa2e8u: goto label_1aa2e8;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2f0u: goto label_1aa2f0;
        case 0x1aa2f4u: goto label_1aa2f4;
        case 0x1aa2f8u: goto label_1aa2f8;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa300u: goto label_1aa300;
        case 0x1aa304u: goto label_1aa304;
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa30cu: goto label_1aa30c;
        case 0x1aa310u: goto label_1aa310;
        case 0x1aa314u: goto label_1aa314;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa31cu: goto label_1aa31c;
        case 0x1aa320u: goto label_1aa320;
        case 0x1aa324u: goto label_1aa324;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa32cu: goto label_1aa32c;
        case 0x1aa330u: goto label_1aa330;
        case 0x1aa334u: goto label_1aa334;
        case 0x1aa338u: goto label_1aa338;
        case 0x1aa33cu: goto label_1aa33c;
        case 0x1aa340u: goto label_1aa340;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa348u: goto label_1aa348;
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa350u: goto label_1aa350;
        case 0x1aa354u: goto label_1aa354;
        case 0x1aa358u: goto label_1aa358;
        case 0x1aa35cu: goto label_1aa35c;
        case 0x1aa360u: goto label_1aa360;
        case 0x1aa364u: goto label_1aa364;
        case 0x1aa368u: goto label_1aa368;
        case 0x1aa36cu: goto label_1aa36c;
        case 0x1aa370u: goto label_1aa370;
        case 0x1aa374u: goto label_1aa374;
        case 0x1aa378u: goto label_1aa378;
        case 0x1aa37cu: goto label_1aa37c;
        case 0x1aa380u: goto label_1aa380;
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa388u: goto label_1aa388;
        case 0x1aa38cu: goto label_1aa38c;
        case 0x1aa390u: goto label_1aa390;
        case 0x1aa394u: goto label_1aa394;
        case 0x1aa398u: goto label_1aa398;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa3a0u: goto label_1aa3a0;
        case 0x1aa3a4u: goto label_1aa3a4;
        case 0x1aa3a8u: goto label_1aa3a8;
        case 0x1aa3acu: goto label_1aa3ac;
        case 0x1aa3b0u: goto label_1aa3b0;
        case 0x1aa3b4u: goto label_1aa3b4;
        case 0x1aa3b8u: goto label_1aa3b8;
        case 0x1aa3bcu: goto label_1aa3bc;
        case 0x1aa3c0u: goto label_1aa3c0;
        case 0x1aa3c4u: goto label_1aa3c4;
        case 0x1aa3c8u: goto label_1aa3c8;
        case 0x1aa3ccu: goto label_1aa3cc;
        case 0x1aa3d0u: goto label_1aa3d0;
        case 0x1aa3d4u: goto label_1aa3d4;
        case 0x1aa3d8u: goto label_1aa3d8;
        case 0x1aa3dcu: goto label_1aa3dc;
        case 0x1aa3e0u: goto label_1aa3e0;
        case 0x1aa3e4u: goto label_1aa3e4;
        case 0x1aa3e8u: goto label_1aa3e8;
        case 0x1aa3ecu: goto label_1aa3ec;
        case 0x1aa3f0u: goto label_1aa3f0;
        case 0x1aa3f4u: goto label_1aa3f4;
        case 0x1aa3f8u: goto label_1aa3f8;
        case 0x1aa3fcu: goto label_1aa3fc;
        case 0x1aa400u: goto label_1aa400;
        case 0x1aa404u: goto label_1aa404;
        case 0x1aa408u: goto label_1aa408;
        case 0x1aa40cu: goto label_1aa40c;
        case 0x1aa410u: goto label_1aa410;
        case 0x1aa414u: goto label_1aa414;
        case 0x1aa418u: goto label_1aa418;
        case 0x1aa41cu: goto label_1aa41c;
        case 0x1aa420u: goto label_1aa420;
        case 0x1aa424u: goto label_1aa424;
        case 0x1aa428u: goto label_1aa428;
        case 0x1aa42cu: goto label_1aa42c;
        case 0x1aa430u: goto label_1aa430;
        case 0x1aa434u: goto label_1aa434;
        case 0x1aa438u: goto label_1aa438;
        case 0x1aa43cu: goto label_1aa43c;
        case 0x1aa440u: goto label_1aa440;
        case 0x1aa444u: goto label_1aa444;
        case 0x1aa448u: goto label_1aa448;
        case 0x1aa44cu: goto label_1aa44c;
        case 0x1aa450u: goto label_1aa450;
        case 0x1aa454u: goto label_1aa454;
        case 0x1aa458u: goto label_1aa458;
        case 0x1aa45cu: goto label_1aa45c;
        case 0x1aa460u: goto label_1aa460;
        case 0x1aa464u: goto label_1aa464;
        case 0x1aa468u: goto label_1aa468;
        case 0x1aa46cu: goto label_1aa46c;
        case 0x1aa470u: goto label_1aa470;
        case 0x1aa474u: goto label_1aa474;
        default: break;
    }

    ctx->pc = 0x1aa188u;

label_1aa188:
    // 0x1aa188: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1aa188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1aa18c:
    // 0x1aa18c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1aa18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_1aa190:
    // 0x1aa190: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa194:
    // 0x1aa194: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1aa194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_1aa198:
    // 0x1aa198: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1aa198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_1aa19c:
    // 0x1aa19c: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1aa19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_1aa1a0:
    // 0x1aa1a0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x1aa1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_1aa1a4:
    // 0x1aa1a4: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x1aa1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_1aa1a8:
    // 0x1aa1a8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x1aa1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_1aa1ac:
    // 0x1aa1ac: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1aa1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1aa1b0:
    // 0x1aa1b0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1aa1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1aa1b4:
    // 0x1aa1b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1aa1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1aa1b8:
    // 0x1aa1b8: 0xe7b50128  swc1        $f21, 0x128($sp)
    ctx->pc = 0x1aa1b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1aa1bc:
    // 0x1aa1bc: 0xc06ddac  jal         func_1B76B0
label_1aa1c0:
    if (ctx->pc == 0x1AA1C0u) {
        ctx->pc = 0x1AA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1BCu;
        // 0x1aa1c0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1C4u;
        goto label_1aa1c4;
    }
    ctx->pc = 0x1AA1BCu;
    SET_GPR_U32(ctx, 31, 0x1AA1C4u);
    ctx->pc = 0x1AA1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1BCu;
    // 0x1aa1c0: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1AA1BCu, 0x1AA1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1C4u;
label_1aa1c4:
    // 0x1aa1c4: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_1aa1c8:
    if (ctx->pc == 0x1AA1C8u) {
        ctx->pc = 0x1AA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C4u;
        // 0x1aa1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1CCu;
        goto label_1aa1cc;
    }
    ctx->pc = 0x1AA1C4u;
    {
        const bool branch_taken_0x1aa1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C4u;
        // 0x1aa1c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1c4) {
            ctx->pc = 0x1AA43Cu;
            goto label_1aa43c;
        }
    }
    ctx->pc = 0x1AA1CCu;
label_1aa1cc:
    // 0x1aa1cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1aa1d0:
    // 0x1aa1d0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x1aa1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
label_1aa1d4:
    // 0x1aa1d4: 0xc04d23a  jal         func_1348E8
label_1aa1d8:
    if (ctx->pc == 0x1AA1D8u) {
        ctx->pc = 0x1AA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1D4u;
        // 0x1aa1d8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1DCu;
        goto label_1aa1dc;
    }
    ctx->pc = 0x1AA1D4u;
    SET_GPR_U32(ctx, 31, 0x1AA1DCu);
    ctx->pc = 0x1AA1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1D4u;
    // 0x1aa1d8: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x1AA1D4u, 0x1AA1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1DCu;
label_1aa1dc:
    // 0x1aa1dc: 0xc0a4bd4  jal         func_292F50
label_1aa1e0:
    if (ctx->pc == 0x1AA1E0u) {
        ctx->pc = 0x1AA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1DCu;
        // 0x1aa1e0: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1E4u;
        goto label_1aa1e4;
    }
    ctx->pc = 0x1AA1DCu;
    SET_GPR_U32(ctx, 31, 0x1AA1E4u);
    ctx->pc = 0x1AA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1DCu;
    // 0x1aa1e0: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1AA1DCu, 0x1AA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA1E4u;
label_1aa1e4:
    // 0x1aa1e4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1aa1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_1aa1e8:
    // 0x1aa1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1ec:
    // 0x1aa1ec: 0xc4417a14  lwc1        $f1, 0x7A14($v0)
    ctx->pc = 0x1aa1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa1f0:
    // 0x1aa1f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1aa1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1aa1f4:
    // 0x1aa1f4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1aa1f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1aa1f8:
    // 0x1aa1f8: 0xc0560a2  jal         func_158288
label_1aa1fc:
    if (ctx->pc == 0x1AA1FCu) {
        ctx->pc = 0x1AA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F8u;
        // 0x1aa1fc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA200u;
        goto label_1aa200;
    }
    ctx->pc = 0x1AA1F8u;
    SET_GPR_U32(ctx, 31, 0x1AA200u);
    ctx->pc = 0x1AA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1F8u;
    // 0x1aa1fc: 0xe62005a8  swc1        $f0, 0x5A8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1AA1F8u, 0x1AA200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA200u;
label_1aa200:
    // 0x1aa200: 0x922302f4  lbu         $v1, 0x2F4($s1)
    ctx->pc = 0x1aa200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_1aa204:
    // 0x1aa204: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_1aa208:
    // 0x1aa208: 0x24477c50  addiu       $a3, $v0, 0x7C50
    ctx->pc = 0x1aa208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31824));
label_1aa20c:
    // 0x1aa20c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1aa20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1aa210:
    // 0x1aa210: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1aa210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1aa214:
    // 0x1aa214: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1aa214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1aa218:
    // 0x1aa218: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1aa218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1aa21c:
    // 0x1aa21c: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1aa21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1aa220:
    // 0x1aa220: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1aa220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1aa224:
    // 0x1aa224: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1aa224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa228:
    // 0x1aa228: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1aa228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa22c:
    // 0x1aa22c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1aa22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa230:
    // 0x1aa230: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1aa230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa234:
    // 0x1aa234: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1aa234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa238:
    // 0x1aa238: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1aa238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1aa23c:
    // 0x1aa23c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1aa23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1aa240:
    // 0x1aa240: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1aa240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_1aa244:
    // 0x1aa244: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x1aa244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1aa248:
    // 0x1aa248: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aa248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa24c:
    // 0x1aa24c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1aa24cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_1aa250:
    // 0x1aa250: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_1aa254:
    if (ctx->pc == 0x1AA254u) {
        ctx->pc = 0x1AA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA250u;
        // 0x1aa254: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA258u;
        goto label_1aa258;
    }
    ctx->pc = 0x1AA250u;
    {
        const bool branch_taken_0x1aa250 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AA254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA250u;
        // 0x1aa254: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa250) {
            ctx->pc = 0x1AA284u;
            goto label_1aa284;
        }
    }
    ctx->pc = 0x1AA258u;
label_1aa258:
    // 0x1aa258: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x1aa258u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1aa25c:
    // 0x1aa25c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1aa25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1aa260:
    // 0x1aa260: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aa260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa264:
    // 0x1aa264: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aa264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1aa268:
    // 0x1aa268: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aa268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1aa26c:
    // 0x1aa26c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1aa26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa270:
    // 0x1aa270: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1aa270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1aa274:
    // 0x1aa274: 0xdc92fff8  ld          $s2, -0x8($a0)
    ctx->pc = 0x1aa274u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1aa278:
    // 0x1aa278: 0x12303f  dsra32      $a2, $s2, 0
    ctx->pc = 0x1aa278u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 18) >> (32 + 0));
label_1aa27c:
    // 0x1aa27c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1aa280:
    if (ctx->pc == 0x1AA280u) {
        ctx->pc = 0x1AA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA27Cu;
        // 0x1aa280: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA284u;
        goto label_1aa284;
    }
    ctx->pc = 0x1AA27Cu;
    {
        const bool branch_taken_0x1aa27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA27Cu;
        // 0x1aa280: 0x922202f4  lbu         $v0, 0x2F4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa27c) {
            ctx->pc = 0x1AA290u;
            goto label_1aa290;
        }
    }
    ctx->pc = 0x1AA284u;
label_1aa284:
    // 0x1aa284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa288:
    // 0x1aa288: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1aa288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa28c:
    // 0x1aa28c: 0x922202f4  lbu         $v0, 0x2F4($s1)
    ctx->pc = 0x1aa28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 756)));
label_1aa290:
    // 0x1aa290: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1aa294:
    // 0x1aa294: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1aa298:
    // 0x1aa298: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1aa29c:
    if (ctx->pc == 0x1AA29Cu) {
        ctx->pc = 0x1AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA298u;
        // 0x1aa29c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2A0u;
        goto label_1aa2a0;
    }
    ctx->pc = 0x1AA298u;
    {
        const bool branch_taken_0x1aa298 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA298u;
        // 0x1aa29c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa298) {
            ctx->pc = 0x1AA2B4u;
            goto label_1aa2b4;
        }
    }
    ctx->pc = 0x1AA2A0u;
label_1aa2a0:
    // 0x1aa2a0: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x1aa2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_1aa2a4:
    // 0x1aa2a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1aa2a8:
    // 0x1aa2a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1aa2ac:
    // 0x1aa2ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1aa2b0:
    if (ctx->pc == 0x1AA2B0u) {
        ctx->pc = 0x1AA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2ACu;
        // 0x1aa2b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2B4u;
        goto label_1aa2b4;
    }
    ctx->pc = 0x1AA2ACu;
    {
        const bool branch_taken_0x1aa2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2ACu;
        // 0x1aa2b0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2ac) {
            ctx->pc = 0x1AA2B8u;
            goto label_1aa2b8;
        }
    }
    ctx->pc = 0x1AA2B4u;
label_1aa2b4:
    // 0x1aa2b4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aa2b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1aa2b8:
    // 0x1aa2b8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1aa2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1aa2bc:
    // 0x1aa2bc: 0xc0f809  jalr        $a2
label_1aa2c0:
    if (ctx->pc == 0x1AA2C0u) {
        ctx->pc = 0x1AA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2BCu;
        // 0x1aa2c0: 0x24160006  addiu       $s6, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2C4u;
        goto label_1aa2c4;
    }
    ctx->pc = 0x1AA2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1AA2C4u);
        ctx->pc = 0x1AA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2BCu;
        // 0x1aa2c0: 0x24160006  addiu       $s6, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2BCu, 0x1AA2C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA2C4u;
label_1aa2c4:
    // 0x1aa2c4: 0xc06a91e  jal         func_1AA478
label_1aa2c8:
    if (ctx->pc == 0x1AA2C8u) {
        ctx->pc = 0x1AA2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2C4u;
        // 0x1aa2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2CCu;
        goto label_1aa2cc;
    }
    ctx->pc = 0x1AA2C4u;
    SET_GPR_U32(ctx, 31, 0x1AA2CCu);
    ctx->pc = 0x1AA2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2C4u;
    // 0x1aa2c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA478u, 0x1AA2C4u, 0x1AA2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA2CCu;
label_1aa2cc:
    // 0x1aa2cc: 0xc06ab78  jal         func_1AADE0
label_1aa2d0:
    if (ctx->pc == 0x1AA2D0u) {
        ctx->pc = 0x1AA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2CCu;
        // 0x1aa2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2D4u;
        goto label_1aa2d4;
    }
    ctx->pc = 0x1AA2CCu;
    SET_GPR_U32(ctx, 31, 0x1AA2D4u);
    ctx->pc = 0x1AA2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA2CCu;
    // 0x1aa2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADE0u, 0x1AA2CCu, 0x1AA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA2D4u;
label_1aa2d4:
    // 0x1aa2d4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1aa2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1aa2d8:
    // 0x1aa2d8: 0x10560052  beq         $v0, $s6, . + 4 + (0x52 << 2)
label_1aa2dc:
    if (ctx->pc == 0x1AA2DCu) {
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D8u;
        // 0x1aa2dc: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2E0u;
        goto label_1aa2e0;
    }
    ctx->pc = 0x1AA2D8u;
    {
        const bool branch_taken_0x1aa2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x1AA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2D8u;
        // 0x1aa2dc: 0x27be0030  addiu       $fp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2d8) {
            ctx->pc = 0x1AA424u;
            goto label_1aa424;
        }
    }
    ctx->pc = 0x1AA2E0u;
label_1aa2e0:
    // 0x1aa2e0: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1aa2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1aa2e4:
    // 0x1aa2e4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1aa2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1aa2e8:
    // 0x1aa2e8: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1aa2e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1aa2ec:
    // 0x1aa2ec: 0x26350680  addiu       $s5, $s1, 0x680
    ctx->pc = 0x1aa2ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1664));
label_1aa2f0:
    // 0x1aa2f0: 0x26300650  addiu       $s0, $s1, 0x650
    ctx->pc = 0x1aa2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
label_1aa2f4:
    // 0x1aa2f4: 0x26340670  addiu       $s4, $s1, 0x670
    ctx->pc = 0x1aa2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1648));
label_1aa2f8:
    // 0x1aa2f8: 0x26330660  addiu       $s3, $s1, 0x660
    ctx->pc = 0x1aa2f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
label_1aa2fc:
    // 0x1aa2fc: 0x26320640  addiu       $s2, $s1, 0x640
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
label_1aa300:
    // 0x1aa300: 0xc05ce40  jal         func_173900
label_1aa304:
    if (ctx->pc == 0x1AA304u) {
        ctx->pc = 0x1AA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA300u;
        // 0x1aa304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA308u;
        goto label_1aa308;
    }
    ctx->pc = 0x1AA300u;
    SET_GPR_U32(ctx, 31, 0x1AA308u);
    ctx->pc = 0x1AA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA300u;
    // 0x1aa304: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1AA300u, 0x1AA308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA308u;
label_1aa308:
    // 0x1aa308: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa30c:
    // 0x1aa30c: 0x5443003b  bnel        $v0, $v1, . + 4 + (0x3B << 2)
label_1aa310:
    if (ctx->pc == 0x1AA310u) {
        ctx->pc = 0x1AA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA30Cu;
        // 0x1aa310: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA314u;
        goto label_1aa314;
    }
    ctx->pc = 0x1AA30Cu;
    {
        const bool branch_taken_0x1aa30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1aa30c) {
            ctx->pc = 0x1AA310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA30Cu;
            // 0x1aa310: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3FCu;
            goto label_1aa3fc;
        }
    }
    ctx->pc = 0x1AA314u;
label_1aa314:
    // 0x1aa314: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_1aa318:
    // 0x1aa318: 0xc0a4bd4  jal         func_292F50
label_1aa31c:
    if (ctx->pc == 0x1AA31Cu) {
        ctx->pc = 0x1AA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA318u;
        // 0x1aa31c: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA320u;
        goto label_1aa320;
    }
    ctx->pc = 0x1AA318u;
    SET_GPR_U32(ctx, 31, 0x1AA320u);
    ctx->pc = 0x1AA31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA318u;
    // 0x1aa31c: 0x24a464f0  addiu       $a0, $a1, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1AA318u, 0x1AA320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA320u;
label_1aa320:
    // 0x1aa320: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1aa320u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1aa324:
    // 0x1aa324: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1aa324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_1aa328:
    // 0x1aa328: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1aa328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa32c:
    // 0x1aa32c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1aa32cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa330:
    // 0x1aa330: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1aa330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1aa334:
    // 0x1aa334: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1aa334u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1aa338:
    // 0x1aa338: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1aa338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1aa33c:
    // 0x1aa33c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1aa33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa340:
    // 0x1aa340: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1aa340u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1aa344:
    // 0x1aa344: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1aa344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa348:
    // 0x1aa348: 0xda04fff0  lqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1aa348u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_1aa34c:
    // 0x1aa34c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1aa34cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1aa350:
    // 0x1aa350: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1aa350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1aa354:
    // 0x1aa354: 0xfa04fff0  sqc2        $vf4, -0x10($s0)
    ctx->pc = 0x1aa354u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4294967280), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa358:
    // 0x1aa358: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1aa358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1aa35c:
    // 0x1aa35c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1aa35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa360:
    // 0x1aa360: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1aa360u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa364:
    // 0x1aa364: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1aa364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1aa368:
    // 0x1aa368: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1aa368u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1aa36c:
    // 0x1aa36c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1aa36cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1aa370:
    // 0x1aa370: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1aa370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa374:
    // 0x1aa374: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x1aa374u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1aa378:
    // 0x1aa378: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1aa378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa37c:
    // 0x1aa37c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1aa37cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa380:
    // 0x1aa380: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x1aa380u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_1aa384:
    // 0x1aa384: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1aa384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1aa388:
    // 0x1aa388: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1aa388u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1aa38c:
    // 0x1aa38c: 0xc07df68  jal         func_1F7DA0
label_1aa390:
    if (ctx->pc == 0x1AA390u) {
        ctx->pc = 0x1AA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA38Cu;
        // 0x1aa390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA394u;
        goto label_1aa394;
    }
    ctx->pc = 0x1AA38Cu;
    SET_GPR_U32(ctx, 31, 0x1AA394u);
    ctx->pc = 0x1AA390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA38Cu;
    // 0x1aa390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1AA38Cu, 0x1AA394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA394u;
label_1aa394:
    // 0x1aa394: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aa394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aa398:
    // 0x1aa398: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa39c:
    // 0x1aa39c: 0xc051dca  jal         func_147728
label_1aa3a0:
    if (ctx->pc == 0x1AA3A0u) {
        ctx->pc = 0x1AA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA39Cu;
        // 0x1aa3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3A4u;
        goto label_1aa3a4;
    }
    ctx->pc = 0x1AA39Cu;
    SET_GPR_U32(ctx, 31, 0x1AA3A4u);
    ctx->pc = 0x1AA3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA39Cu;
    // 0x1aa3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1AA39Cu, 0x1AA3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3A4u;
label_1aa3a4:
    // 0x1aa3a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aa3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aa3a8:
    // 0x1aa3a8: 0xc051f10  jal         func_147C40
label_1aa3ac:
    if (ctx->pc == 0x1AA3ACu) {
        ctx->pc = 0x1AA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3A8u;
        // 0x1aa3ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3B0u;
        goto label_1aa3b0;
    }
    ctx->pc = 0x1AA3A8u;
    SET_GPR_U32(ctx, 31, 0x1AA3B0u);
    ctx->pc = 0x1AA3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3A8u;
    // 0x1aa3ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1AA3A8u, 0x1AA3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3B0u;
label_1aa3b0:
    // 0x1aa3b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1aa3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1aa3b4:
    // 0x1aa3b4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1aa3b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3b8:
    // 0x1aa3b8: 0xc051efe  jal         func_147BF8
label_1aa3bc:
    if (ctx->pc == 0x1AA3BCu) {
        ctx->pc = 0x1AA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3B8u;
        // 0x1aa3bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3C0u;
        goto label_1aa3c0;
    }
    ctx->pc = 0x1AA3B8u;
    SET_GPR_U32(ctx, 31, 0x1AA3C0u);
    ctx->pc = 0x1AA3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3B8u;
    // 0x1aa3bc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1AA3B8u, 0x1AA3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3C0u;
label_1aa3c0:
    // 0x1aa3c0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1aa3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1aa3c4:
    // 0x1aa3c4: 0xc051d4a  jal         func_147528
label_1aa3c8:
    if (ctx->pc == 0x1AA3C8u) {
        ctx->pc = 0x1AA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3C4u;
        // 0x1aa3c8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3CCu;
        goto label_1aa3cc;
    }
    ctx->pc = 0x1AA3C4u;
    SET_GPR_U32(ctx, 31, 0x1AA3CCu);
    ctx->pc = 0x1AA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3C4u;
    // 0x1aa3c8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1AA3C4u, 0x1AA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3CCu;
label_1aa3cc:
    // 0x1aa3cc: 0xc6000048  lwc1        $f0, 0x48($s0)
    ctx->pc = 0x1aa3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa3d0:
    // 0x1aa3d0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1aa3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa3d4:
    // 0x1aa3d4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1aa3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1aa3d8:
    // 0x1aa3d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1aa3d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1aa3dc:
    // 0x1aa3dc: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1aa3dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aa3e0:
    // 0x1aa3e0: 0x0  nop
    ctx->pc = 0x1aa3e0u;
    // NOP
label_1aa3e4:
    // 0x1aa3e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1aa3e8:
    if (ctx->pc == 0x1AA3E8u) {
        ctx->pc = 0x1AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E4u;
        // 0x1aa3e8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3ECu;
        goto label_1aa3ec;
    }
    ctx->pc = 0x1AA3E4u;
    {
        const bool branch_taken_0x1aa3e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E4u;
        // 0x1aa3e8: 0xe6010014  swc1        $f1, 0x14($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3e4) {
            ctx->pc = 0x1AA3F8u;
            goto label_1aa3f8;
        }
    }
    ctx->pc = 0x1AA3ECu;
label_1aa3ec:
    // 0x1aa3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa3f0:
    // 0x1aa3f0: 0xc05bd90  jal         func_16F640
label_1aa3f4:
    if (ctx->pc == 0x1AA3F4u) {
        ctx->pc = 0x1AA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3F0u;
        // 0x1aa3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3F8u;
        goto label_1aa3f8;
    }
    ctx->pc = 0x1AA3F0u;
    SET_GPR_U32(ctx, 31, 0x1AA3F8u);
    ctx->pc = 0x1AA3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA3F0u;
    // 0x1aa3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1AA3F0u, 0x1AA3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA3F8u;
label_1aa3f8:
    // 0x1aa3f8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1aa3f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1aa3fc:
    // 0x1aa3fc: 0x26b50060  addiu       $s5, $s5, 0x60
    ctx->pc = 0x1aa3fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_1aa400:
    // 0x1aa400: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x1aa400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1aa404:
    // 0x1aa404: 0x26940060  addiu       $s4, $s4, 0x60
    ctx->pc = 0x1aa404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_1aa408:
    // 0x1aa408: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x1aa408u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1aa40c:
    // 0x1aa40c: 0x2ac2000f  slti        $v0, $s6, 0xF
    ctx->pc = 0x1aa40cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)15) ? 1 : 0);
label_1aa410:
    // 0x1aa410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aa414:
    if (ctx->pc == 0x1AA414u) {
        ctx->pc = 0x1AA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA410u;
        // 0x1aa414: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA418u;
        goto label_1aa418;
    }
    ctx->pc = 0x1AA410u;
    {
        const bool branch_taken_0x1aa410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA410u;
        // 0x1aa414: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa410) {
            ctx->pc = 0x1AA424u;
            goto label_1aa424;
        }
    }
    ctx->pc = 0x1AA418u;
label_1aa418:
    // 0x1aa418: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1aa418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
label_1aa41c:
    // 0x1aa41c: 0x1456ffb8  bne         $v0, $s6, . + 4 + (-0x48 << 2)
label_1aa420:
    if (ctx->pc == 0x1AA420u) {
        ctx->pc = 0x1AA424u;
        goto label_1aa424;
    }
    ctx->pc = 0x1AA41Cu;
    {
        const bool branch_taken_0x1aa41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1aa41c) {
            ctx->pc = 0x1AA300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa300;
        }
    }
    ctx->pc = 0x1AA424u;
label_1aa424:
    // 0x1aa424: 0xc053ed2  jal         func_14FB48
label_1aa428:
    if (ctx->pc == 0x1AA428u) {
        ctx->pc = 0x1AA428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA424u;
        // 0x1aa428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA42Cu;
        goto label_1aa42c;
    }
    ctx->pc = 0x1AA424u;
    SET_GPR_U32(ctx, 31, 0x1AA42Cu);
    ctx->pc = 0x1AA428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA424u;
    // 0x1aa428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x1AA424u, 0x1AA42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA42Cu;
label_1aa42c:
    // 0x1aa42c: 0xc0527ae  jal         func_149EB8
label_1aa430:
    if (ctx->pc == 0x1AA430u) {
        ctx->pc = 0x1AA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA42Cu;
        // 0x1aa430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA434u;
        goto label_1aa434;
    }
    ctx->pc = 0x1AA42Cu;
    SET_GPR_U32(ctx, 31, 0x1AA434u);
    ctx->pc = 0x1AA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA42Cu;
    // 0x1aa430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1AA42Cu, 0x1AA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA434u;
label_1aa434:
    // 0x1aa434: 0xc05280e  jal         func_14A038
label_1aa438:
    if (ctx->pc == 0x1AA438u) {
        ctx->pc = 0x1AA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA434u;
        // 0x1aa438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA43Cu;
        goto label_1aa43c;
    }
    ctx->pc = 0x1AA434u;
    SET_GPR_U32(ctx, 31, 0x1AA43Cu);
    ctx->pc = 0x1AA438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA434u;
    // 0x1aa438: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x1AA434u, 0x1AA43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA43Cu;
label_1aa43c:
    // 0x1aa43c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x1aa43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1aa440:
    // 0x1aa440: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1aa440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1aa444:
    // 0x1aa444: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1aa444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1aa448:
    // 0x1aa448: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1aa448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1aa44c:
    // 0x1aa44c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x1aa44cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1aa450:
    // 0x1aa450: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x1aa450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1aa454:
    // 0x1aa454: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x1aa454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1aa458:
    // 0x1aa458: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1aa458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1aa45c:
    // 0x1aa45c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1aa45cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1aa460:
    // 0x1aa460: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1aa460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1aa464:
    // 0x1aa464: 0xc7b50128  lwc1        $f21, 0x128($sp)
    ctx->pc = 0x1aa464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1aa468:
    // 0x1aa468: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1aa468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aa46c:
    // 0x1aa46c: 0x3e00008  jr          $ra
label_1aa470:
    if (ctx->pc == 0x1AA470u) {
        ctx->pc = 0x1AA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA46Cu;
        // 0x1aa470: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA474u;
        goto label_1aa474;
    }
    ctx->pc = 0x1AA46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA46Cu;
        // 0x1aa470: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA474u;
label_1aa474:
    // 0x1aa474: 0x0  nop
    ctx->pc = 0x1aa474u;
    // NOP
    ctx->pc = 0x1aa478u;
}

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

// Function: func_0028D500
// Address: 0x28d500 - 0x28d7e8
void func_0028D500_0x28d500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028D500_0x28d500");
#endif

    switch (ctx->pc) {
        case 0x28d7dcu: goto label_28d7dc;
        default: break;
    }

    ctx->pc = 0x28d500u;

    // 0x28d500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d504: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x28d504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d508: 0x10a000b4  beqz        $a1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x28D508u;
    {
        const bool branch_taken_0x28d508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D508u;
        // 0x28d50c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d508) {
            ctx->pc = 0x28D7DCu;
            goto label_28d7dc;
        }
    }
    ctx->pc = 0x28D510u;
    // 0x28d510: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x28d510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d514: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x28d514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d518: 0x2cc2000b  sltiu       $v0, $a2, 0xB
    ctx->pc = 0x28d518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x28d51c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28D51Cu;
    {
        const bool branch_taken_0x28d51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D51Cu;
        // 0x28d520: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d51c) {
            ctx->pc = 0x28D53Cu;
            goto label_28d53c;
        }
    }
    ctx->pc = 0x28D524u;
    // 0x28d524: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x28d524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28d528: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x28d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
    // 0x28d52c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d530: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28d530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d534: 0x800008  jr          $a0
    ctx->pc = 0x28D534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D53Cu: goto label_28d53c;
            case 0x28D580u: goto label_28d580;
            case 0x28D5B8u: goto label_28d5b8;
            case 0x28D5ECu: goto label_28d5ec;
            case 0x28D654u: goto label_28d654;
            case 0x28D670u: goto label_28d670;
            case 0x28D68Cu: goto label_28d68c;
            case 0x28D6A8u: goto label_28d6a8;
            case 0x28D6C4u: goto label_28d6c4;
            case 0x28D720u: goto label_28d720;
            case 0x28D77Cu: goto label_28d77c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D534u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D53Cu;
label_28d53c:
    // 0x28d53c: 0x3c01beb8  lui         $at, 0xBEB8
    ctx->pc = 0x28d53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48824 << 16));
    // 0x28d540: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x28d540u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x28d544: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28d544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d548: 0x3c013edc  lui         $at, 0x3EDC
    ctx->pc = 0x28d548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16092 << 16));
    // 0x28d54c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x28d54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x28d550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d554: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x28d554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x28d558: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x28d558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x28d55c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d560: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x28d560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x28d564: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28d564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d568: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d56c: 0x3c013f32  lui         $at, 0x3F32
    ctx->pc = 0x28d56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16178 << 16));
    // 0x28d570: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x28d570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x28d574: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d578: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x28D578u;
    {
        const bool branch_taken_0x28d578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D578u;
        // 0x28d57c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d578) {
            ctx->pc = 0x28D704u;
            goto label_28d704;
        }
    }
    ctx->pc = 0x28D580u;
label_28d580:
    // 0x28d580: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x28d580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x28d584: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28d584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28d588: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d58c: 0x3c01bd34  lui         $at, 0xBD34
    ctx->pc = 0x28d58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48436 << 16));
    // 0x28d590: 0x34213958  ori         $at, $at, 0x3958
    ctx->pc = 0x28d590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14680);
    // 0x28d594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d598: 0x3c01bd5d  lui         $at, 0xBD5D
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48477 << 16));
    // 0x28d59c: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x28d59cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x28d5a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d5a4: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x28d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x28d5a8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x28d5a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x28d5ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d5acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d5b0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x28D5B0u;
    {
        const bool branch_taken_0x28d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5B0u;
        // 0x28d5b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5b0) {
            ctx->pc = 0x28D7B0u;
            goto label_28d7b0;
        }
    }
    ctx->pc = 0x28D5B8u;
label_28d5b8:
    // 0x28d5b8: 0x3c013dc7  lui         $at, 0x3DC7
    ctx->pc = 0x28d5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15815 << 16));
    // 0x28d5bc: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x28d5bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x28d5c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d5c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d5c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28d5c8: 0x3c013c9b  lui         $at, 0x3C9B
    ctx->pc = 0x28d5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15515 << 16));
    // 0x28d5cc: 0x3421a5e3  ori         $at, $at, 0xA5E3
    ctx->pc = 0x28d5ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42467);
    // 0x28d5d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d5d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28d5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d5d8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28d5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d5dc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d5e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d5e4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x28D5E4u;
    {
        const bool branch_taken_0x28d5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D5E4u;
        // 0x28d5e8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d5e4) {
            ctx->pc = 0x28D7C4u;
            goto label_28d7c4;
        }
    }
    ctx->pc = 0x28D5ECu;
label_28d5ec:
    // 0x28d5ec: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x28d5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x28d5f0: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x28d5f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x28d5f4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x28d5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28d5f8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d5fc: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x28d5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x28d600: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28d600u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28d604: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d604u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d608: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x28d608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x28d60c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28d60cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x28d610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d614: 0x3c01c038  lui         $at, 0xC038
    ctx->pc = 0x28d614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49208 << 16));
    // 0x28d618: 0x34214e88  ori         $at, $at, 0x4E88
    ctx->pc = 0x28d618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20104);
    // 0x28d61c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d61cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d620: 0x3c01bf71  lui         $at, 0xBF71
    ctx->pc = 0x28d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49009 << 16));
    // 0x28d624: 0x34214639  ori         $at, $at, 0x4639
    ctx->pc = 0x28d624u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17977);
    // 0x28d628: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d62c: 0x3c014015  lui         $at, 0x4015
    ctx->pc = 0x28d62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16405 << 16));
    // 0x28d630: 0x3421adef  ori         $at, $at, 0xADEF
    ctx->pc = 0x28d630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44527);
    // 0x28d634: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28d634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d638: 0xe7a50000  swc1        $f5, 0x0($sp)
    ctx->pc = 0x28d638u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d63c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d63cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d640: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28d640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d644: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x28d644u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28d648: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x28d648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d64c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x28D64Cu;
    {
        const bool branch_taken_0x28d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D64Cu;
        // 0x28d650: 0xe7a40018  swc1        $f4, 0x18($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d64c) {
            ctx->pc = 0x28D7C8u;
            goto label_28d7c8;
        }
    }
    ctx->pc = 0x28D654u;
label_28d654:
    // 0x28d654: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d658: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28d658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28d65c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28d660: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d664: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d668: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x28D668u;
    {
        const bool branch_taken_0x28d668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D668u;
        // 0x28d66c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d668) {
            ctx->pc = 0x28D7C4u;
            goto label_28d7c4;
        }
    }
    ctx->pc = 0x28D670u;
label_28d670:
    // 0x28d670: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d674: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28d674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d678: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28d678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28d67c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d67cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d680: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d684: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x28D684u;
    {
        const bool branch_taken_0x28d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D684u;
        // 0x28d688: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d684) {
            ctx->pc = 0x28D7C4u;
            goto label_28d7c4;
        }
    }
    ctx->pc = 0x28D68Cu;
label_28d68c:
    // 0x28d68c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d690: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x28d690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x28d694: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28d694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28d698: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d69c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d6a0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x28D6A0u;
    {
        const bool branch_taken_0x28d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6A0u;
        // 0x28d6a4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6a0) {
            ctx->pc = 0x28D7C4u;
            goto label_28d7c4;
        }
    }
    ctx->pc = 0x28D6A8u;
label_28d6a8:
    // 0x28d6a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28d6ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28d6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d6b0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28d6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28d6b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x28d6b8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x28d6bc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28D6BCu;
    {
        const bool branch_taken_0x28d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D6BCu;
        // 0x28d6c0: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d6bc) {
            ctx->pc = 0x28D7C4u;
            goto label_28d7c4;
        }
    }
    ctx->pc = 0x28D6C4u;
label_28d6c4:
    // 0x28d6c4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x28d6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x28d6c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x28d6c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28d6cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28d6ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d6d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28d6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28d6d4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x28d6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x28d6d8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x28d6d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x28d6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d6e0: 0x3c01be2e  lui         $at, 0xBE2E
    ctx->pc = 0x28d6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48686 << 16));
    // 0x28d6e4: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x28d6e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x28d6e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d6ec: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x28d6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x28d6f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28d6f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d6f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d6f8: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x28d6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
    // 0x28d6fc: 0x342161aa  ori         $at, $at, 0x61AA
    ctx->pc = 0x28d6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25002);
    // 0x28d700: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_28d704:
    // 0x28d704: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x28d704u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d708: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d70c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28d70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d710: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x28d710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28d714: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x28d714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28d718: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x28D718u;
    {
        const bool branch_taken_0x28d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D718u;
        // 0x28d71c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d718) {
            ctx->pc = 0x28D7C8u;
            goto label_28d7c8;
        }
    }
    ctx->pc = 0x28D720u;
label_28d720:
    // 0x28d720: 0x3c013ede  lui         $at, 0x3EDE
    ctx->pc = 0x28d720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16094 << 16));
    // 0x28d724: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x28d724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x28d728: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x28d728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x28d72c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28d72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d730: 0x3c01bd17  lui         $at, 0xBD17
    ctx->pc = 0x28d730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48407 << 16));
    // 0x28d734: 0x34218d50  ori         $at, $at, 0x8D50
    ctx->pc = 0x28d734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36176);
    // 0x28d738: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d738u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d73c: 0x3c013e98  lui         $at, 0x3E98
    ctx->pc = 0x28d73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16024 << 16));
    // 0x28d740: 0x34211062  ori         $at, $at, 0x1062
    ctx->pc = 0x28d740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4194);
    // 0x28d744: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d748: 0x3c01bf49  lui         $at, 0xBF49
    ctx->pc = 0x28d748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48969 << 16));
    // 0x28d74c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28d74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d750: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28d754: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x28d754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x28d758: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28d758u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d75c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d760: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x28d760u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d764: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d768: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28d768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d76c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28d76cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d770: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x28d770u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x28d774: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28D774u;
    {
        const bool branch_taken_0x28d774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D774u;
        // 0x28d778: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d774) {
            ctx->pc = 0x28D7C8u;
            goto label_28d7c8;
        }
    }
    ctx->pc = 0x28D77Cu;
label_28d77c:
    // 0x28d77c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28d77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28d780: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28d780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28d784: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x28d784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28d788: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28d788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28d78c: 0x3c01bcdd  lui         $at, 0xBCDD
    ctx->pc = 0x28d78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48349 << 16));
    // 0x28d790: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x28d790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x28d794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d798: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x28d798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x28d79c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x28d79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x28d7a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28d7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d7a4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x28d7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x28d7a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x28d7a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x28d7ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x28d7acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28d7b0:
    // 0x28d7b0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x28d7b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d7b4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d7b8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x28d7b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d7bc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x28d7bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x28d7c0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28d7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28d7c4:
    // 0x28d7c4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x28d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_28d7c8:
    // 0x28d7c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28d7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7cc: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x28d7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28d7d0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28d7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7d4: 0xc073c58  jal         func_1CF160
    ctx->pc = 0x28D7D4u;
    SET_GPR_U32(ctx, 31, 0x28D7DCu);
    ctx->pc = 0x28D7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D7D4u;
    // 0x28d7d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF160u, 0x28D7D4u, 0x28D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D7DCu;
label_28d7dc:
    // 0x28d7dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x28D7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7E0u;
        // 0x28d7e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D7E8u;
}

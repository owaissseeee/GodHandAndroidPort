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

// Function: func_001B93E8
// Address: 0x1b93e8 - 0x1bb508
void func_001B93E8_0x1b93e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B93E8_0x1b93e8");
#endif

    switch (ctx->pc) {
        case 0x1b9414u: goto label_1b9414;
        case 0x1b94a8u: goto label_1b94a8;
        case 0x1b94bcu: goto label_1b94bc;
        case 0x1b94e8u: goto label_1b94e8;
        case 0x1b950cu: goto label_1b950c;
        case 0x1b95f4u: goto label_1b95f4;
        case 0x1b961cu: goto label_1b961c;
        case 0x1b965cu: goto label_1b965c;
        case 0x1b9684u: goto label_1b9684;
        case 0x1b96acu: goto label_1b96ac;
        case 0x1b97b0u: goto label_1b97b0;
        case 0x1b97bcu: goto label_1b97bc;
        case 0x1b9800u: goto label_1b9800;
        case 0x1b981cu: goto label_1b981c;
        case 0x1b9858u: goto label_1b9858;
        case 0x1b9878u: goto label_1b9878;
        case 0x1b9940u: goto label_1b9940;
        case 0x1b994cu: goto label_1b994c;
        case 0x1b9990u: goto label_1b9990;
        case 0x1b99acu: goto label_1b99ac;
        case 0x1b99e0u: goto label_1b99e0;
        case 0x1b9a00u: goto label_1b9a00;
        case 0x1b9ad0u: goto label_1b9ad0;
        case 0x1b9adcu: goto label_1b9adc;
        case 0x1b9b1cu: goto label_1b9b1c;
        case 0x1b9b28u: goto label_1b9b28;
        case 0x1b9b4cu: goto label_1b9b4c;
        case 0x1b9b68u: goto label_1b9b68;
        case 0x1b9b9cu: goto label_1b9b9c;
        case 0x1b9bbcu: goto label_1b9bbc;
        case 0x1b9c40u: goto label_1b9c40;
        case 0x1b9c4cu: goto label_1b9c4c;
        case 0x1b9d44u: goto label_1b9d44;
        case 0x1b9dfcu: goto label_1b9dfc;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9ed8u: goto label_1b9ed8;
        case 0x1b9f40u: goto label_1b9f40;
        case 0x1b9fe0u: goto label_1b9fe0;
        case 0x1ba0d4u: goto label_1ba0d4;
        case 0x1ba164u: goto label_1ba164;
        case 0x1ba170u: goto label_1ba170;
        case 0x1ba194u: goto label_1ba194;
        case 0x1ba1b0u: goto label_1ba1b0;
        case 0x1ba1c0u: goto label_1ba1c0;
        case 0x1ba1e0u: goto label_1ba1e0;
        case 0x1ba268u: goto label_1ba268;
        case 0x1ba2bcu: goto label_1ba2bc;
        case 0x1ba478u: goto label_1ba478;
        case 0x1ba4a0u: goto label_1ba4a0;
        case 0x1ba4f8u: goto label_1ba4f8;
        case 0x1ba52cu: goto label_1ba52c;
        case 0x1ba544u: goto label_1ba544;
        case 0x1ba564u: goto label_1ba564;
        case 0x1ba590u: goto label_1ba590;
        case 0x1ba5a8u: goto label_1ba5a8;
        case 0x1ba5c8u: goto label_1ba5c8;
        case 0x1ba60cu: goto label_1ba60c;
        case 0x1ba624u: goto label_1ba624;
        case 0x1ba644u: goto label_1ba644;
        case 0x1ba670u: goto label_1ba670;
        case 0x1ba688u: goto label_1ba688;
        case 0x1ba6a8u: goto label_1ba6a8;
        case 0x1ba6e0u: goto label_1ba6e0;
        case 0x1ba6f8u: goto label_1ba6f8;
        case 0x1ba718u: goto label_1ba718;
        case 0x1ba730u: goto label_1ba730;
        case 0x1ba750u: goto label_1ba750;
        case 0x1ba768u: goto label_1ba768;
        case 0x1ba784u: goto label_1ba784;
        case 0x1ba79cu: goto label_1ba79c;
        case 0x1ba7b8u: goto label_1ba7b8;
        case 0x1ba7ccu: goto label_1ba7cc;
        case 0x1ba7ecu: goto label_1ba7ec;
        case 0x1ba82cu: goto label_1ba82c;
        case 0x1ba844u: goto label_1ba844;
        case 0x1ba864u: goto label_1ba864;
        case 0x1ba87cu: goto label_1ba87c;
        case 0x1ba8acu: goto label_1ba8ac;
        case 0x1ba8e4u: goto label_1ba8e4;
        case 0x1ba8fcu: goto label_1ba8fc;
        case 0x1ba91cu: goto label_1ba91c;
        case 0x1ba934u: goto label_1ba934;
        case 0x1ba954u: goto label_1ba954;
        case 0x1ba96cu: goto label_1ba96c;
        case 0x1ba9bcu: goto label_1ba9bc;
        case 0x1ba9d4u: goto label_1ba9d4;
        case 0x1baa24u: goto label_1baa24;
        case 0x1baa3cu: goto label_1baa3c;
        case 0x1baa94u: goto label_1baa94;
        case 0x1baaacu: goto label_1baaac;
        case 0x1baaccu: goto label_1baacc;
        case 0x1baae4u: goto label_1baae4;
        case 0x1bab38u: goto label_1bab38;
        case 0x1bab50u: goto label_1bab50;
        case 0x1baba4u: goto label_1baba4;
        case 0x1babbcu: goto label_1babbc;
        case 0x1babe0u: goto label_1babe0;
        case 0x1babf8u: goto label_1babf8;
        case 0x1bac1cu: goto label_1bac1c;
        case 0x1bac34u: goto label_1bac34;
        case 0x1bac9cu: goto label_1bac9c;
        case 0x1bacb4u: goto label_1bacb4;
        case 0x1bacd8u: goto label_1bacd8;
        case 0x1bad04u: goto label_1bad04;
        case 0x1bad48u: goto label_1bad48;
        case 0x1bad6cu: goto label_1bad6c;
        case 0x1bad98u: goto label_1bad98;
        case 0x1badc4u: goto label_1badc4;
        case 0x1bae08u: goto label_1bae08;
        case 0x1bae4cu: goto label_1bae4c;
        case 0x1bae5cu: goto label_1bae5c;
        case 0x1bae9cu: goto label_1bae9c;
        case 0x1baee0u: goto label_1baee0;
        case 0x1baf20u: goto label_1baf20;
        case 0x1baf30u: goto label_1baf30;
        case 0x1baf78u: goto label_1baf78;
        case 0x1bafbcu: goto label_1bafbc;
        case 0x1baffcu: goto label_1baffc;
        case 0x1bb00cu: goto label_1bb00c;
        case 0x1bb050u: goto label_1bb050;
        case 0x1bb098u: goto label_1bb098;
        case 0x1bb0dcu: goto label_1bb0dc;
        case 0x1bb0f4u: goto label_1bb0f4;
        case 0x1bb14cu: goto label_1bb14c;
        case 0x1bb164u: goto label_1bb164;
        case 0x1bb1bcu: goto label_1bb1bc;
        case 0x1bb1d4u: goto label_1bb1d4;
        case 0x1bb1f4u: goto label_1bb1f4;
        case 0x1bb220u: goto label_1bb220;
        case 0x1bb234u: goto label_1bb234;
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb284u: goto label_1bb284;
        case 0x1bb2b4u: goto label_1bb2b4;
        case 0x1bb2ccu: goto label_1bb2cc;
        case 0x1bb2fcu: goto label_1bb2fc;
        case 0x1bb334u: goto label_1bb334;
        case 0x1bb34cu: goto label_1bb34c;
        case 0x1bb398u: goto label_1bb398;
        case 0x1bb3b0u: goto label_1bb3b0;
        case 0x1bb3f4u: goto label_1bb3f4;
        case 0x1bb40cu: goto label_1bb40c;
        case 0x1bb458u: goto label_1bb458;
        case 0x1bb470u: goto label_1bb470;
        case 0x1bb4b8u: goto label_1bb4b8;
        case 0x1bb4c4u: goto label_1bb4c4;
        default: break;
    }

    ctx->pc = 0x1b93e8u;

    // 0x1b93e8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1b93e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1b93ec: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1b93ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x1b93f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b93f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93f4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1b93f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1b93f8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b93f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b93fc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1b93fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1b9400: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1b9400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x1b9404: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1b9404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1b9408: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b940c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B940Cu;
    SET_GPR_U32(ctx, 31, 0x1B9414u);
    ctx->pc = 0x1B9410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B940Cu;
    // 0x1b9410: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B940Cu, 0x1B9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9414u;
label_1b9414:
    // 0x1b9414: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b9414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9418: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1b9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1b941c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1b941cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9420: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x1B9420u;
    {
        const bool branch_taken_0x1b9420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9420u;
        // 0x1b9424: 0xa2220531  sb          $v0, 0x531($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9420) {
            ctx->pc = 0x1B96CCu;
            goto label_1b96cc;
        }
    }
    ctx->pc = 0x1B9428u;
    // 0x1b9428: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1b9428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1b942c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x1B942Cu;
    {
        const bool branch_taken_0x1b942c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B942Cu;
        // 0x1b9430: 0x8e230610  lw          $v1, 0x610($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b942c) {
            ctx->pc = 0x1B96D0u;
            goto label_1b96d0;
        }
    }
    ctx->pc = 0x1B9434u;
    // 0x1b9434: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x1b9434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1b9438: 0x10400383  beqz        $v0, . + 4 + (0x383 << 2)
    ctx->pc = 0x1B9438u;
    {
        const bool branch_taken_0x1b9438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9438u;
        // 0x1b943c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9438) {
            ctx->pc = 0x1BA248u;
            goto label_1ba248;
        }
    }
    ctx->pc = 0x1B9440u;
    // 0x1b9440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b9440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b9444: 0x24428cf0  addiu       $v0, $v0, -0x7310
    ctx->pc = 0x1b9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937840));
    // 0x1b9448: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b944c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b944cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9450: 0x800008  jr          $a0
    ctx->pc = 0x1B9450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9458u: goto label_1b9458;
            case 0x1B9470u: goto label_1b9470;
            case 0x1B9488u: goto label_1b9488;
            case 0x1B9514u: goto label_1b9514;
            case 0x1B952Cu: goto label_1b952c;
            case 0x1B9544u: goto label_1b9544;
            case 0x1B955Cu: goto label_1b955c;
            case 0x1B9574u: goto label_1b9574;
            case 0x1B958Cu: goto label_1b958c;
            case 0x1B95A4u: goto label_1b95a4;
            case 0x1B95BCu: goto label_1b95bc;
            case 0x1B95D4u: goto label_1b95d4;
            case 0x1B9624u: goto label_1b9624;
            case 0x1B963Cu: goto label_1b963c;
            case 0x1B968Cu: goto label_1b968c;
            case 0x1B96B4u: goto label_1b96b4;
            case 0x1B96CCu: goto label_1b96cc;
            case 0x1BA248u: goto label_1ba248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9450u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B9458u;
label_1b9458:
    // 0x1b9458: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b945c: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x1b945cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1b9460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9468: 0x1000037c  b           . + 4 + (0x37C << 2)
    ctx->pc = 0x1B9468u;
    {
        const bool branch_taken_0x1b9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9468u;
        // 0x1b946c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9468) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B9470u;
label_1b9470:
    // 0x1b9470: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9474: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1b9474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1b9478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b947c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b947cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9480: 0x10000376  b           . + 4 + (0x376 << 2)
    ctx->pc = 0x1B9480u;
    {
        const bool branch_taken_0x1b9480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9480u;
        // 0x1b9484: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9480) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B9488u;
label_1b9488:
    // 0x1b9488: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b948c: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1b948cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1b9490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9498: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b949c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b949cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94a0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B94A0u;
    SET_GPR_U32(ctx, 31, 0x1B94A8u);
    ctx->pc = 0x1B94A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94A0u;
    // 0x1b94a4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B94A0u, 0x1B94A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94A8u;
label_1b94a8:
    // 0x1b94a8: 0x8e24062c  lw          $a0, 0x62C($s1)
    ctx->pc = 0x1b94a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1580)));
    // 0x1b94ac: 0x1080080c  beqz        $a0, . + 4 + (0x80C << 2)
    ctx->pc = 0x1B94ACu;
    {
        const bool branch_taken_0x1b94ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94ACu;
        // 0x1b94b0: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94ac) {
            ctx->pc = 0x1BB4E0u;
            goto label_1bb4e0;
        }
    }
    ctx->pc = 0x1B94B4u;
    // 0x1b94b4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x1B94B4u;
    SET_GPR_U32(ctx, 31, 0x1B94BCu);
    ctx->pc = 0x1B94B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94B4u;
    // 0x1b94b8: 0x2610ee00  addiu       $s0, $s0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x1B94B4u, 0x1B94BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94BCu;
label_1b94bc:
    // 0x1b94bc: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x1b94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
    // 0x1b94c0: 0x8e28062c  lw          $t0, 0x62C($s1)
    ctx->pc = 0x1b94c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1580)));
    // 0x1b94c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b94c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b94c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94cc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1b94ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1b94d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b94d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b94d4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b94d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b94d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94dc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b94dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94e0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B94E0u;
    SET_GPR_U32(ctx, 31, 0x1B94E8u);
    ctx->pc = 0x1B94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B94E0u;
    // 0x1b94e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B94E0u, 0x1B94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B94E8u;
label_1b94e8:
    // 0x1b94e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b94e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b94ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94f0: 0x24060133  addiu       $a2, $zero, 0x133
    ctx->pc = 0x1b94f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 307));
    // 0x1b94f4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b94f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b94f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94fc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b94fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9500: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b9500u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9504: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B9504u;
    SET_GPR_U32(ctx, 31, 0x1B950Cu);
    ctx->pc = 0x1B9508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9504u;
    // 0x1b9508: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B9504u, 0x1B950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B950Cu;
label_1b950c:
    // 0x1b950c: 0x100007f5  b           . + 4 + (0x7F5 << 2)
    ctx->pc = 0x1B950Cu;
    {
        const bool branch_taken_0x1b950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B950Cu;
        // 0x1b9510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b950c) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1B9514u;
label_1b9514:
    // 0x1b9514: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9514u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9518: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1b9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1b951c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b951cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9520: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9524: 0x1000034d  b           . + 4 + (0x34D << 2)
    ctx->pc = 0x1B9524u;
    {
        const bool branch_taken_0x1b9524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9524u;
        // 0x1b9528: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9524) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B952Cu;
label_1b952c:
    // 0x1b952c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9530: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1b9534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b953c: 0x10000347  b           . + 4 + (0x347 << 2)
    ctx->pc = 0x1B953Cu;
    {
        const bool branch_taken_0x1b953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B953Cu;
        // 0x1b9540: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b953c) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B9544u;
label_1b9544:
    // 0x1b9544: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9544u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9548: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1b9548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1b954c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9554: 0x10000341  b           . + 4 + (0x341 << 2)
    ctx->pc = 0x1B9554u;
    {
        const bool branch_taken_0x1b9554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9554u;
        // 0x1b9558: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9554) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B955Cu;
label_1b955c:
    // 0x1b955c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b955cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9560: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1b9560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1b9564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9568: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b956c: 0x1000033b  b           . + 4 + (0x33B << 2)
    ctx->pc = 0x1B956Cu;
    {
        const bool branch_taken_0x1b956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B956Cu;
        // 0x1b9570: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b956c) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B9574u;
label_1b9574:
    // 0x1b9574: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9578: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1b9578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1b957c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9580: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9584: 0x10000335  b           . + 4 + (0x335 << 2)
    ctx->pc = 0x1B9584u;
    {
        const bool branch_taken_0x1b9584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9584u;
        // 0x1b9588: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9584) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B958Cu;
label_1b958c:
    // 0x1b958c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b958cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9590: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1b9594: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9598: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b959c: 0x1000032f  b           . + 4 + (0x32F << 2)
    ctx->pc = 0x1B959Cu;
    {
        const bool branch_taken_0x1b959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B959Cu;
        // 0x1b95a0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b959c) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B95A4u;
label_1b95a4:
    // 0x1b95a4: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b95a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b95a8: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1b95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1b95ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b95acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b95b0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b95b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b95b4: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x1B95B4u;
    {
        const bool branch_taken_0x1b95b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95B4u;
        // 0x1b95b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95b4) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B95BCu;
label_1b95bc:
    // 0x1b95bc: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b95bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b95c0: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1b95c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1b95c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b95c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b95c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b95c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b95cc: 0x10000323  b           . + 4 + (0x323 << 2)
    ctx->pc = 0x1B95CCu;
    {
        const bool branch_taken_0x1b95cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95CCu;
        // 0x1b95d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95cc) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B95D4u;
label_1b95d4:
    // 0x1b95d4: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b95d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b95d8: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x1b95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1b95dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b95dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b95e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b95e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b95e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1b95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b95e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b95e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95ec: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B95ECu;
    SET_GPR_U32(ctx, 31, 0x1B95F4u);
    ctx->pc = 0x1B95F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B95ECu;
    // 0x1b95f0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B95ECu, 0x1B95F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B95F4u;
label_1b95f4:
    // 0x1b95f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b95f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b95f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b95f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95fc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b95fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b9600: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b9600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b9604: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b9604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9608: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b9608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b960c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b960cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9610: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b9610u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9614: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B9614u;
    SET_GPR_U32(ctx, 31, 0x1B961Cu);
    ctx->pc = 0x1B9618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9614u;
    // 0x1b9618: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B9614u, 0x1B961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B961Cu;
label_1b961c:
    // 0x1b961c: 0x10000313  b           . + 4 + (0x313 << 2)
    ctx->pc = 0x1B961Cu;
    {
        const bool branch_taken_0x1b961c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B961Cu;
        // 0x1b9620: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b961c) {
            ctx->pc = 0x1BA26Cu;
            goto label_1ba26c;
        }
    }
    ctx->pc = 0x1B9624u;
label_1b9624:
    // 0x1b9624: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b9624u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9628: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1b9628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1b962c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b962cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9630: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9634: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B9634u;
    {
        const bool branch_taken_0x1b9634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9634u;
        // 0x1b9638: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9634) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B963Cu;
label_1b963c:
    // 0x1b963c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b963cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9640: 0x240400c2  addiu       $a0, $zero, 0xC2
    ctx->pc = 0x1b9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x1b9644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9648: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b964c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b9650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9654: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B9654u;
    SET_GPR_U32(ctx, 31, 0x1B965Cu);
    ctx->pc = 0x1B9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9654u;
    // 0x1b9658: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B9654u, 0x1B965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B965Cu;
label_1b965c:
    // 0x1b965c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b965cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b9660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9664: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b9664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b9668: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b9668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b966c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b966cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9670: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b9670u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b9674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9678: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b9678u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b967c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B967Cu;
    SET_GPR_U32(ctx, 31, 0x1B9684u);
    ctx->pc = 0x1B9680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B967Cu;
    // 0x1b9680: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B967Cu, 0x1B9684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9684u;
label_1b9684:
    // 0x1b9684: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1B9684u;
    {
        const bool branch_taken_0x1b9684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9684u;
        // 0x1b9688: 0x8e230610  lw          $v1, 0x610($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9684) {
            ctx->pc = 0x1B96D0u;
            goto label_1b96d0;
        }
    }
    ctx->pc = 0x1B968Cu;
label_1b968c:
    // 0x1b968c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b968cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9690: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x1b9690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1b9694: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9698: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b969c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b969cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b96a0:
    // 0x1b96a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b96a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96a4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B96A4u;
    SET_GPR_U32(ctx, 31, 0x1B96ACu);
    ctx->pc = 0x1B96A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B96A4u;
    // 0x1b96a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B96A4u, 0x1B96ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B96ACu;
label_1b96ac:
    // 0x1b96ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B96ACu;
    {
        const bool branch_taken_0x1b96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96ACu;
        // 0x1b96b0: 0x8e230610  lw          $v1, 0x610($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96ac) {
            ctx->pc = 0x1B96D0u;
            goto label_1b96d0;
        }
    }
    ctx->pc = 0x1B96B4u;
label_1b96b4:
    // 0x1b96b4: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1b96b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b96b8: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1b96b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1b96bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b96c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b96c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b96c4: 0x100002e5  b           . + 4 + (0x2E5 << 2)
    ctx->pc = 0x1B96C4u;
    {
        const bool branch_taken_0x1b96c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96C4u;
        // 0x1b96c8: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96c4) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B96CCu;
label_1b96cc:
    // 0x1b96cc: 0x8e230610  lw          $v1, 0x610($s1)
    ctx->pc = 0x1b96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
label_1b96d0:
    // 0x1b96d0: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x1b96d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1b96d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B96D4u;
    {
        const bool branch_taken_0x1b96d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96D4u;
        // 0x1b96d8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96d4) {
            ctx->pc = 0x1B96F8u;
            goto label_1b96f8;
        }
    }
    ctx->pc = 0x1B96DCu;
    // 0x1b96dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b96e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b96e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b96e4: 0x24428db0  addiu       $v0, $v0, -0x7250
    ctx->pc = 0x1b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
    // 0x1b96e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b96ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b96ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b96f0: 0x800008  jr          $a0
    ctx->pc = 0x1B96F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B96F8u: goto label_1b96f8;
            case 0x1B9704u: goto label_1b9704;
            case 0x1B9750u: goto label_1b9750;
            case 0x1B98E0u: goto label_1b98e0;
            case 0x1B9A68u: goto label_1b9a68;
            case 0x1B9AF0u: goto label_1b9af0;
            case 0x1B9C88u: goto label_1b9c88;
            case 0x1B9CA8u: goto label_1b9ca8;
            case 0x1B9D60u: goto label_1b9d60;
            case 0x1B9E18u: goto label_1b9e18;
            case 0x1B9EF4u: goto label_1b9ef4;
            case 0x1B9FF0u: goto label_1b9ff0;
            case 0x1B9FFCu: goto label_1b9ffc;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA100u: goto label_1ba100;
            case 0x1BA274u: goto label_1ba274;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B96F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1B96F8u;
label_1b96f8:
    // 0x1b96f8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b96fc: 0x10000246  b           . + 4 + (0x246 << 2)
    ctx->pc = 0x1B96FCu;
    {
        const bool branch_taken_0x1b96fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96FCu;
        // 0x1b9700: 0x26220580  addiu       $v0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96fc) {
            ctx->pc = 0x1BA018u;
            goto label_1ba018;
        }
    }
    ctx->pc = 0x1B9704u;
label_1b9704:
    // 0x1b9704: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b9704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9708: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b970c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b970cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9710: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9714: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9714u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9718: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b971c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b971cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9720: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9724: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9728: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b9728u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b972c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b972cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9730: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b9730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9734: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b9734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9738: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9738u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b973c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b973cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9740: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9744: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9744u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9748: 0x100002cb  b           . + 4 + (0x2CB << 2)
    ctx->pc = 0x1B9748u;
    {
        const bool branch_taken_0x1b9748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9748u;
        // 0x1b974c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9748) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9750u;
label_1b9750:
    // 0x1b9750: 0xc6220614  lwc1        $f2, 0x614($s1)
    ctx->pc = 0x1b9750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9754: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9758: 0x0  nop
    ctx->pc = 0x1b9758u;
    // NOP
    // 0x1b975c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b975cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9760: 0x0  nop
    ctx->pc = 0x1b9760u;
    // NOP
    // 0x1b9764: 0x4500075f  bc1f        . + 4 + (0x75F << 2)
    ctx->pc = 0x1B9764u;
    {
        const bool branch_taken_0x1b9764 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9764u;
        // 0x1b9768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9764) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1B976Cu;
    // 0x1b976c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1b976cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1b9770: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b9770u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b9774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9778: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x1b9778u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x1b977c: 0xc6210588  lwc1        $f1, 0x588($s1)
    ctx->pc = 0x1b977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9780: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b9780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b9784: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b9784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9788: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b9788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b978c: 0xe6220614  swc1        $f2, 0x614($s1)
    ctx->pc = 0x1b978cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    // 0x1b9790: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b9790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9794: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1b9794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9798: 0x0  nop
    ctx->pc = 0x1b9798u;
    // NOP
    // 0x1b979c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B979Cu;
    {
        const bool branch_taken_0x1b979c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B979Cu;
        // 0x1b97a0: 0xe6210588  swc1        $f1, 0x588($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b979c) {
            ctx->pc = 0x1B97A8u;
            goto label_1b97a8;
        }
    }
    ctx->pc = 0x1B97A4u;
    // 0x1b97a4: 0xe6230588  swc1        $f3, 0x588($s1)
    ctx->pc = 0x1b97a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
label_1b97a8:
    // 0x1b97a8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1B97A8u;
    SET_GPR_U32(ctx, 31, 0x1B97B0u);
    ctx->pc = 0x1B97ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B97A8u;
    // 0x1b97ac: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B97A8u, 0x1B97B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97B0u;
label_1b97b0:
    // 0x1b97b0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b97b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b97b4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1B97B4u;
    SET_GPR_U32(ctx, 31, 0x1B97BCu);
    ctx->pc = 0x1B97B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B97B4u;
    // 0x1b97b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1B97B4u, 0x1B97BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B97BCu;
label_1b97bc:
    // 0x1b97bc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1b97c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b97c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b97c4: 0x0  nop
    ctx->pc = 0x1b97c4u;
    // NOP
    // 0x1b97c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b97c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b97cc: 0x0  nop
    ctx->pc = 0x1b97ccu;
    // NOP
    // 0x1b97d0: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1B97D0u;
    {
        const bool branch_taken_0x1b97d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b97d0) {
            ctx->pc = 0x1B97D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B97D0u;
            // 0x1b97d4: 0xc6200614  lwc1        $f0, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9824u;
            goto label_1b9824;
        }
    }
    ctx->pc = 0x1B97D8u;
    // 0x1b97d8: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1b97d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b97dc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b97dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b97e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b97e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b97e4: 0x0  nop
    ctx->pc = 0x1b97e4u;
    // NOP
    // 0x1b97e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b97e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b97ec: 0x0  nop
    ctx->pc = 0x1b97ecu;
    // NOP
    // 0x1b97f0: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1B97F0u;
    {
        const bool branch_taken_0x1b97f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b97f0) {
            ctx->pc = 0x1B97F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B97F0u;
            // 0x1b97f4: 0xc6200614  lwc1        $f0, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9824u;
            goto label_1b9824;
        }
    }
    ctx->pc = 0x1B97F8u;
    // 0x1b97f8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1B97F8u;
    SET_GPR_U32(ctx, 31, 0x1B9800u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B97F8u, 0x1B9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9800u;
label_1b9800:
    // 0x1b9800: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x1b9800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x1b9804: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b9804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b9808: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b980c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9810: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b9814: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x1B9814u;
    SET_GPR_U32(ctx, 31, 0x1B981Cu);
    ctx->pc = 0x1B9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9814u;
    // 0x1b9818: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x1B9814u, 0x1B981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B981Cu;
label_1b981c:
    // 0x1b981c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B981Cu;
    {
        const bool branch_taken_0x1b981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B981Cu;
        // 0x1b9820: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b981c) {
            ctx->pc = 0x1B9844u;
            goto label_1b9844;
        }
    }
    ctx->pc = 0x1B9824u;
label_1b9824:
    // 0x1b9824: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b9824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b9828: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b982c: 0x0  nop
    ctx->pc = 0x1b982cu;
    // NOP
    // 0x1b9830: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9834: 0x0  nop
    ctx->pc = 0x1b9834u;
    // NOP
    // 0x1b9838: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9838u;
    {
        const bool branch_taken_0x1b9838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9838) {
            ctx->pc = 0x1B983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9838u;
            // 0x1b983c: 0xe6210614  swc1        $f1, 0x614($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9840u;
            goto label_1b9840;
        }
    }
    ctx->pc = 0x1B9840u;
label_1b9840:
    // 0x1b9840: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b9840u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b9844:
    // 0x1b9844: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b9844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b9848: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x1b9848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b984c: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1b984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9850: 0xc051e62  jal         func_147988
    ctx->pc = 0x1B9850u;
    SET_GPR_U32(ctx, 31, 0x1B9858u);
    ctx->pc = 0x1B9854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9850u;
    // 0x1b9854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1B9850u, 0x1B9858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9858u;
label_1b9858:
    // 0x1b9858: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1b9858u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b985c: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9860: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9860u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9864: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b9868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b986c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b986cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9870: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1B9870u;
    SET_GPR_U32(ctx, 31, 0x1B9878u);
    ctx->pc = 0x1B9874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9870u;
    // 0x1b9874: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1B9870u, 0x1B9878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9878u;
label_1b9878:
    // 0x1b9878: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1b9878u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b987c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9880: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1b9880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9884: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9884u;
    {
        const bool branch_taken_0x1b9884 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B9888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9884u;
        // 0x1b9888: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9884) {
            ctx->pc = 0x1B98A0u;
            goto label_1b98a0;
        }
    }
    ctx->pc = 0x1B988Cu;
    // 0x1b988c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1b988cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9890: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b9890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b9894: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x1b9894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1b9898: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1b9898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b989c: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1b989cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1b98a0:
    // 0x1b98a0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1b98a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1b98a4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b98a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b98a8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b98a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b98ac: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b98acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b98b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b98b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b98b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b98b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b98b8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b98b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b98bc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b98bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b98c0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b98c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b98c4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b98c8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b98c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b98cc: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1b98ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b98d0: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b98d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b98d4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b98d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b98d8: 0x10000267  b           . + 4 + (0x267 << 2)
    ctx->pc = 0x1B98D8u;
    {
        const bool branch_taken_0x1b98d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98D8u;
        // 0x1b98dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98d8) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B98E0u;
label_1b98e0:
    // 0x1b98e0: 0xc6220614  lwc1        $f2, 0x614($s1)
    ctx->pc = 0x1b98e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b98e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b98e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b98e8: 0x0  nop
    ctx->pc = 0x1b98e8u;
    // NOP
    // 0x1b98ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b98ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b98f0: 0x0  nop
    ctx->pc = 0x1b98f0u;
    // NOP
    // 0x1b98f4: 0x450006fb  bc1f        . + 4 + (0x6FB << 2)
    ctx->pc = 0x1B98F4u;
    {
        const bool branch_taken_0x1b98f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98F4u;
        // 0x1b98f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98f4) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1B98FCu;
    // 0x1b98fc: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1b98fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1b9900: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b9900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b9904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9908: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x1b9908u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x1b990c: 0xc6210588  lwc1        $f1, 0x588($s1)
    ctx->pc = 0x1b990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9910: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b9910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b9914: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b9914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b9918: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b9918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b991c: 0xe6220614  swc1        $f2, 0x614($s1)
    ctx->pc = 0x1b991cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    // 0x1b9920: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b9920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9924: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1b9924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9928: 0x0  nop
    ctx->pc = 0x1b9928u;
    // NOP
    // 0x1b992c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B992Cu;
    {
        const bool branch_taken_0x1b992c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B992Cu;
        // 0x1b9930: 0xe6210588  swc1        $f1, 0x588($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b992c) {
            ctx->pc = 0x1B9938u;
            goto label_1b9938;
        }
    }
    ctx->pc = 0x1B9934u;
    // 0x1b9934: 0xe6230588  swc1        $f3, 0x588($s1)
    ctx->pc = 0x1b9934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
label_1b9938:
    // 0x1b9938: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1B9938u;
    SET_GPR_U32(ctx, 31, 0x1B9940u);
    ctx->pc = 0x1B993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9938u;
    // 0x1b993c: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B9938u, 0x1B9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9940u;
label_1b9940:
    // 0x1b9940: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b9940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b9944: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1B9944u;
    SET_GPR_U32(ctx, 31, 0x1B994Cu);
    ctx->pc = 0x1B9948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9944u;
    // 0x1b9948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1B9944u, 0x1B994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B994Cu;
label_1b994c:
    // 0x1b994c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1b994cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1b9950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9954: 0x0  nop
    ctx->pc = 0x1b9954u;
    // NOP
    // 0x1b9958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b995c: 0x0  nop
    ctx->pc = 0x1b995cu;
    // NOP
    // 0x1b9960: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x1B9960u;
    {
        const bool branch_taken_0x1b9960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9960) {
            ctx->pc = 0x1B9964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9960u;
            // 0x1b9964: 0xc6200614  lwc1        $f0, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B99B4u;
            goto label_1b99b4;
        }
    }
    ctx->pc = 0x1B9968u;
    // 0x1b9968: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1b9968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b996c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b9970: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9974: 0x0  nop
    ctx->pc = 0x1b9974u;
    // NOP
    // 0x1b9978: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b997c: 0x0  nop
    ctx->pc = 0x1b997cu;
    // NOP
    // 0x1b9980: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1B9980u;
    {
        const bool branch_taken_0x1b9980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9980) {
            ctx->pc = 0x1B9984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9980u;
            // 0x1b9984: 0xc6200614  lwc1        $f0, 0x614($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B99B4u;
            goto label_1b99b4;
        }
    }
    ctx->pc = 0x1B9988u;
    // 0x1b9988: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1B9988u;
    SET_GPR_U32(ctx, 31, 0x1B9990u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B9988u, 0x1B9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9990u;
label_1b9990:
    // 0x1b9990: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x1b9990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
    // 0x1b9994: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b9994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1b9998: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b999c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b999cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99a0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b99a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b99a4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x1B99A4u;
    SET_GPR_U32(ctx, 31, 0x1B99ACu);
    ctx->pc = 0x1B99A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99A4u;
    // 0x1b99a8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x1B99A4u, 0x1B99ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99ACu;
label_1b99ac:
    // 0x1b99ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B99ACu;
    {
        const bool branch_taken_0x1b99ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b99ac) {
            ctx->pc = 0x1B99D0u;
            goto label_1b99d0;
        }
    }
    ctx->pc = 0x1B99B4u;
label_1b99b4:
    // 0x1b99b4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1b99b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1b99b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b99b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b99bc: 0x0  nop
    ctx->pc = 0x1b99bcu;
    // NOP
    // 0x1b99c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b99c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b99c4: 0x0  nop
    ctx->pc = 0x1b99c4u;
    // NOP
    // 0x1b99c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B99C8u;
    {
        const bool branch_taken_0x1b99c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b99c8) {
            ctx->pc = 0x1B99CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B99C8u;
            // 0x1b99cc: 0xe6210614  swc1        $f1, 0x614($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B99D0u;
            goto label_1b99d0;
        }
    }
    ctx->pc = 0x1B99D0u;
label_1b99d0:
    // 0x1b99d0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1b99d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b99d4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1b99d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b99d8: 0xc051e62  jal         func_147988
    ctx->pc = 0x1B99D8u;
    SET_GPR_U32(ctx, 31, 0x1B99E0u);
    ctx->pc = 0x1B99DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99D8u;
    // 0x1b99dc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1B99D8u, 0x1B99E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B99E0u;
label_1b99e0:
    // 0x1b99e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b99e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b99e4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1b99e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b99e8: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b99e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b99ec: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b99ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b99f0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b99f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b99f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b99f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99f8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1B99F8u;
    SET_GPR_U32(ctx, 31, 0x1B9A00u);
    ctx->pc = 0x1B99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B99F8u;
    // 0x1b99fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1B99F8u, 0x1B9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9A00u;
label_1b9a00:
    // 0x1b9a00: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b9a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9a04: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b9a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a08: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1b9a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9a0c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1b9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b9a10: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1b9a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9a14: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1b9a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9a18: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1b9a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b9a1c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1b9a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b9a20: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1b9a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9a24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9a24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9a28: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a2c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9a2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b9a30: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9a30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9a34: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9a34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9a38: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9a3c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a40: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b9a40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9a44: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b9a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a48: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b9a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9a4c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1b9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b9a50: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9a50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9a54: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b9a54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9a58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9a58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9a5c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a60: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x1B9A60u;
    {
        const bool branch_taken_0x1b9a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9A60u;
        // 0x1b9a64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9a60) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9A68u;
label_1b9a68:
    // 0x1b9a68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b9a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9a6c: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9a70: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9a70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9a74: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a78: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9a78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9a7c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9a7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9a80: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9a80u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9a84: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9a84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9a88: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a8c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1b9a8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9a90: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b9a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9a94: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b9a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9a98: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9a9c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9a9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9aa0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b9aa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9aa4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9aa8: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9aac: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x1b9aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x1b9ab0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1b9ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1b9ab4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ab8: 0xc6210620  lwc1        $f1, 0x620($s1)
    ctx->pc = 0x1b9ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9abc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b9abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b9ac0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b9ac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9ac4: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1b9ac4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1b9ac8: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1B9AC8u;
    SET_GPR_U32(ctx, 31, 0x1B9AD0u);
    ctx->pc = 0x1B9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AC8u;
    // 0x1b9acc: 0xe6210620  swc1        $f1, 0x620($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1B9AC8u, 0x1B9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9AD0u;
label_1b9ad0:
    // 0x1b9ad0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b9ad0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9ad4: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1B9AD4u;
    SET_GPR_U32(ctx, 31, 0x1B9ADCu);
    ctx->pc = 0x1B9AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9AD4u;
    // 0x1b9ad8: 0xe6200620  swc1        $f0, 0x620($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1B9AD4u, 0x1B9ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9ADCu;
label_1b9adc:
    // 0x1b9adc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1b9adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1b9ae0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b9ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b9ae4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b9ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9ae8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1B9AE8u;
    {
        const bool branch_taken_0x1b9ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9AE8u;
        // 0x1b9aec: 0x8e2200f0  lw          $v0, 0xF0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ae8) {
            ctx->pc = 0x1B9C5Cu;
            goto label_1b9c5c;
        }
    }
    ctx->pc = 0x1B9AF0u;
label_1b9af0:
    // 0x1b9af0: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1b9af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9af8: 0x0  nop
    ctx->pc = 0x1b9af8u;
    // NOP
    // 0x1b9afc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b9afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9b00: 0x0  nop
    ctx->pc = 0x1b9b00u;
    // NOP
    // 0x1b9b04: 0x4502005b  bc1fl       . + 4 + (0x5B << 2)
    ctx->pc = 0x1B9B04u;
    {
        const bool branch_taken_0x1b9b04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9b04) {
            ctx->pc = 0x1B9B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B04u;
            // 0x1b9b08: 0x8e2700f0  lw          $a3, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9C74u;
            goto label_1b9c74;
        }
    }
    ctx->pc = 0x1B9B0Cu;
    // 0x1b9b0c: 0x46140801  sub.s       $f0, $f1, $f20
    ctx->pc = 0x1b9b0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x1b9b10: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x1b9b10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9b14: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1B9B14u;
    SET_GPR_U32(ctx, 31, 0x1B9B1Cu);
    ctx->pc = 0x1B9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B14u;
    // 0x1b9b18: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B9B14u, 0x1B9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B1Cu;
label_1b9b1c:
    // 0x1b9b1c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b9b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b9b20: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1B9B20u;
    SET_GPR_U32(ctx, 31, 0x1B9B28u);
    ctx->pc = 0x1B9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B20u;
    // 0x1b9b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1B9B20u, 0x1B9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B28u;
label_1b9b28:
    // 0x1b9b28: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1b9b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1b9b2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b30: 0x0  nop
    ctx->pc = 0x1b9b30u;
    // NOP
    // 0x1b9b34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9b38: 0x0  nop
    ctx->pc = 0x1b9b38u;
    // NOP
    // 0x1b9b3c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1B9B3Cu;
    {
        const bool branch_taken_0x1b9b3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9b3c) {
            ctx->pc = 0x1B9B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B3Cu;
            // 0x1b9b40: 0xc6200624  lwc1        $f0, 0x624($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B70u;
            goto label_1b9b70;
        }
    }
    ctx->pc = 0x1B9B44u;
    // 0x1b9b44: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1B9B44u;
    SET_GPR_U32(ctx, 31, 0x1B9B4Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1B9B44u, 0x1B9B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B4Cu;
label_1b9b4c:
    // 0x1b9b4c: 0x3c013e20  lui         $at, 0x3E20
    ctx->pc = 0x1b9b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15904 << 16));
    // 0x1b9b50: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1b9b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1b9b54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9b58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9b5c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1b9b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1b9b60: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x1B9B60u;
    SET_GPR_U32(ctx, 31, 0x1B9B68u);
    ctx->pc = 0x1B9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B60u;
    // 0x1b9b64: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x1B9B60u, 0x1B9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B68u;
label_1b9b68:
    // 0x1b9b68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9B68u;
    {
        const bool branch_taken_0x1b9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9b68) {
            ctx->pc = 0x1B9B8Cu;
            goto label_1b9b8c;
        }
    }
    ctx->pc = 0x1B9B70u;
label_1b9b70:
    // 0x1b9b70: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1b9b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1b9b74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9b74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9b78: 0x0  nop
    ctx->pc = 0x1b9b78u;
    // NOP
    // 0x1b9b7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9b7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9b80: 0x0  nop
    ctx->pc = 0x1b9b80u;
    // NOP
    // 0x1b9b84: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9B84u;
    {
        const bool branch_taken_0x1b9b84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9b84) {
            ctx->pc = 0x1B9B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9B84u;
            // 0x1b9b88: 0xe6210624  swc1        $f1, 0x624($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9B8Cu;
            goto label_1b9b8c;
        }
    }
    ctx->pc = 0x1B9B8Cu;
label_1b9b8c:
    // 0x1b9b8c: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1b9b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b9b90: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1b9b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b9b94: 0xc051e62  jal         func_147988
    ctx->pc = 0x1B9B94u;
    SET_GPR_U32(ctx, 31, 0x1B9B9Cu);
    ctx->pc = 0x1B9B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9B94u;
    // 0x1b9b98: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1B9B94u, 0x1B9B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9B9Cu;
label_1b9b9c:
    // 0x1b9b9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b9b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9ba0: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1b9ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b9ba4: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9ba8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9ba8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9bac: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9bb4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1B9BB4u;
    SET_GPR_U32(ctx, 31, 0x1B9BBCu);
    ctx->pc = 0x1B9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9BB4u;
    // 0x1b9bb8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1B9BB4u, 0x1B9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9BBCu;
label_1b9bbc:
    // 0x1b9bbc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b9bbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9bc0: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b9bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9bc4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1b9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9bc8: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1b9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b9bcc: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1b9bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9bd0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1b9bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9bd4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1b9bd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b9bd8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1b9bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1b9bdc: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1b9bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1b9be0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9be0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9be4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9be8: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9be8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b9bec: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9becu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9bf0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9bf0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9bf4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9bf8: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1b9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9bfc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1b9bfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9c00: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1b9c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9c04: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b9c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9c08: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1b9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1b9c0c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9c10: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b9c10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9c14: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9c14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9c18: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9c18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9c1c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x1b9c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x1b9c20: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1b9c20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1b9c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9c28: 0xc6210620  lwc1        $f1, 0x620($s1)
    ctx->pc = 0x1b9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c2c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1b9c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1b9c30: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b9c30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9c34: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1b9c34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x1b9c38: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1B9C38u;
    SET_GPR_U32(ctx, 31, 0x1B9C40u);
    ctx->pc = 0x1B9C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9C38u;
    // 0x1b9c3c: 0xe6210620  swc1        $f1, 0x620($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1B9C38u, 0x1B9C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C40u;
label_1b9c40:
    // 0x1b9c40: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1b9c40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1b9c44: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1B9C44u;
    SET_GPR_U32(ctx, 31, 0x1B9C4Cu);
    ctx->pc = 0x1B9C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9C44u;
    // 0x1b9c48: 0xe6200620  swc1        $f0, 0x620($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1568), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1B9C44u, 0x1B9C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9C4Cu;
label_1b9c4c:
    // 0x1b9c4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b9c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b9c50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b9c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b9c54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b9c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b9c58: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1b9c5c:
    // 0x1b9c5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b9c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b9c60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b9c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9c64: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1b9c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1b9c68: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b9c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b9c6c: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x1B9C6Cu;
    {
        const bool branch_taken_0x1b9c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C6Cu;
        // 0x1b9c70: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c6c) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9C74u;
label_1b9c74:
    // 0x1b9c74: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1b9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1b9c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9c7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9c80: 0x10000176  b           . + 4 + (0x176 << 2)
    ctx->pc = 0x1B9C80u;
    {
        const bool branch_taken_0x1b9c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C80u;
        // 0x1b9c84: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c80) {
            ctx->pc = 0x1BA25Cu;
            goto label_1ba25c;
        }
    }
    ctx->pc = 0x1B9C88u;
label_1b9c88:
    // 0x1b9c88: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1b9c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9c8c: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9c90: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9c90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9c94: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1b9c94u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9c98: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9c9c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9ca0: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x1B9CA0u;
    {
        const bool branch_taken_0x1b9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ca0) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9CA8u;
label_1b9ca8:
    // 0x1b9ca8: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9cac: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9cb0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9cb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9cb4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9cb8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9cb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9cbc: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9cbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9cc0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9cc0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9cc4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9cc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9cc8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9ccc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9cccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9cd0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b9cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9cd4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b9cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9cd8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9cdc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9cdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9ce0: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1b9ce0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9ce4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9ce8: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9cec: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x1b9cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9cf0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b9cf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9cf4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b9cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b9cf8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9cf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9cfc: 0x0  nop
    ctx->pc = 0x1b9cfcu;
    // NOP
    // 0x1b9d00: 0x4500015d  bc1f        . + 4 + (0x15D << 2)
    ctx->pc = 0x1B9D00u;
    {
        const bool branch_taken_0x1b9d00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D00u;
        // 0x1b9d04: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d00) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9D08u;
    // 0x1b9d08: 0x8e22061c  lw          $v0, 0x61C($s1)
    ctx->pc = 0x1b9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1b9d0c: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x1B9D0Cu;
    {
        const bool branch_taken_0x1b9d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D0Cu;
        // 0x1b9d10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d0c) {
            ctx->pc = 0x1BA0F8u;
            goto label_1ba0f8;
        }
    }
    ctx->pc = 0x1B9D14u;
    // 0x1b9d14: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b9d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b9d18: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9d1c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9D1Cu;
    {
        const bool branch_taken_0x1b9d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9d1c) {
            ctx->pc = 0x1B9D3Cu;
            goto label_1b9d3c;
        }
    }
    ctx->pc = 0x1B9D24u;
    // 0x1b9d24: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b9d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9d28: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b9d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b9d2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b9d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9d30: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b9d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b9d34: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9d38: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b9d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b9d3c:
    // 0x1b9d3c: 0xc0b7746  jal         func_2DDD18
    ctx->pc = 0x1B9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D44u);
    ctx->pc = 0x1B9D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D3Cu;
    // 0x1b9d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD18u, 0x1B9D3Cu, 0x1B9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D44u;
label_1b9d44:
    // 0x1b9d44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9d48: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9d4c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d50: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1b9d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b9d54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d58: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1B9D58u;
    {
        const bool branch_taken_0x1b9d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D58u;
        // 0x1b9d5c: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d58) {
            ctx->pc = 0x1B9ECCu;
            goto label_1b9ecc;
        }
    }
    ctx->pc = 0x1B9D60u;
label_1b9d60:
    // 0x1b9d60: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b9d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9d64: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9d68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9d68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9d6c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9d70: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9d70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9d74: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9d78: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9d78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9d7c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9d80: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9d84: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9d84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9d88: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b9d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9d8c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b9d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9d90: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9d94: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9d94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9d98: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1b9d98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9d9c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9d9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9da0: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9da0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9da4: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x1b9da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9da8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b9da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9dac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b9dacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b9db0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9db4: 0x0  nop
    ctx->pc = 0x1b9db4u;
    // NOP
    // 0x1b9db8: 0x4500012f  bc1f        . + 4 + (0x12F << 2)
    ctx->pc = 0x1B9DB8u;
    {
        const bool branch_taken_0x1b9db8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DB8u;
        // 0x1b9dbc: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9db8) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9DC0u;
    // 0x1b9dc0: 0x8e22061c  lw          $v0, 0x61C($s1)
    ctx->pc = 0x1b9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1b9dc4: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x1B9DC4u;
    {
        const bool branch_taken_0x1b9dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9DC4u;
        // 0x1b9dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9dc4) {
            ctx->pc = 0x1BA0F8u;
            goto label_1ba0f8;
        }
    }
    ctx->pc = 0x1B9DCCu;
    // 0x1b9dcc: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b9dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b9dd0: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9dd4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9DD4u;
    {
        const bool branch_taken_0x1b9dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9dd4) {
            ctx->pc = 0x1B9DF4u;
            goto label_1b9df4;
        }
    }
    ctx->pc = 0x1B9DDCu;
    // 0x1b9ddc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b9ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9de0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b9de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b9de4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b9de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9de8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b9de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b9dec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9df0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b9df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b9df4:
    // 0x1b9df4: 0xc0b7746  jal         func_2DDD18
    ctx->pc = 0x1B9DF4u;
    SET_GPR_U32(ctx, 31, 0x1B9DFCu);
    ctx->pc = 0x1B9DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9DF4u;
    // 0x1b9df8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD18u, 0x1B9DF4u, 0x1B9DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9DFCu;
label_1b9dfc:
    // 0x1b9dfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9e00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9e04: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9e08: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1b9e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b9e0c: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1b9e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1b9e10: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1B9E10u;
    {
        const bool branch_taken_0x1b9e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E10u;
        // 0x1b9e14: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e10) {
            ctx->pc = 0x1B9ECCu;
            goto label_1b9ecc;
        }
    }
    ctx->pc = 0x1B9E18u;
label_1b9e18:
    // 0x1b9e18: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9e1c: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9e20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9e20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9e24: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9e28: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9e28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9e2c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9e30: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9e30u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9e34: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9e38: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9e3c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9e3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9e40: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b9e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9e44: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b9e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9e48: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9e4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9e4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9e50: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1b9e50u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9e54: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9e58: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9e58u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9e5c: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x1b9e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9e60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b9e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9e64: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b9e64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b9e68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9e68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9e6c: 0x0  nop
    ctx->pc = 0x1b9e6cu;
    // NOP
    // 0x1b9e70: 0x45000101  bc1f        . + 4 + (0x101 << 2)
    ctx->pc = 0x1B9E70u;
    {
        const bool branch_taken_0x1b9e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E70u;
        // 0x1b9e74: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e70) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9E78u;
    // 0x1b9e78: 0x8e22061c  lw          $v0, 0x61C($s1)
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1b9e7c: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x1B9E7Cu;
    {
        const bool branch_taken_0x1b9e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E7Cu;
        // 0x1b9e80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e7c) {
            ctx->pc = 0x1BA0F8u;
            goto label_1ba0f8;
        }
    }
    ctx->pc = 0x1B9E84u;
    // 0x1b9e84: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b9e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b9e88: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9e8c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9E8Cu;
    {
        const bool branch_taken_0x1b9e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9e8c) {
            ctx->pc = 0x1B9EACu;
            goto label_1b9eac;
        }
    }
    ctx->pc = 0x1B9E94u;
    // 0x1b9e94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9e98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b9e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b9e9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b9e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9ea0: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b9ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b9ea4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9ea8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1b9eac:
    // 0x1b9eac: 0xc0b7746  jal         func_2DDD18
    ctx->pc = 0x1B9EACu;
    SET_GPR_U32(ctx, 31, 0x1B9EB4u);
    ctx->pc = 0x1B9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EACu;
    // 0x1b9eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD18u, 0x1B9EACu, 0x1B9EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9EB4u;
label_1b9eb4:
    // 0x1b9eb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9eb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9ebc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ec0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1b9ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b9ec4: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1b9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1b9ec8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b9ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1b9ecc:
    // 0x1b9ecc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9ed0: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B9ED0u;
    SET_GPR_U32(ctx, 31, 0x1B9ED8u);
    ctx->pc = 0x1B9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9ED0u;
    // 0x1b9ed4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B9ED0u, 0x1B9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9ED8u;
label_1b9ed8:
    // 0x1b9ed8: 0x8e23061c  lw          $v1, 0x61C($s1)
    ctx->pc = 0x1b9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1b9edc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1b9edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1b9ee0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9ee4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b9ee8: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x1b9ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
    // 0x1b9eec: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1B9EECu;
    {
        const bool branch_taken_0x1b9eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EECu;
        // 0x1b9ef0: 0xae23061c  sw          $v1, 0x61C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9eec) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9EF4u;
label_1b9ef4:
    // 0x1b9ef4: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1b9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9ef8: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1b9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1b9efc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9efcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9f00: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9f04: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9f04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b9f08: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1b9f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1b9f0c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1b9f0cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1b9f10: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1b9f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9f14: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1b9f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9f18: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1b9f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9f1c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1b9f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9f20: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1b9f20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9f24: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9f28: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9f28u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9f2c: 0xda050000  lqc2        $vf5, 0x0($s0)
    ctx->pc = 0x1b9f2cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9f30: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1b9f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1b9f34: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1b9f34u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1b9f38: 0xc0b7746  jal         func_2DDD18
    ctx->pc = 0x1B9F38u;
    SET_GPR_U32(ctx, 31, 0x1B9F40u);
    ctx->pc = 0x1B9F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F38u;
    // 0x1b9f3c: 0x8e2400f0  lw          $a0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD18u, 0x1B9F38u, 0x1B9F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F40u;
label_1b9f40:
    // 0x1b9f40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b9f44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b9f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b9f48: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b9f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b9f4c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9f50: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x1b9f50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1b9f54: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1b9f58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b9f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9f5c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b9f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9f60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b9f60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b9f64: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b9f64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9f68: 0x0  nop
    ctx->pc = 0x1b9f68u;
    // NOP
    // 0x1b9f6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B9F6Cu;
    {
        const bool branch_taken_0x1b9f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9f6c) {
            ctx->pc = 0x1B9F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9F6Cu;
            // 0x1b9f70: 0xe4420004  swc1        $f2, 0x4($v0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9F74u;
            goto label_1b9f74;
        }
    }
    ctx->pc = 0x1B9F74u;
label_1b9f74:
    // 0x1b9f74: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x1b9f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9f78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b9f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9f7c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b9f7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b9f80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9f84: 0x0  nop
    ctx->pc = 0x1b9f84u;
    // NOP
    // 0x1b9f88: 0x450000bb  bc1f        . + 4 + (0xBB << 2)
    ctx->pc = 0x1B9F88u;
    {
        const bool branch_taken_0x1b9f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F88u;
        // 0x1b9f8c: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f88) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9F90u;
    // 0x1b9f90: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1b9f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b9f94: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1b9f98: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9F98u;
    {
        const bool branch_taken_0x1b9f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b9f98) {
            ctx->pc = 0x1B9F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9F98u;
            // 0x1b9f9c: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9FBCu;
            goto label_1b9fbc;
        }
    }
    ctx->pc = 0x1B9FA0u;
    // 0x1b9fa0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b9fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9fa4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1b9fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b9fa8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1b9fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9fac: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b9facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b9fb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9fb4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b9fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b9fb8: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x1b9fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1b9fbc:
    // 0x1b9fbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9fc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b9fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b9fc4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b9fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9fc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9fcc: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1b9fd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9fd4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1b9fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1b9fd8: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1B9FD8u;
    SET_GPR_U32(ctx, 31, 0x1B9FE0u);
    ctx->pc = 0x1B9FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FD8u;
    // 0x1b9fdc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1B9FD8u, 0x1B9FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9FE0u;
label_1b9fe0:
    // 0x1b9fe0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1b9fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9fe8: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x1B9FE8u;
    {
        const bool branch_taken_0x1b9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FE8u;
        // 0x1b9fec: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fe8) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1B9FF0u;
label_1b9ff0:
    // 0x1b9ff0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9ff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9FF4u;
    {
        const bool branch_taken_0x1b9ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FF4u;
        // 0x1b9ff8: 0x26220580  addiu       $v0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ff4) {
            ctx->pc = 0x1BA018u;
            goto label_1ba018;
        }
    }
    ctx->pc = 0x1B9FFCu;
label_1b9ffc:
    // 0x1b9ffc: 0xc6210628  lwc1        $f1, 0x628($s1)
    ctx->pc = 0x1b9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba000: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ba000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ba004: 0xc6200584  lwc1        $f0, 0x584($s1)
    ctx->pc = 0x1ba004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba008: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1ba008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1ba00c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1ba00cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1ba010: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba014: 0xe6200584  swc1        $f0, 0x584($s1)
    ctx->pc = 0x1ba014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1412), bits); }
label_1ba018:
    // 0x1ba018: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ba018u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba01c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ba01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba020: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ba020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba024: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1ba024u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ba028: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ba028u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ba02c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ba02cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ba030: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ba030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba034: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x1ba034u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba038: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1ba038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba03c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ba03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba040: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1ba040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba044: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ba044u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba048: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ba048u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba04c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ba04cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ba050: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ba050u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba054: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1BA054u;
    {
        const bool branch_taken_0x1ba054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba054) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA05Cu;
label_1ba05c:
    // 0x1ba05c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba060: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1ba060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1ba064: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ba064u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba068: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ba068u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba06c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ba06cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ba070: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ba070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba074: 0xc6200618  lwc1        $f0, 0x618($s1)
    ctx->pc = 0x1ba074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba078: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba07c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba080: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ba080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba084: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ba084u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ba088: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1ba088u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba08c: 0x0  nop
    ctx->pc = 0x1ba08cu;
    // NOP
    // 0x1ba090: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x1BA090u;
    {
        const bool branch_taken_0x1ba090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA090u;
        // 0x1ba094: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba090) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA098u;
    // 0x1ba098: 0x8e22061c  lw          $v0, 0x61C($s1)
    ctx->pc = 0x1ba098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1ba09c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA09Cu;
    {
        const bool branch_taken_0x1ba09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA09Cu;
        // 0x1ba0a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba09c) {
            ctx->pc = 0x1BA0F4u;
            goto label_1ba0f4;
        }
    }
    ctx->pc = 0x1BA0A4u;
    // 0x1ba0a4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ba0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ba0a8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x1ba0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba0ac: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA0ACu;
    {
        const bool branch_taken_0x1ba0ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba0ac) {
            ctx->pc = 0x1BA0CCu;
            goto label_1ba0cc;
        }
    }
    ctx->pc = 0x1BA0B4u;
    // 0x1ba0b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ba0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba0b8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ba0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ba0bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ba0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba0c0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1ba0c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ba0c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ba0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba0c8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1ba0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1ba0cc:
    // 0x1ba0cc: 0xc0b7746  jal         func_2DDD18
    ctx->pc = 0x1BA0CCu;
    SET_GPR_U32(ctx, 31, 0x1BA0D4u);
    ctx->pc = 0x2DDD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDD18u, 0x1BA0CCu, 0x1BA0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA0D4u;
label_1ba0d4:
    // 0x1ba0d4: 0x8e22061c  lw          $v0, 0x61C($s1)
    ctx->pc = 0x1ba0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1564)));
    // 0x1ba0d8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1ba0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1ba0dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba0dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba0e0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1ba0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ba0e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba0e8: 0xe6210618  swc1        $f1, 0x618($s1)
    ctx->pc = 0x1ba0e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
    // 0x1ba0ec: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1BA0ECu;
    {
        const bool branch_taken_0x1ba0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0ECu;
        // 0x1ba0f0: 0xae22061c  sw          $v0, 0x61C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0ec) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA0F4u;
label_1ba0f4:
    // 0x1ba0f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba0f8:
    // 0x1ba0f8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x1BA0F8u;
    {
        const bool branch_taken_0x1ba0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0F8u;
        // 0x1ba0fc: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0f8) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA100u;
label_1ba100:
    // 0x1ba100: 0xc6220614  lwc1        $f2, 0x614($s1)
    ctx->pc = 0x1ba100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ba104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba108: 0x0  nop
    ctx->pc = 0x1ba108u;
    // NOP
    // 0x1ba10c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ba10cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba110: 0x0  nop
    ctx->pc = 0x1ba110u;
    // NOP
    // 0x1ba114: 0x4502004d  bc1fl       . + 4 + (0x4D << 2)
    ctx->pc = 0x1BA114u;
    {
        const bool branch_taken_0x1ba114 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba114) {
            ctx->pc = 0x1BA118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA114u;
            // 0x1ba118: 0x8e2700f0  lw          $a3, 0xF0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA24Cu;
            goto label_1ba24c;
        }
    }
    ctx->pc = 0x1BA11Cu;
    // 0x1ba11c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x1ba120: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ba120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ba124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba128: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x1ba128u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x1ba12c: 0xc6210588  lwc1        $f1, 0x588($s1)
    ctx->pc = 0x1ba12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba130: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1ba130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1ba134: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ba138: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ba138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ba13c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ba13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ba140: 0xe6220614  swc1        $f2, 0x614($s1)
    ctx->pc = 0x1ba140u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
    // 0x1ba144: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ba144u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ba148: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x1ba148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba14c: 0x0  nop
    ctx->pc = 0x1ba14cu;
    // NOP
    // 0x1ba150: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA150u;
    {
        const bool branch_taken_0x1ba150 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA150u;
        // 0x1ba154: 0xe6210588  swc1        $f1, 0x588($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba150) {
            ctx->pc = 0x1BA15Cu;
            goto label_1ba15c;
        }
    }
    ctx->pc = 0x1BA158u;
    // 0x1ba158: 0xe6230588  swc1        $f3, 0x588($s1)
    ctx->pc = 0x1ba158u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1416), bits); }
label_1ba15c:
    // 0x1ba15c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1BA15Cu;
    SET_GPR_U32(ctx, 31, 0x1BA164u);
    ctx->pc = 0x1BA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA15Cu;
    // 0x1ba160: 0x8e3000f0  lw          $s0, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BA15Cu, 0x1BA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA164u;
label_1ba164:
    // 0x1ba164: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1ba164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ba168: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1BA168u;
    SET_GPR_U32(ctx, 31, 0x1BA170u);
    ctx->pc = 0x1BA16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA168u;
    // 0x1ba16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1BA168u, 0x1BA170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA170u;
label_1ba170:
    // 0x1ba170: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1ba170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1ba174: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba178: 0x0  nop
    ctx->pc = 0x1ba178u;
    // NOP
    // 0x1ba17c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba17cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba180: 0x0  nop
    ctx->pc = 0x1ba180u;
    // NOP
    // 0x1ba184: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1BA184u;
    {
        const bool branch_taken_0x1ba184 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba184) {
            ctx->pc = 0x1BA1B0u;
            goto label_1ba1b0;
        }
    }
    ctx->pc = 0x1BA18Cu;
    // 0x1ba18c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1BA18Cu;
    SET_GPR_U32(ctx, 31, 0x1BA194u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1BA18Cu, 0x1BA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA194u;
label_1ba194:
    // 0x1ba194: 0x3c013da0  lui         $at, 0x3DA0
    ctx->pc = 0x1ba194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15776 << 16));
    // 0x1ba198: 0x3421d97c  ori         $at, $at, 0xD97C
    ctx->pc = 0x1ba198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55676);
    // 0x1ba19c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba1a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ba1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1a4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1ba1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ba1a8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x1BA1A8u;
    SET_GPR_U32(ctx, 31, 0x1BA1B0u);
    ctx->pc = 0x1BA1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1A8u;
    // 0x1ba1ac: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x1BA1A8u, 0x1BA1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1B0u;
label_1ba1b0:
    // 0x1ba1b0: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1ba1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ba1b4: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1ba1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba1b8: 0xc051e62  jal         func_147988
    ctx->pc = 0x1BA1B8u;
    SET_GPR_U32(ctx, 31, 0x1BA1C0u);
    ctx->pc = 0x1BA1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1B8u;
    // 0x1ba1bc: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x1BA1B8u, 0x1BA1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1C0u;
label_1ba1c0:
    // 0x1ba1c0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ba1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ba1c4: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ba1c8: 0x26220580  addiu       $v0, $s1, 0x580
    ctx->pc = 0x1ba1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1ba1cc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ba1ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba1d0: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1ba1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ba1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba1d8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x1BA1D8u;
    SET_GPR_U32(ctx, 31, 0x1BA1E0u);
    ctx->pc = 0x1BA1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1D8u;
    // 0x1ba1dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x1BA1D8u, 0x1BA1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1E0u;
label_1ba1e0:
    // 0x1ba1e0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1ba1e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba1e4: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ba1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba1e8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x1ba1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ba1ec: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ba1f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x1ba1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba1f4: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x1ba1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba1f8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1ba1f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ba1fc: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1ba1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ba200: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x1ba200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1ba204: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1ba204u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba208: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1ba208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba20c: 0xdba40090  lqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1ba20cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ba210: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1ba210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1ba214: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1ba214u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x1ba218: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1ba218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ba21c: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x1ba21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba220: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1ba220u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ba224: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ba224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba228: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x1ba228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba22c: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1ba22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ba230: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ba230u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba234: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1ba234u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ba238: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1ba238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1ba23c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1ba23cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ba240: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1BA240u;
    {
        const bool branch_taken_0x1ba240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba240) {
            ctx->pc = 0x1BA278u;
            goto label_1ba278;
        }
    }
    ctx->pc = 0x1BA248u;
label_1ba248:
    // 0x1ba248: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1ba248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1ba24c:
    // 0x1ba24c: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x1ba24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1ba250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba254: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba258: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ba258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ba25c:
    // 0x1ba25c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba260: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1BA260u;
    SET_GPR_U32(ctx, 31, 0x1BA268u);
    ctx->pc = 0x1BA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA260u;
    // 0x1ba264: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1BA260u, 0x1BA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA268u;
label_1ba268:
    // 0x1ba268: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba26c:
    // 0x1ba26c: 0x1000049e  b           . + 4 + (0x49E << 2)
    ctx->pc = 0x1BA26Cu;
    {
        const bool branch_taken_0x1ba26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA26Cu;
        // 0x1ba270: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba26c) {
            ctx->pc = 0x1BB4E8u;
            goto label_1bb4e8;
        }
    }
    ctx->pc = 0x1BA274u;
label_1ba274:
    // 0x1ba274: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ba274u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba278:
    // 0x1ba278: 0x1240008b  beqz        $s2, . + 4 + (0x8B << 2)
    ctx->pc = 0x1BA278u;
    {
        const bool branch_taken_0x1ba278 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA278u;
        // 0x1ba27c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba278) {
            ctx->pc = 0x1BA4A8u;
            goto label_1ba4a8;
        }
    }
    ctx->pc = 0x1BA280u;
    // 0x1ba280: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ba280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ba284: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x1ba284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba28c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1ba28cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1ba290: 0x26240490  addiu       $a0, $s1, 0x490
    ctx->pc = 0x1ba290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x1ba294: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ba294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1ba298: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ba298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba29c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1ba29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1ba2a0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ba2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba2a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1ba2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1ba2a8: 0x2409013c  addiu       $t1, $zero, 0x13C
    ctx->pc = 0x1ba2a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
    // 0x1ba2ac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1ba2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1ba2b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ba2b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2b4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1BA2B4u;
    SET_GPR_U32(ctx, 31, 0x1BA2BCu);
    ctx->pc = 0x1BA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2B4u;
    // 0x1ba2b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1BA2B4u, 0x1BA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA2BCu;
label_1ba2bc:
    // 0x1ba2bc: 0x5040007b  beql        $v0, $zero, . + 4 + (0x7B << 2)
    ctx->pc = 0x1BA2BCu;
    {
        const bool branch_taken_0x1ba2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba2bc) {
            ctx->pc = 0x1BA2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA2BCu;
            // 0x1ba2c0: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4ACu;
            goto label_1ba4ac;
        }
    }
    ctx->pc = 0x1BA2C4u;
    // 0x1ba2c4: 0x8e230610  lw          $v1, 0x610($s1)
    ctx->pc = 0x1ba2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ba2c8: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x1ba2c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ba2cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA2CCu;
    {
        const bool branch_taken_0x1ba2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2CCu;
        // 0x1ba2d0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2cc) {
            ctx->pc = 0x1BA2ECu;
            goto label_1ba2ec;
        }
    }
    ctx->pc = 0x1BA2D4u;
    // 0x1ba2d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba2d8: 0x24428e70  addiu       $v0, $v0, -0x7190
    ctx->pc = 0x1ba2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938224));
    // 0x1ba2dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba2e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba2e4: 0x800008  jr          $a0
    ctx->pc = 0x1BA2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA2ECu: goto label_1ba2ec;
            case 0x1BA308u: goto label_1ba308;
            case 0x1BA324u: goto label_1ba324;
            case 0x1BA340u: goto label_1ba340;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA378u: goto label_1ba378;
            case 0x1BA394u: goto label_1ba394;
            case 0x1BA3B0u: goto label_1ba3b0;
            case 0x1BA3CCu: goto label_1ba3cc;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA420u: goto label_1ba420;
            case 0x1BA43Cu: goto label_1ba43c;
            case 0x1BA458u: goto label_1ba458;
            case 0x1BA480u: goto label_1ba480;
            case 0x1BB4E0u: goto label_1bb4e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA2E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BA2ECu;
label_1ba2ec:
    // 0x1ba2ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba2f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba2f4: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x1ba2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1ba2f8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ba2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ba2fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba2fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba300: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x1BA300u;
    {
        const bool branch_taken_0x1ba300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA300u;
        // 0x1ba304: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba300) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA308u;
label_1ba308:
    // 0x1ba308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba30c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba310: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x1ba314: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ba314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ba318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba31c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1BA31Cu;
    {
        const bool branch_taken_0x1ba31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA31Cu;
        // 0x1ba320: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba31c) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA324u;
label_1ba324:
    // 0x1ba324: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba328: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba328u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba32c: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x1ba32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x1ba330: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ba334: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba338: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1BA338u;
    {
        const bool branch_taken_0x1ba338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA338u;
        // 0x1ba33c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba338) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA340u;
label_1ba340:
    // 0x1ba340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba348: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1ba348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ba34c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba354: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1BA354u;
    {
        const bool branch_taken_0x1ba354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA354u;
        // 0x1ba358: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba354) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA35Cu;
label_1ba35c:
    // 0x1ba35c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba360: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba364: 0x240400aa  addiu       $a0, $zero, 0xAA
    ctx->pc = 0x1ba364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1ba368: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba370: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1BA370u;
    {
        const bool branch_taken_0x1ba370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA370u;
        // 0x1ba374: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba370) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA378u;
label_1ba378:
    // 0x1ba378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba37c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba37cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba380: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1ba380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1ba384: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x1ba384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x1ba388: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba38c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1BA38Cu;
    {
        const bool branch_taken_0x1ba38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA38Cu;
        // 0x1ba390: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba38c) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA394u;
label_1ba394:
    // 0x1ba394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba398: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba39c: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    // 0x1ba3a0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1ba3a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3a8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1BA3A8u;
    {
        const bool branch_taken_0x1ba3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A8u;
        // 0x1ba3ac: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3a8) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA3B0u;
label_1ba3b0:
    // 0x1ba3b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba3b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba3b8: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1ba3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ba3bc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ba3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba3c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3c4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BA3C4u;
    {
        const bool branch_taken_0x1ba3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3C4u;
        // 0x1ba3c8: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3c4) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA3CCu;
label_1ba3cc:
    // 0x1ba3cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba3d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba3d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba3d4: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1ba3d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ba3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba3dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3e0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1BA3E0u;
    {
        const bool branch_taken_0x1ba3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E0u;
        // 0x1ba3e4: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e0) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA3E8u;
label_1ba3e8:
    // 0x1ba3e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba3ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba3f0: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x1ba3f4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ba3f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba3f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba3fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1BA3FCu;
    {
        const bool branch_taken_0x1ba3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3FCu;
        // 0x1ba400: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3fc) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA404u;
label_1ba404:
    // 0x1ba404: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba408: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba40c: 0x2404006f  addiu       $a0, $zero, 0x6F
    ctx->pc = 0x1ba40cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1ba410: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ba414: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba418: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA418u;
    {
        const bool branch_taken_0x1ba418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA418u;
        // 0x1ba41c: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba418) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA420u;
label_1ba420:
    // 0x1ba420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba428: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1ba428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1ba42c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ba42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba434: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BA434u;
    {
        const bool branch_taken_0x1ba434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA434u;
        // 0x1ba438: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba434) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA43Cu;
label_1ba43c:
    // 0x1ba43c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba440: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba444: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x1ba444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1ba448: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ba448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ba44c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba44cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba450: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA450u;
    {
        const bool branch_taken_0x1ba450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA450u;
        // 0x1ba454: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba450) {
            ctx->pc = 0x1BA470u;
            goto label_1ba470;
        }
    }
    ctx->pc = 0x1BA458u;
label_1ba458:
    // 0x1ba458: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1ba458u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba45c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ba45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba460: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba464: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba468: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1ba46c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ba470:
    // 0x1ba470: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1BA470u;
    SET_GPR_U32(ctx, 31, 0x1BA478u);
    ctx->pc = 0x1BA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA470u;
    // 0x1ba474: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1BA470u, 0x1BA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA478u;
label_1ba478:
    // 0x1ba478: 0x1000041a  b           . + 4 + (0x41A << 2)
    ctx->pc = 0x1BA478u;
    {
        const bool branch_taken_0x1ba478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA478u;
        // 0x1ba47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba478) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BA480u;
label_1ba480:
    // 0x1ba480: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x1ba480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ba484: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ba484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba488: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba48c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ba48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ba490: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1ba490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1ba494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ba494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba498: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1BA498u;
    SET_GPR_U32(ctx, 31, 0x1BA4A0u);
    ctx->pc = 0x1BA49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA498u;
    // 0x1ba49c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1BA498u, 0x1BA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4A0u;
label_1ba4a0:
    // 0x1ba4a0: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x1BA4A0u;
    {
        const bool branch_taken_0x1ba4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA4A0u;
        // 0x1ba4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba4a0) {
            ctx->pc = 0x1BB4E4u;
            goto label_1bb4e4;
        }
    }
    ctx->pc = 0x1BA4A8u;
label_1ba4a8:
    // 0x1ba4a8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1ba4ac:
    // 0x1ba4ac: 0x50800406  beql        $a0, $zero, . + 4 + (0x406 << 2)
    ctx->pc = 0x1BA4ACu;
    {
        const bool branch_taken_0x1ba4ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4ac) {
            ctx->pc = 0x1BA4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BA4ACu;
            // 0x1ba4b0: 0xc6200624  lwc1        $f0, 0x624($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB4C8u;
            goto label_1bb4c8;
        }
    }
    ctx->pc = 0x1BA4B4u;
    // 0x1ba4b4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1ba4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ba4b8: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x1ba4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ba4bc: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x1ba4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ba4c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ba4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba4c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba4c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ba4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba4cc: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1ba4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1ba4d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba4d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba4d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba4d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba4dc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ba4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ba4e0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1ba4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ba4e4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1ba4e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ba4e8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1ba4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1ba4ec: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ba4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1ba4f0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA4F0u;
    SET_GPR_U32(ctx, 31, 0x1BA4F8u);
    ctx->pc = 0x1BA4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA4F0u;
    // 0x1ba4f4: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA4F0u, 0x1BA4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA4F8u;
label_1ba4f8:
    // 0x1ba4f8: 0x8e230610  lw          $v1, 0x610($s1)
    ctx->pc = 0x1ba4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ba4fc: 0x2c620030  sltiu       $v0, $v1, 0x30
    ctx->pc = 0x1ba4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x1ba500: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA500u;
    {
        const bool branch_taken_0x1ba500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA500u;
        // 0x1ba504: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba500) {
            ctx->pc = 0x1BA520u;
            goto label_1ba520;
        }
    }
    ctx->pc = 0x1BA508u;
    // 0x1ba508: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ba508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ba50c: 0x24428f30  addiu       $v0, $v0, -0x70D0
    ctx->pc = 0x1ba50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938416));
    // 0x1ba510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba514: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba518: 0x800008  jr          $a0
    ctx->pc = 0x1BA518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA520u: goto label_1ba520;
            case 0x1BA584u: goto label_1ba584;
            case 0x1BA600u: goto label_1ba600;
            case 0x1BA664u: goto label_1ba664;
            case 0x1BA6D4u: goto label_1ba6d4;
            case 0x1BA70Cu: goto label_1ba70c;
            case 0x1BA744u: goto label_1ba744;
            case 0x1BA778u: goto label_1ba778;
            case 0x1BA7ACu: goto label_1ba7ac;
            case 0x1BA820u: goto label_1ba820;
            case 0x1BA858u: goto label_1ba858;
            case 0x1BA8D8u: goto label_1ba8d8;
            case 0x1BA910u: goto label_1ba910;
            case 0x1BA948u: goto label_1ba948;
            case 0x1BA9B0u: goto label_1ba9b0;
            case 0x1BAA18u: goto label_1baa18;
            case 0x1BAA88u: goto label_1baa88;
            case 0x1BAAC0u: goto label_1baac0;
            case 0x1BAB2Cu: goto label_1bab2c;
            case 0x1BAB98u: goto label_1bab98;
            case 0x1BABD4u: goto label_1babd4;
            case 0x1BAC10u: goto label_1bac10;
            case 0x1BACA4u: goto label_1baca4;
            case 0x1BAD38u: goto label_1bad38;
            case 0x1BADB8u: goto label_1badb8;
            case 0x1BAE90u: goto label_1bae90;
            case 0x1BAF6Cu: goto label_1baf6c;
            case 0x1BB044u: goto label_1bb044;
            case 0x1BB0D0u: goto label_1bb0d0;
            case 0x1BB140u: goto label_1bb140;
            case 0x1BB1B0u: goto label_1bb1b0;
            case 0x1BB214u: goto label_1bb214;
            case 0x1BB260u: goto label_1bb260;
            case 0x1BB2A8u: goto label_1bb2a8;
            case 0x1BB2F0u: goto label_1bb2f0;
            case 0x1BB328u: goto label_1bb328;
            case 0x1BB38Cu: goto label_1bb38c;
            case 0x1BB3E8u: goto label_1bb3e8;
            case 0x1BB44Cu: goto label_1bb44c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BA520u;
label_1ba520:
    // 0x1ba520: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba524: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA524u;
    SET_GPR_U32(ctx, 31, 0x1BA52Cu);
    ctx->pc = 0x1BA528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA524u;
    // 0x1ba528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA524u, 0x1BA52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA52Cu;
label_1ba52c:
    // 0x1ba52c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba530: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ba530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ba534: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba538: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba53c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA53Cu;
    SET_GPR_U32(ctx, 31, 0x1BA544u);
    ctx->pc = 0x1BA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA53Cu;
    // 0x1ba540: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA53Cu, 0x1BA544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA544u;
label_1ba544:
    // 0x1ba544: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba548: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba54c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba54cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba550: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ba550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ba554: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA554u;
    {
        const bool branch_taken_0x1ba554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba554) {
            ctx->pc = 0x1BA564u;
            goto label_1ba564;
        }
    }
    ctx->pc = 0x1BA55Cu;
    // 0x1ba55c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA55Cu;
    SET_GPR_U32(ctx, 31, 0x1BA564u);
    ctx->pc = 0x1BA560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA55Cu;
    // 0x1ba560: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA55Cu, 0x1BA564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA564u;
label_1ba564:
    // 0x1ba564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba56c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ba56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ba570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba574: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ba574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba578: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba57c: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x1BA57Cu;
    {
        const bool branch_taken_0x1ba57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA57Cu;
        // 0x1ba580: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba57c) {
            ctx->pc = 0x1BAE78u;
            goto label_1bae78;
        }
    }
    ctx->pc = 0x1BA584u;
label_1ba584:
    // 0x1ba584: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba588: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA588u;
    SET_GPR_U32(ctx, 31, 0x1BA590u);
    ctx->pc = 0x1BA58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA588u;
    // 0x1ba58c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA588u, 0x1BA590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA590u;
label_1ba590:
    // 0x1ba590: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba594: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ba594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1ba598: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba59c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba59cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba5a0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA5A0u;
    SET_GPR_U32(ctx, 31, 0x1BA5A8u);
    ctx->pc = 0x1BA5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5A0u;
    // 0x1ba5a4: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA5A0u, 0x1BA5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5A8u;
label_1ba5a8:
    // 0x1ba5a8: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba5ac: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba5b0: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba5b4: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ba5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ba5b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA5B8u;
    {
        const bool branch_taken_0x1ba5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba5b8) {
            ctx->pc = 0x1BA5C8u;
            goto label_1ba5c8;
        }
    }
    ctx->pc = 0x1BA5C0u;
    // 0x1ba5c0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA5C0u;
    SET_GPR_U32(ctx, 31, 0x1BA5C8u);
    ctx->pc = 0x1BA5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA5C0u;
    // 0x1ba5c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA5C0u, 0x1BA5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA5C8u;
label_1ba5c8:
    // 0x1ba5c8: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x1ba5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
    // 0x1ba5cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba5ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba5d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ba5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba5d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba5d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba5d8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1ba5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1ba5dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba5e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba5e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ba5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ba5e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1ba5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ba5ec: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1ba5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ba5f0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1ba5f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ba5f4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1ba5f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ba5f8: 0x100003ab  b           . + 4 + (0x3AB << 2)
    ctx->pc = 0x1BA5F8u;
    {
        const bool branch_taken_0x1ba5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA5F8u;
        // 0x1ba5fc: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba5f8) {
            ctx->pc = 0x1BB4A8u;
            goto label_1bb4a8;
        }
    }
    ctx->pc = 0x1BA600u;
label_1ba600:
    // 0x1ba600: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba604: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA604u;
    SET_GPR_U32(ctx, 31, 0x1BA60Cu);
    ctx->pc = 0x1BA608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA604u;
    // 0x1ba608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA604u, 0x1BA60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA60Cu;
label_1ba60c:
    // 0x1ba60c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba610: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ba610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ba614: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba618: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba61c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA61Cu;
    SET_GPR_U32(ctx, 31, 0x1BA624u);
    ctx->pc = 0x1BA620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA61Cu;
    // 0x1ba620: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA61Cu, 0x1BA624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA624u;
label_1ba624:
    // 0x1ba624: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba628: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba62c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba62cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba630: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ba630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ba634: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA634u;
    {
        const bool branch_taken_0x1ba634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba634) {
            ctx->pc = 0x1BA644u;
            goto label_1ba644;
        }
    }
    ctx->pc = 0x1BA63Cu;
    // 0x1ba63c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA63Cu;
    SET_GPR_U32(ctx, 31, 0x1BA644u);
    ctx->pc = 0x1BA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA63Cu;
    // 0x1ba640: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA63Cu, 0x1BA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA644u;
label_1ba644:
    // 0x1ba644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba64c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ba64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ba650: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba654: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ba654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba65c: 0x10000206  b           . + 4 + (0x206 << 2)
    ctx->pc = 0x1BA65Cu;
    {
        const bool branch_taken_0x1ba65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA65Cu;
        // 0x1ba660: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba65c) {
            ctx->pc = 0x1BAE78u;
            goto label_1bae78;
        }
    }
    ctx->pc = 0x1BA664u;
label_1ba664:
    // 0x1ba664: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba668: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA668u;
    SET_GPR_U32(ctx, 31, 0x1BA670u);
    ctx->pc = 0x1BA66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA668u;
    // 0x1ba66c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA668u, 0x1BA670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA670u;
label_1ba670:
    // 0x1ba670: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba674: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ba674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ba678: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba67c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba67cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba680: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA680u;
    SET_GPR_U32(ctx, 31, 0x1BA688u);
    ctx->pc = 0x1BA684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA680u;
    // 0x1ba684: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA680u, 0x1BA688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA688u;
label_1ba688:
    // 0x1ba688: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba68c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba690: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba690u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba694: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ba694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ba698: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA698u;
    {
        const bool branch_taken_0x1ba698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba698) {
            ctx->pc = 0x1BA6A8u;
            goto label_1ba6a8;
        }
    }
    ctx->pc = 0x1BA6A0u;
    // 0x1ba6a0: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA6A0u;
    SET_GPR_U32(ctx, 31, 0x1BA6A8u);
    ctx->pc = 0x1BA6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6A0u;
    // 0x1ba6a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA6A0u, 0x1BA6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6A8u;
label_1ba6a8:
    // 0x1ba6a8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ba6a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ba6ac: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba6acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba6b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba6b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6b4: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1ba6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1ba6b8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba6b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba6bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba6bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba6c0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1ba6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1ba6c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba6c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba6c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba6cc: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x1BA6CCu;
    {
        const bool branch_taken_0x1ba6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA6CCu;
        // 0x1ba6d0: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba6cc) {
            ctx->pc = 0x1BAE78u;
            goto label_1bae78;
        }
    }
    ctx->pc = 0x1BA6D4u;
label_1ba6d4:
    // 0x1ba6d4: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba6d8: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA6D8u;
    SET_GPR_U32(ctx, 31, 0x1BA6E0u);
    ctx->pc = 0x1BA6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6D8u;
    // 0x1ba6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA6D8u, 0x1BA6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6E0u;
label_1ba6e0:
    // 0x1ba6e0: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba6e4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ba6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ba6e8: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba6ec: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba6f0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA6F0u;
    SET_GPR_U32(ctx, 31, 0x1BA6F8u);
    ctx->pc = 0x1BA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA6F0u;
    // 0x1ba6f4: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA6F0u, 0x1BA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6F8u;
label_1ba6f8:
    // 0x1ba6f8: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba6fc: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1ba6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1ba700: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba700u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba704: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x1BA704u;
    {
        const bool branch_taken_0x1ba704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA704u;
        // 0x1ba708: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba704) {
            ctx->pc = 0x1BAC8Cu;
            goto label_1bac8c;
        }
    }
    ctx->pc = 0x1BA70Cu;
label_1ba70c:
    // 0x1ba70c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba710: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA710u;
    SET_GPR_U32(ctx, 31, 0x1BA718u);
    ctx->pc = 0x1BA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA710u;
    // 0x1ba714: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA710u, 0x1BA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA718u;
label_1ba718:
    // 0x1ba718: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba71c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ba71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ba720: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba724: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba724u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba728: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA728u;
    SET_GPR_U32(ctx, 31, 0x1BA730u);
    ctx->pc = 0x1BA72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA728u;
    // 0x1ba72c: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA728u, 0x1BA730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA730u;
label_1ba730:
    // 0x1ba730: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba734: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1ba738: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba738u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba73c: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x1BA73Cu;
    {
        const bool branch_taken_0x1ba73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA73Cu;
        // 0x1ba740: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba73c) {
            ctx->pc = 0x1BAC8Cu;
            goto label_1bac8c;
        }
    }
    ctx->pc = 0x1BA744u;
label_1ba744:
    // 0x1ba744: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba748: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA748u;
    SET_GPR_U32(ctx, 31, 0x1BA750u);
    ctx->pc = 0x1BA74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA748u;
    // 0x1ba74c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA748u, 0x1BA750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA750u;
label_1ba750:
    // 0x1ba750: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba754: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1ba754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1ba758: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba75c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba75cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba760: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA760u;
    SET_GPR_U32(ctx, 31, 0x1BA768u);
    ctx->pc = 0x1BA764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA760u;
    // 0x1ba764: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA760u, 0x1BA768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA768u;
label_1ba768:
    // 0x1ba768: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba76c: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1ba76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1ba770: 0x1000034e  b           . + 4 + (0x34E << 2)
    ctx->pc = 0x1BA770u;
    {
        const bool branch_taken_0x1ba770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA770u;
        // 0x1ba774: 0xa4620046  sh          $v0, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba770) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BA778u;
label_1ba778:
    // 0x1ba778: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba77c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA77Cu;
    SET_GPR_U32(ctx, 31, 0x1BA784u);
    ctx->pc = 0x1BA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA77Cu;
    // 0x1ba780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA77Cu, 0x1BA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA784u;
label_1ba784:
    // 0x1ba784: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba788: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ba788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ba78c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba790: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba794: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA794u;
    SET_GPR_U32(ctx, 31, 0x1BA79Cu);
    ctx->pc = 0x1BA798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA794u;
    // 0x1ba798: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA794u, 0x1BA79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA79Cu;
label_1ba79c:
    // 0x1ba79c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba7a0: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1ba7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1ba7a4: 0x10000341  b           . + 4 + (0x341 << 2)
    ctx->pc = 0x1BA7A4u;
    {
        const bool branch_taken_0x1ba7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA7A4u;
        // 0x1ba7a8: 0xa4620046  sh          $v0, 0x46($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba7a4) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BA7ACu;
label_1ba7ac:
    // 0x1ba7ac: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba7b0: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA7B0u;
    SET_GPR_U32(ctx, 31, 0x1BA7B8u);
    ctx->pc = 0x1BA7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7B0u;
    // 0x1ba7b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA7B0u, 0x1BA7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7B8u;
label_1ba7b8:
    // 0x1ba7b8: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1ba7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba7bc: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba7c0: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1ba7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1ba7c4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA7C4u;
    SET_GPR_U32(ctx, 31, 0x1BA7CCu);
    ctx->pc = 0x1BA7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7C4u;
    // 0x1ba7c8: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA7C4u, 0x1BA7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7CCu;
label_1ba7cc:
    // 0x1ba7cc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba7d0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ba7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ba7d4: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba7d4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba7d8: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ba7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ba7dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA7DCu;
    {
        const bool branch_taken_0x1ba7dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba7dc) {
            ctx->pc = 0x1BA7ECu;
            goto label_1ba7ec;
        }
    }
    ctx->pc = 0x1BA7E4u;
    // 0x1ba7e4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA7E4u;
    SET_GPR_U32(ctx, 31, 0x1BA7ECu);
    ctx->pc = 0x1BA7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA7E4u;
    // 0x1ba7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA7E4u, 0x1BA7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA7ECu;
label_1ba7ec:
    // 0x1ba7ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ba7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ba7f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba7f4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ba7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ba7f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba7fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ba7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1ba800: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba804: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ba804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ba808: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1ba808u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ba80c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1ba80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ba810: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1ba810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1ba814: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1ba814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1ba818: 0x10000324  b           . + 4 + (0x324 << 2)
    ctx->pc = 0x1BA818u;
    {
        const bool branch_taken_0x1ba818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA818u;
        // 0x1ba81c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba818) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BA820u;
label_1ba820:
    // 0x1ba820: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba824: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA824u;
    SET_GPR_U32(ctx, 31, 0x1BA82Cu);
    ctx->pc = 0x1BA828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA824u;
    // 0x1ba828: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA824u, 0x1BA82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA82Cu;
label_1ba82c:
    // 0x1ba82c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba830: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ba830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ba834: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba838: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba83c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA83Cu;
    SET_GPR_U32(ctx, 31, 0x1BA844u);
    ctx->pc = 0x1BA840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA83Cu;
    // 0x1ba840: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA83Cu, 0x1BA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA844u;
label_1ba844:
    // 0x1ba844: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba848: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba84c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba84cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba850: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x1BA850u;
    {
        const bool branch_taken_0x1ba850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA850u;
        // 0x1ba854: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba850) {
            ctx->pc = 0x1BAC8Cu;
            goto label_1bac8c;
        }
    }
    ctx->pc = 0x1BA858u;
label_1ba858:
    // 0x1ba858: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba85c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA85Cu;
    SET_GPR_U32(ctx, 31, 0x1BA864u);
    ctx->pc = 0x1BA860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA85Cu;
    // 0x1ba860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA85Cu, 0x1BA864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA864u;
label_1ba864:
    // 0x1ba864: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba868: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ba868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ba86c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba870: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba874: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA874u;
    SET_GPR_U32(ctx, 31, 0x1BA87Cu);
    ctx->pc = 0x1BA878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA874u;
    // 0x1ba878: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA874u, 0x1BA87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA87Cu;
label_1ba87c:
    // 0x1ba87c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba87cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba880: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1ba880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba884: 0x240500f0  addiu       $a1, $zero, 0xF0
    ctx->pc = 0x1ba884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1ba888: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1ba888u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ba88c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1ba88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba890: 0xa4450044  sh          $a1, 0x44($v0)
    ctx->pc = 0x1ba890u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ba894: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1ba894u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1ba898: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ba898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ba89c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA89Cu;
    {
        const bool branch_taken_0x1ba89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba89c) {
            ctx->pc = 0x1BA8ACu;
            goto label_1ba8ac;
        }
    }
    ctx->pc = 0x1BA8A4u;
    // 0x1ba8a4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BA8A4u;
    SET_GPR_U32(ctx, 31, 0x1BA8ACu);
    ctx->pc = 0x1BA8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8A4u;
    // 0x1ba8a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BA8A4u, 0x1BA8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8ACu;
label_1ba8ac:
    // 0x1ba8ac: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ba8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ba8b0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba8b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba8b8: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1ba8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1ba8bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba8c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba8c4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1ba8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1ba8c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba8cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba8d0: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x1BA8D0u;
    {
        const bool branch_taken_0x1ba8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8D0u;
        // 0x1ba8d4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8d0) {
            ctx->pc = 0x1BAE78u;
            goto label_1bae78;
        }
    }
    ctx->pc = 0x1BA8D8u;
label_1ba8d8:
    // 0x1ba8d8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba8dc: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA8DCu;
    SET_GPR_U32(ctx, 31, 0x1BA8E4u);
    ctx->pc = 0x1BA8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8DCu;
    // 0x1ba8e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA8DCu, 0x1BA8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8E4u;
label_1ba8e4:
    // 0x1ba8e4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba8e8: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ba8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ba8ec: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba8f0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba8f4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA8F4u;
    SET_GPR_U32(ctx, 31, 0x1BA8FCu);
    ctx->pc = 0x1BA8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA8F4u;
    // 0x1ba8f8: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA8F4u, 0x1BA8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA8FCu;
label_1ba8fc:
    // 0x1ba8fc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba900: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba904: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba908: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x1BA908u;
    {
        const bool branch_taken_0x1ba908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA908u;
        // 0x1ba90c: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba908) {
            ctx->pc = 0x1BAC8Cu;
            goto label_1bac8c;
        }
    }
    ctx->pc = 0x1BA910u;
label_1ba910:
    // 0x1ba910: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba914: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA914u;
    SET_GPR_U32(ctx, 31, 0x1BA91Cu);
    ctx->pc = 0x1BA918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA914u;
    // 0x1ba918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA914u, 0x1BA91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA91Cu;
label_1ba91c:
    // 0x1ba91c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba920: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1ba920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ba924: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba928: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba92c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA92Cu;
    SET_GPR_U32(ctx, 31, 0x1BA934u);
    ctx->pc = 0x1BA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA92Cu;
    // 0x1ba930: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA92Cu, 0x1BA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA934u;
label_1ba934:
    // 0x1ba934: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba938: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba93c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba93cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba940: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x1BA940u;
    {
        const bool branch_taken_0x1ba940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA940u;
        // 0x1ba944: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba940) {
            ctx->pc = 0x1BAC8Cu;
            goto label_1bac8c;
        }
    }
    ctx->pc = 0x1BA948u;
label_1ba948:
    // 0x1ba948: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba94c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA94Cu;
    SET_GPR_U32(ctx, 31, 0x1BA954u);
    ctx->pc = 0x1BA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA94Cu;
    // 0x1ba950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA94Cu, 0x1BA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA954u;
label_1ba954:
    // 0x1ba954: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba958: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ba958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ba95c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba960: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba964: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA964u;
    SET_GPR_U32(ctx, 31, 0x1BA96Cu);
    ctx->pc = 0x1BA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA964u;
    // 0x1ba968: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA964u, 0x1BA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA96Cu;
label_1ba96c:
    // 0x1ba96c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba970: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba974: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ba974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ba978: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba978u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba97c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba97cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba980: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1ba980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1ba984: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba98c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1ba98cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1ba990: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba998: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1ba998u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ba99c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1ba99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ba9a0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1ba9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ba9a4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1ba9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ba9a8: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x1BA9A8u;
    {
        const bool branch_taken_0x1ba9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA9A8u;
        // 0x1ba9ac: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba9a8) {
            ctx->pc = 0x1BB440u;
            goto label_1bb440;
        }
    }
    ctx->pc = 0x1BA9B0u;
label_1ba9b0:
    // 0x1ba9b0: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ba9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba9b4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BA9B4u;
    SET_GPR_U32(ctx, 31, 0x1BA9BCu);
    ctx->pc = 0x1BA9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9B4u;
    // 0x1ba9b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BA9B4u, 0x1BA9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9BCu;
label_1ba9bc:
    // 0x1ba9bc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba9c0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1ba9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1ba9c4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1ba9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1ba9c8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1ba9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1ba9cc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BA9CCu;
    SET_GPR_U32(ctx, 31, 0x1BA9D4u);
    ctx->pc = 0x1BA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA9CCu;
    // 0x1ba9d0: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BA9CCu, 0x1BA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA9D4u;
label_1ba9d4:
    // 0x1ba9d4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1ba9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ba9d8: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1ba9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ba9dc: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1ba9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1ba9e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba9e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba9e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ba9e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ba9e8: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1ba9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1ba9ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba9f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba9f4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1ba9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1ba9f8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1ba9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1ba9fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ba9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baa00: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1baa00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baa04: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1baa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1baa08: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1baa08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1baa0c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1baa0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1baa10: 0x1000028b  b           . + 4 + (0x28B << 2)
    ctx->pc = 0x1BAA10u;
    {
        const bool branch_taken_0x1baa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA10u;
        // 0x1baa14: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa10) {
            ctx->pc = 0x1BB440u;
            goto label_1bb440;
        }
    }
    ctx->pc = 0x1BAA18u;
label_1baa18:
    // 0x1baa18: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baa1c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAA1Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA24u);
    ctx->pc = 0x1BAA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA1Cu;
    // 0x1baa20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAA1Cu, 0x1BAA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA24u;
label_1baa24:
    // 0x1baa24: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baa28: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1baa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1baa2c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1baa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1baa30: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1baa30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1baa34: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAA34u;
    SET_GPR_U32(ctx, 31, 0x1BAA3Cu);
    ctx->pc = 0x1BAA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA34u;
    // 0x1baa38: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAA34u, 0x1BAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA3Cu;
label_1baa3c:
    // 0x1baa3c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baa40: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1baa40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1baa44: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1baa44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1baa48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1baa48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1baa4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1baa4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baa50: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1baa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1baa54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1baa54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1baa58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1baa58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baa5c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1baa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1baa60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1baa60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1baa64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1baa64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1baa68: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1baa68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baa6c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1baa6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1baa70: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1baa70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1baa74: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1baa74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1baa78: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1baa78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1baa7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1baa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1baa80: 0x1000028a  b           . + 4 + (0x28A << 2)
    ctx->pc = 0x1BAA80u;
    {
        const bool branch_taken_0x1baa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAA80u;
        // 0x1baa84: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baa80) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BAA88u;
label_1baa88:
    // 0x1baa88: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baa8c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAA8Cu;
    SET_GPR_U32(ctx, 31, 0x1BAA94u);
    ctx->pc = 0x1BAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAA8Cu;
    // 0x1baa90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAA8Cu, 0x1BAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAA94u;
label_1baa94:
    // 0x1baa94: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baa98: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1baa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1baa9c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1baa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1baaa0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1baaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1baaa4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAAA4u;
    SET_GPR_U32(ctx, 31, 0x1BAAACu);
    ctx->pc = 0x1BAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAA4u;
    // 0x1baaa8: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAAA4u, 0x1BAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAACu;
label_1baaac:
    // 0x1baaac: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baab0: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1baab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1baab4: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1baab4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baab8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1BAAB8u;
    {
        const bool branch_taken_0x1baab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAAB8u;
        // 0x1baabc: 0x8e240608  lw          $a0, 0x608($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baab8) {
            ctx->pc = 0x1BAC8Cu;
            goto label_1bac8c;
        }
    }
    ctx->pc = 0x1BAAC0u;
label_1baac0:
    // 0x1baac0: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baac4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAAC4u;
    SET_GPR_U32(ctx, 31, 0x1BAACCu);
    ctx->pc = 0x1BAAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAAC4u;
    // 0x1baac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAAC4u, 0x1BAACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAACCu;
label_1baacc:
    // 0x1baacc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baad0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1baad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1baad4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1baad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1baad8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1baad8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1baadc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAADCu;
    SET_GPR_U32(ctx, 31, 0x1BAAE4u);
    ctx->pc = 0x1BAAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAADCu;
    // 0x1baae0: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAADCu, 0x1BAAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAAE4u;
label_1baae4:
    // 0x1baae4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baae8: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1baae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1baaec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1baaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1baaf0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1baaf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1baaf4: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1baaf4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baaf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1baaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1baafc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1baafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bab00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bab04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bab08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bab0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bab0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bab10: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1bab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1bab14: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1bab14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bab18: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1bab18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bab1c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1bab1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bab20: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1bab20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bab24: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1BAB24u;
    {
        const bool branch_taken_0x1bab24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB24u;
        // 0x1bab28: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab24) {
            ctx->pc = 0x1BAC88u;
            goto label_1bac88;
        }
    }
    ctx->pc = 0x1BAB2Cu;
label_1bab2c:
    // 0x1bab2c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bab2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bab30: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAB30u;
    SET_GPR_U32(ctx, 31, 0x1BAB38u);
    ctx->pc = 0x1BAB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB30u;
    // 0x1bab34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAB30u, 0x1BAB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB38u;
label_1bab38:
    // 0x1bab38: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bab38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bab3c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bab40: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bab40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bab44: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bab44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bab48: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAB48u;
    SET_GPR_U32(ctx, 31, 0x1BAB50u);
    ctx->pc = 0x1BAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB48u;
    // 0x1bab4c: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAB48u, 0x1BAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAB50u;
label_1bab50:
    // 0x1bab50: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bab54: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1bab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bab58: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bab58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1bab5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bab5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bab60: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bab60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bab64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bab64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bab68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bab68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bab6c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bab6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bab70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bab70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bab74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bab74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bab78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bab78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bab7c: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1bab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1bab80: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1bab80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bab84: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1bab84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bab88: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1bab88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bab8c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1bab8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bab90: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1BAB90u;
    {
        const bool branch_taken_0x1bab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAB90u;
        // 0x1bab94: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bab90) {
            ctx->pc = 0x1BAC88u;
            goto label_1bac88;
        }
    }
    ctx->pc = 0x1BAB98u;
label_1bab98:
    // 0x1bab98: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bab9c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BABA4u);
    ctx->pc = 0x1BABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAB9Cu;
    // 0x1baba0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAB9Cu, 0x1BABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABA4u;
label_1baba4:
    // 0x1baba4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baba8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1baba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1babac: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1babacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1babb0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1babb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1babb4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BABB4u;
    SET_GPR_U32(ctx, 31, 0x1BABBCu);
    ctx->pc = 0x1BABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABB4u;
    // 0x1babb8: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BABB4u, 0x1BABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABBCu;
label_1babbc:
    // 0x1babbc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1babbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1babc0: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1babc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1babc4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1babc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1babc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1babc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1babcc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1BABCCu;
    {
        const bool branch_taken_0x1babcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BABCCu;
        // 0x1babd0: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1babcc) {
            ctx->pc = 0x1BAC48u;
            goto label_1bac48;
        }
    }
    ctx->pc = 0x1BABD4u;
label_1babd4:
    // 0x1babd4: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1babd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1babd8: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BABD8u;
    SET_GPR_U32(ctx, 31, 0x1BABE0u);
    ctx->pc = 0x1BABDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABD8u;
    // 0x1babdc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BABD8u, 0x1BABE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABE0u;
label_1babe0:
    // 0x1babe0: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1babe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1babe4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1babe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1babe8: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1babe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1babec: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1babecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1babf0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BABF0u;
    SET_GPR_U32(ctx, 31, 0x1BABF8u);
    ctx->pc = 0x1BABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BABF0u;
    // 0x1babf4: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BABF0u, 0x1BABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BABF8u;
label_1babf8:
    // 0x1babf8: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1babf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1babfc: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1babfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1bac00: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bac00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bac04: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bac04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1bac08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BAC08u;
    {
        const bool branch_taken_0x1bac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC08u;
        // 0x1bac0c: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac08) {
            ctx->pc = 0x1BAC48u;
            goto label_1bac48;
        }
    }
    ctx->pc = 0x1BAC10u;
label_1bac10:
    // 0x1bac10: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bac14: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAC14u;
    SET_GPR_U32(ctx, 31, 0x1BAC1Cu);
    ctx->pc = 0x1BAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC14u;
    // 0x1bac18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAC14u, 0x1BAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC1Cu;
label_1bac1c:
    // 0x1bac1c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bac20: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1bac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1bac24: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bac28: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bac28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bac2c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAC2Cu;
    SET_GPR_U32(ctx, 31, 0x1BAC34u);
    ctx->pc = 0x1BAC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC2Cu;
    // 0x1bac30: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAC2Cu, 0x1BAC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC34u;
label_1bac34:
    // 0x1bac34: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bac38: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1bac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bac3c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1bac40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bac40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bac44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1bac44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1bac48:
    // 0x1bac48: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bac48u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bac4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bac4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1bac50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bac50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bac54: 0x3c014006  lui         $at, 0x4006
    ctx->pc = 0x1bac54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16390 << 16));
    // 0x1bac58: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1bac58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1bac5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bac5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac60: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bac60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bac64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bac64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bac68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bac68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bac6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bac6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bac70: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1bac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1bac74: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1bac74u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bac78: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x1bac78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bac7c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1bac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bac80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1bac80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bac84: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1bac84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1bac88:
    // 0x1bac88: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bac88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1bac8c:
    // 0x1bac8c: 0x50800208  beql        $a0, $zero, . + 4 + (0x208 << 2)
    ctx->pc = 0x1BAC8Cu;
    {
        const bool branch_taken_0x1bac8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac8c) {
            ctx->pc = 0x1BAC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BAC8Cu;
            // 0x1bac90: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BB4B0u;
            goto label_1bb4b0;
        }
    }
    ctx->pc = 0x1BAC94u;
    // 0x1bac94: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BAC94u;
    SET_GPR_U32(ctx, 31, 0x1BAC9Cu);
    ctx->pc = 0x1BAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAC94u;
    // 0x1bac98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BAC94u, 0x1BAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAC9Cu;
label_1bac9c:
    // 0x1bac9c: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x1BAC9Cu;
    {
        const bool branch_taken_0x1bac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAC9Cu;
        // 0x1baca0: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bac9c) {
            ctx->pc = 0x1BB4B0u;
            goto label_1bb4b0;
        }
    }
    ctx->pc = 0x1BACA4u;
label_1baca4:
    // 0x1baca4: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1baca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bacac: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BACACu;
    SET_GPR_U32(ctx, 31, 0x1BACB4u);
    ctx->pc = 0x1BACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACACu;
    // 0x1bacb0: 0x26300100  addiu       $s0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BACACu, 0x1BACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACB4u;
label_1bacb4:
    // 0x1bacb4: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bacb8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1bacb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bacbc: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x1bacbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x1bacc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bacc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bacc4: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1bacc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bacc8: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1bacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baccc: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1bacccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1bacd0: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BACD0u;
    SET_GPR_U32(ctx, 31, 0x1BACD8u);
    ctx->pc = 0x1BACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BACD0u;
    // 0x1bacd4: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BACD0u, 0x1BACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACD8u;
label_1bacd8:
    // 0x1bacd8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1bacd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bacdc: 0x12500007  beq         $s2, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BACDCu;
    {
        const bool branch_taken_0x1bacdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x1bacdc) {
            ctx->pc = 0x1BACFCu;
            goto label_1bacfc;
        }
    }
    ctx->pc = 0x1BACE4u;
    // 0x1bace4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bace4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bace8: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1bace8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacec: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1bacecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bacf0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1bacf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1bacf4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1bacf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bacf8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bacf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bacfc:
    // 0x1bacfc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1BACFCu;
    SET_GPR_U32(ctx, 31, 0x1BAD04u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1BACFCu, 0x1BAD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD04u;
label_1bad04:
    // 0x1bad04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bad04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bad08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAD08u;
    {
        const bool branch_taken_0x1bad08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD08u;
        // 0x1bad0c: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad08) {
            ctx->pc = 0x1BAD24u;
            goto label_1bad24;
        }
    }
    ctx->pc = 0x1BAD10u;
    // 0x1bad10: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x1bad10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x1bad14: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1bad14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1bad18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bad18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bad1c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1BAD1Cu;
    {
        const bool branch_taken_0x1bad1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD1Cu;
        // 0x1bad20: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad1c) {
            ctx->pc = 0x1BAE40u;
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BAD24u;
label_1bad24:
    // 0x1bad24: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x1bad24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x1bad28: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x1bad28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x1bad2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bad2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bad30: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1BAD30u;
    {
        const bool branch_taken_0x1bad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD30u;
        // 0x1bad34: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad30) {
            ctx->pc = 0x1BAE40u;
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BAD38u;
label_1bad38:
    // 0x1bad38: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bad3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bad3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad40: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAD40u;
    SET_GPR_U32(ctx, 31, 0x1BAD48u);
    ctx->pc = 0x1BAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD40u;
    // 0x1bad44: 0x26300100  addiu       $s0, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAD40u, 0x1BAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD48u;
label_1bad48:
    // 0x1bad48: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bad48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bad4c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1bad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1bad50: 0x240607d0  addiu       $a2, $zero, 0x7D0
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x1bad54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bad54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bad58: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1bad58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bad5c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1bad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bad60: 0xac46004c  sw          $a2, 0x4C($v0)
    ctx->pc = 0x1bad60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 6));
    // 0x1bad64: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAD64u;
    SET_GPR_U32(ctx, 31, 0x1BAD6Cu);
    ctx->pc = 0x1BAD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAD64u;
    // 0x1bad68: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAD64u, 0x1BAD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD6Cu;
label_1bad6c:
    // 0x1bad6c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1bad6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bad70: 0x12500007  beq         $s2, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAD70u;
    {
        const bool branch_taken_0x1bad70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x1bad70) {
            ctx->pc = 0x1BAD90u;
            goto label_1bad90;
        }
    }
    ctx->pc = 0x1BAD78u;
    // 0x1bad78: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bad7c: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1bad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad80: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1bad80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bad84: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1bad84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1bad88: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1bad88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bad8c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bad8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bad90:
    // 0x1bad90: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1BAD90u;
    SET_GPR_U32(ctx, 31, 0x1BAD98u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1BAD90u, 0x1BAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAD98u;
label_1bad98:
    // 0x1bad98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bad98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bad9c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BAD9Cu;
    {
        const bool branch_taken_0x1bad9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAD9Cu;
        // 0x1bada0: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad9c) {
            ctx->pc = 0x1BAE28u;
            goto label_1bae28;
        }
    }
    ctx->pc = 0x1BADA4u;
    // 0x1bada4: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1bada4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1bada8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bada8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1badac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1badacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1badb0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1BADB0u;
    {
        const bool branch_taken_0x1badb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADB0u;
        // 0x1badb4: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badb0) {
            ctx->pc = 0x1BAE40u;
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BADB8u;
label_1badb8:
    // 0x1badb8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1badb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1badbc: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BADBCu;
    SET_GPR_U32(ctx, 31, 0x1BADC4u);
    ctx->pc = 0x1BADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BADBCu;
    // 0x1badc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BADBCu, 0x1BADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BADC4u;
label_1badc4:
    // 0x1badc4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1badc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1badc8: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1badc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1badcc: 0x24040118  addiu       $a0, $zero, 0x118
    ctx->pc = 0x1badccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1badd0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1badd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1badd4: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1badd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1badd8: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1badd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1baddc: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1baddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bade0: 0x12450007  beq         $s2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADE0u;
    {
        const bool branch_taken_0x1bade0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BADE0u;
        // 0x1bade4: 0xac44004c  sw          $a0, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bade0) {
            ctx->pc = 0x1BAE00u;
            goto label_1bae00;
        }
    }
    ctx->pc = 0x1BADE8u;
    // 0x1bade8: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x1bade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1badec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1badecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1badf0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1badf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badf4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1badf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1badf8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1badf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1badfc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1badfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bae00:
    // 0x1bae00: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1BAE00u;
    SET_GPR_U32(ctx, 31, 0x1BAE08u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1BAE00u, 0x1BAE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE08u;
label_1bae08:
    // 0x1bae08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bae08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bae0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAE0Cu;
    {
        const bool branch_taken_0x1bae0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE0Cu;
        // 0x1bae10: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae0c) {
            ctx->pc = 0x1BAE28u;
            goto label_1bae28;
        }
    }
    ctx->pc = 0x1BAE14u;
    // 0x1bae14: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1bae18: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bae18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1bae1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bae1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bae20: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE20u;
    {
        const bool branch_taken_0x1bae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE20u;
        // 0x1bae24: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae20) {
            ctx->pc = 0x1BAE40u;
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BAE28u;
label_1bae28:
    // 0x1bae28: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1bae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bae2c: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1bae2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1bae30: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bae30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1bae34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bae34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bae38: 0x0  nop
    ctx->pc = 0x1bae38u;
    // NOP
    // 0x1bae3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bae3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1bae40:
    // 0x1bae40: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bae40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bae44: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BAE44u;
    SET_GPR_U32(ctx, 31, 0x1BAE4Cu);
    ctx->pc = 0x1BAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE44u;
    // 0x1bae48: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BAE44u, 0x1BAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE4Cu;
label_1bae4c:
    // 0x1bae4c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bae50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bae50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bae54: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAE54u;
    SET_GPR_U32(ctx, 31, 0x1BAE5Cu);
    ctx->pc = 0x1BAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE54u;
    // 0x1bae58: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAE54u, 0x1BAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE5Cu;
label_1bae5c:
    // 0x1bae5c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bae5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bae60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bae60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bae64: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1bae64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1bae68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bae68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bae6c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bae70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bae70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bae74: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1bae74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1bae78:
    // 0x1bae78: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1bae78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bae7c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1bae7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bae80: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1bae80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1bae84: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1bae88: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x1BAE88u;
    {
        const bool branch_taken_0x1bae88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE88u;
        // 0x1bae8c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae88) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BAE90u;
label_1bae90:
    // 0x1bae90: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bae90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bae94: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAE94u;
    SET_GPR_U32(ctx, 31, 0x1BAE9Cu);
    ctx->pc = 0x1BAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAE94u;
    // 0x1bae98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAE94u, 0x1BAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAE9Cu;
label_1bae9c:
    // 0x1bae9c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baea0: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1baea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1baea4: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1baea8: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1baea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1baeac: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1baeacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baeb0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1baeb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1baeb4: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1baeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baeb8: 0x12450007  beq         $s2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAEB8u;
    {
        const bool branch_taken_0x1baeb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEB8u;
        // 0x1baebc: 0xac44004c  sw          $a0, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baeb8) {
            ctx->pc = 0x1BAED8u;
            goto label_1baed8;
        }
    }
    ctx->pc = 0x1BAEC0u;
    // 0x1baec0: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x1baec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baec4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1baec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1baec8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1baec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baecc: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1baeccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1baed0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1baed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baed4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1baed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1baed8:
    // 0x1baed8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1BAED8u;
    SET_GPR_U32(ctx, 31, 0x1BAEE0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1BAED8u, 0x1BAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAEE0u;
label_1baee0:
    // 0x1baee0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1baee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1baee4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAEE4u;
    {
        const bool branch_taken_0x1baee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEE4u;
        // 0x1baee8: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baee4) {
            ctx->pc = 0x1BAF00u;
            goto label_1baf00;
        }
    }
    ctx->pc = 0x1BAEECu;
    // 0x1baeec: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1baeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1baef0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1baef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1baef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1baef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baef8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAEF8u;
    {
        const bool branch_taken_0x1baef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAEF8u;
        // 0x1baefc: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baef8) {
            ctx->pc = 0x1BAF14u;
            goto label_1baf14;
        }
    }
    ctx->pc = 0x1BAF00u;
label_1baf00:
    // 0x1baf00: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1baf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1baf04: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1baf04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1baf08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1baf08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baf0c: 0x0  nop
    ctx->pc = 0x1baf0cu;
    // NOP
    // 0x1baf10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1baf10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1baf14:
    // 0x1baf14: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1baf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1baf18: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BAF18u;
    SET_GPR_U32(ctx, 31, 0x1BAF20u);
    ctx->pc = 0x1BAF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF18u;
    // 0x1baf1c: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BAF18u, 0x1BAF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF20u;
label_1baf20:
    // 0x1baf20: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baf24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1baf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf28: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BAF28u;
    SET_GPR_U32(ctx, 31, 0x1BAF30u);
    ctx->pc = 0x1BAF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF28u;
    // 0x1baf2c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BAF28u, 0x1BAF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF30u;
label_1baf30:
    // 0x1baf30: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x1baf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x1baf34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1baf34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf38: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1baf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1baf3c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1baf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1baf40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1baf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baf44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1baf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1baf48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1baf48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1baf4c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1baf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1baf50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1baf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1baf54: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1baf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1baf58: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1baf58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1baf5c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1baf5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1baf60: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1baf60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1baf64: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x1BAF64u;
    {
        const bool branch_taken_0x1baf64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF64u;
        // 0x1baf68: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf64) {
            ctx->pc = 0x1BB4A8u;
            goto label_1bb4a8;
        }
    }
    ctx->pc = 0x1BAF6Cu;
label_1baf6c:
    // 0x1baf6c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baf70: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BAF70u;
    SET_GPR_U32(ctx, 31, 0x1BAF78u);
    ctx->pc = 0x1BAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF70u;
    // 0x1baf74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BAF70u, 0x1BAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF78u;
label_1baf78:
    // 0x1baf78: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baf7c: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1baf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1baf80: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x1baf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1baf84: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1baf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1baf88: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1baf88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1baf8c: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x1baf8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1baf90: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1baf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1baf94: 0x12450007  beq         $s2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAF94u;
    {
        const bool branch_taken_0x1baf94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x1BAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF94u;
        // 0x1baf98: 0xac44004c  sw          $a0, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf94) {
            ctx->pc = 0x1BAFB4u;
            goto label_1bafb4;
        }
    }
    ctx->pc = 0x1BAF9Cu;
    // 0x1baf9c: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x1baf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bafa0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1bafa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1bafa4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1bafa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bafa8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1bafa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bafac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1bafacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bafb0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bafb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bafb4:
    // 0x1bafb4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1BAFB4u;
    SET_GPR_U32(ctx, 31, 0x1BAFBCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1BAFB4u, 0x1BAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFBCu;
label_1bafbc:
    // 0x1bafbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1bafc0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAFC0u;
    {
        const bool branch_taken_0x1bafc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFC0u;
        // 0x1bafc4: 0xc7a00054  lwc1        $f0, 0x54($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafc0) {
            ctx->pc = 0x1BAFDCu;
            goto label_1bafdc;
        }
    }
    ctx->pc = 0x1BAFC8u;
    // 0x1bafc8: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1bafc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1bafcc: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bafccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1bafd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bafd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bafd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BAFD4u;
    {
        const bool branch_taken_0x1bafd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAFD4u;
        // 0x1bafd8: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bafd4) {
            ctx->pc = 0x1BAFF0u;
            goto label_1baff0;
        }
    }
    ctx->pc = 0x1BAFDCu;
label_1bafdc:
    // 0x1bafdc: 0x3c013e32  lui         $at, 0x3E32
    ctx->pc = 0x1bafdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15922 << 16));
    // 0x1bafe0: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1bafe0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1bafe4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bafe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bafe8: 0x0  nop
    ctx->pc = 0x1bafe8u;
    // NOP
    // 0x1bafec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bafecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1baff0:
    // 0x1baff0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1baff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1baff4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1BAFF4u;
    SET_GPR_U32(ctx, 31, 0x1BAFFCu);
    ctx->pc = 0x1BAFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFF4u;
    // 0x1baff8: 0xc7ac0054  lwc1        $f12, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1BAFF4u, 0x1BAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFFCu;
label_1baffc:
    // 0x1baffc: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1baffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb000: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bb000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb004: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB004u;
    SET_GPR_U32(ctx, 31, 0x1BB00Cu);
    ctx->pc = 0x1BB008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB004u;
    // 0x1bb008: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB004u, 0x1BB00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB00Cu;
label_1bb00c:
    // 0x1bb00c: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x1bb00cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x1bb010: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb014: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1bb018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb01c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bb01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb020: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb024: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb028: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb02c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1bb02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bb030: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1bb030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb034: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1bb034u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb038: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1bb038u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb03c: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x1BB03Cu;
    {
        const bool branch_taken_0x1bb03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB03Cu;
        // 0x1bb040: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb03c) {
            ctx->pc = 0x1BB4A8u;
            goto label_1bb4a8;
        }
    }
    ctx->pc = 0x1BB044u;
label_1bb044:
    // 0x1bb044: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb048: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB048u;
    SET_GPR_U32(ctx, 31, 0x1BB050u);
    ctx->pc = 0x1BB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB048u;
    // 0x1bb04c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB048u, 0x1BB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB050u;
label_1bb050:
    // 0x1bb050: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb054: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x1bb054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1bb058: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1bb058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x1bb05c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1bb05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1bb060: 0xa4830046  sh          $v1, 0x46($a0)
    ctx->pc = 0x1bb060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bb064: 0x26260100  addiu       $a2, $s1, 0x100
    ctx->pc = 0x1bb064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb068: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1bb068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb06c: 0x10e60007  beq         $a3, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB06Cu;
    {
        const bool branch_taken_0x1bb06c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1BB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB06Cu;
        // 0x1bb070: 0xac45004c  sw          $a1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb06c) {
            ctx->pc = 0x1BB08Cu;
            goto label_1bb08c;
        }
    }
    ctx->pc = 0x1BB074u;
    // 0x1bb074: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x1bb074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb078: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1bb078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1bb07c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1bb07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb080: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x1bb080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1bb084: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1bb084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb088: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1bb088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1bb08c:
    // 0x1bb08c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb090: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB090u;
    SET_GPR_U32(ctx, 31, 0x1BB098u);
    ctx->pc = 0x1BB094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB090u;
    // 0x1bb094: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB090u, 0x1BB098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB098u;
label_1bb098:
    // 0x1bb098: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1bb098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1bb09c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb09cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb0a0: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1bb0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1bb0a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb0a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb0ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb0b0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb0b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb0b8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1bb0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bb0bc: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1bb0bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb0c0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1bb0c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb0c4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1bb0c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb0c8: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x1BB0C8u;
    {
        const bool branch_taken_0x1bb0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB0C8u;
        // 0x1bb0cc: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb0c8) {
            ctx->pc = 0x1BB4A8u;
            goto label_1bb4a8;
        }
    }
    ctx->pc = 0x1BB0D0u;
label_1bb0d0:
    // 0x1bb0d0: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb0d4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB0D4u;
    SET_GPR_U32(ctx, 31, 0x1BB0DCu);
    ctx->pc = 0x1BB0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0D4u;
    // 0x1bb0d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB0D4u, 0x1BB0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0DCu;
label_1bb0dc:
    // 0x1bb0dc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb0e0: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1bb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1bb0e4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb0e8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb0ec: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB0ECu;
    SET_GPR_U32(ctx, 31, 0x1BB0F4u);
    ctx->pc = 0x1BB0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB0ECu;
    // 0x1bb0f0: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB0ECu, 0x1BB0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB0F4u;
label_1bb0f4:
    // 0x1bb0f4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb0f8: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1bb0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bb0fc: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1bb0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1bb100: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bb100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bb104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb108: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bb108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bb10c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb10cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb110: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1bb114: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bb114u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bb118: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb11c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb120: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb124: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb124u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb128: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1bb128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bb12c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1bb12cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb130: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1bb130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb134: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1bb134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb138: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1BB138u;
    {
        const bool branch_taken_0x1bb138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB138u;
        // 0x1bb13c: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb138) {
            ctx->pc = 0x1BB4A8u;
            goto label_1bb4a8;
        }
    }
    ctx->pc = 0x1BB140u;
label_1bb140:
    // 0x1bb140: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb144: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB144u;
    SET_GPR_U32(ctx, 31, 0x1BB14Cu);
    ctx->pc = 0x1BB148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB144u;
    // 0x1bb148: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB144u, 0x1BB14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB14Cu;
label_1bb14c:
    // 0x1bb14c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb150: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb154: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb158: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb158u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb15c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB15Cu;
    SET_GPR_U32(ctx, 31, 0x1BB164u);
    ctx->pc = 0x1BB160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB15Cu;
    // 0x1bb160: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB15Cu, 0x1BB164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB164u;
label_1bb164:
    // 0x1bb164: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb168: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1bb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bb16c: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x1bb16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x1bb170: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bb170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bb174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb178: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bb178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bb17c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb180: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1bb180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1bb184: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bb184u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bb188: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb18c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb190: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb194: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb194u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb198: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1bb198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bb19c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1bb19cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb1a0: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1bb1a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb1a4: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x1bb1a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb1a8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x1BB1A8u;
    {
        const bool branch_taken_0x1bb1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB1A8u;
        // 0x1bb1ac: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb1a8) {
            ctx->pc = 0x1BB4A8u;
            goto label_1bb4a8;
        }
    }
    ctx->pc = 0x1BB1B0u;
label_1bb1b0:
    // 0x1bb1b0: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb1b4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB1B4u;
    SET_GPR_U32(ctx, 31, 0x1BB1BCu);
    ctx->pc = 0x1BB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1B4u;
    // 0x1bb1b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB1B4u, 0x1BB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1BCu;
label_1bb1bc:
    // 0x1bb1bc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb1c0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1bb1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1bb1c4: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb1c8: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb1cc: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB1CCu;
    SET_GPR_U32(ctx, 31, 0x1BB1D4u);
    ctx->pc = 0x1BB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1CCu;
    // 0x1bb1d0: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB1CCu, 0x1BB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1D4u;
label_1bb1d4:
    // 0x1bb1d4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb1d8: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1bb1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1bb1dc: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb1dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb1e0: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1bb1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1bb1e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB1E4u;
    {
        const bool branch_taken_0x1bb1e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb1e4) {
            ctx->pc = 0x1BB1F4u;
            goto label_1bb1f4;
        }
    }
    ctx->pc = 0x1BB1ECu;
    // 0x1bb1ec: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BB1ECu;
    SET_GPR_U32(ctx, 31, 0x1BB1F4u);
    ctx->pc = 0x1BB1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB1ECu;
    // 0x1bb1f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BB1ECu, 0x1BB1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB1F4u;
label_1bb1f4:
    // 0x1bb1f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb1f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb1f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb1fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb200: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb200u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb204: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1bb204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb208: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1bb208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb20c: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1BB20Cu;
    {
        const bool branch_taken_0x1bb20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB20Cu;
        // 0x1bb210: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb20c) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BB214u;
label_1bb214:
    // 0x1bb214: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb218: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB218u;
    SET_GPR_U32(ctx, 31, 0x1BB220u);
    ctx->pc = 0x1BB21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB218u;
    // 0x1bb21c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB218u, 0x1BB220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB220u;
label_1bb220:
    // 0x1bb220: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1bb220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb224: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb228: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1bb228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1bb22c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB22Cu;
    SET_GPR_U32(ctx, 31, 0x1BB234u);
    ctx->pc = 0x1BB230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB22Cu;
    // 0x1bb230: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB22Cu, 0x1BB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB234u;
label_1bb234:
    // 0x1bb234: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb238: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bb23c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb240: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb244: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bb244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1bb248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb24c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb24cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb250: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1bb250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb254: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1bb254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb258: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x1BB258u;
    {
        const bool branch_taken_0x1bb258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB258u;
        // 0x1bb25c: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb258) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BB260u;
label_1bb260:
    // 0x1bb260: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb264: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB264u;
    SET_GPR_U32(ctx, 31, 0x1BB26Cu);
    ctx->pc = 0x1BB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB264u;
    // 0x1bb268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB264u, 0x1BB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB26Cu;
label_1bb26c:
    // 0x1bb26c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb270: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb274: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb278: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb27c: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB27Cu;
    SET_GPR_U32(ctx, 31, 0x1BB284u);
    ctx->pc = 0x1BB280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB27Cu;
    // 0x1bb280: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB27Cu, 0x1BB284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB284u;
label_1bb284:
    // 0x1bb284: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb288: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1bb288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1bb28c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb28cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb290: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb294: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb298: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1bb298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x1bb29c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb2a0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1BB2A0u;
    {
        const bool branch_taken_0x1bb2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2A0u;
        // 0x1bb2a4: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2a0) {
            ctx->pc = 0x1BB490u;
            goto label_1bb490;
        }
    }
    ctx->pc = 0x1BB2A8u;
label_1bb2a8:
    // 0x1bb2a8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb2ac: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB2ACu;
    SET_GPR_U32(ctx, 31, 0x1BB2B4u);
    ctx->pc = 0x1BB2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2ACu;
    // 0x1bb2b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB2ACu, 0x1BB2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2B4u;
label_1bb2b4:
    // 0x1bb2b4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb2b8: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb2bc: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb2c0: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb2c4: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB2C4u;
    SET_GPR_U32(ctx, 31, 0x1BB2CCu);
    ctx->pc = 0x1BB2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2C4u;
    // 0x1bb2c8: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB2C4u, 0x1BB2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2CCu;
label_1bb2cc:
    // 0x1bb2cc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb2d0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1bb2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x1bb2d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb2d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb2d8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb2dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb2e0: 0x3c01425c  lui         $at, 0x425C
    ctx->pc = 0x1bb2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16988 << 16));
    // 0x1bb2e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb2e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb2e8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1BB2E8u;
    {
        const bool branch_taken_0x1bb2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2E8u;
        // 0x1bb2ec: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2e8) {
            ctx->pc = 0x1BB490u;
            goto label_1bb490;
        }
    }
    ctx->pc = 0x1BB2F0u;
label_1bb2f0:
    // 0x1bb2f0: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb2f4: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB2F4u;
    SET_GPR_U32(ctx, 31, 0x1BB2FCu);
    ctx->pc = 0x1BB2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB2F4u;
    // 0x1bb2f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB2F4u, 0x1BB2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB2FCu;
label_1bb2fc:
    // 0x1bb2fc: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb300: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1bb300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bb304: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bb304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bb308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb30c: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x1bb30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bb310: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb314: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb318: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb31c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1bb31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb320: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1BB320u;
    {
        const bool branch_taken_0x1bb320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB320u;
        // 0x1bb324: 0xa4440046  sh          $a0, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb320) {
            ctx->pc = 0x1BB3CCu;
            goto label_1bb3cc;
        }
    }
    ctx->pc = 0x1BB328u;
label_1bb328:
    // 0x1bb328: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb32c: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB32Cu;
    SET_GPR_U32(ctx, 31, 0x1BB334u);
    ctx->pc = 0x1BB330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB32Cu;
    // 0x1bb330: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB32Cu, 0x1BB334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB334u;
label_1bb334:
    // 0x1bb334: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb338: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1bb338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bb33c: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb340: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb344: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB344u;
    SET_GPR_U32(ctx, 31, 0x1BB34Cu);
    ctx->pc = 0x1BB348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB344u;
    // 0x1bb348: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB344u, 0x1BB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB34Cu;
label_1bb34c:
    // 0x1bb34c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb350: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1bb350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bb354: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bb354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bb358: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb35c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x1bb35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x1bb360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb364: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb368: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb36c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1bb36cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1bb370: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bb370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb374: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb374u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb378: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bb378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1bb37c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1bb37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb380: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1bb380u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb384: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1BB384u;
    {
        const bool branch_taken_0x1bb384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB384u;
        // 0x1bb388: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb384) {
            ctx->pc = 0x1BB4A4u;
            goto label_1bb4a4;
        }
    }
    ctx->pc = 0x1BB38Cu;
label_1bb38c:
    // 0x1bb38c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb390: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB390u;
    SET_GPR_U32(ctx, 31, 0x1BB398u);
    ctx->pc = 0x1BB394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB390u;
    // 0x1bb394: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB390u, 0x1BB398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB398u;
label_1bb398:
    // 0x1bb398: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb39c: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1bb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bb3a0: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb3a4: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb3a8: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB3A8u;
    SET_GPR_U32(ctx, 31, 0x1BB3B0u);
    ctx->pc = 0x1BB3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3A8u;
    // 0x1bb3ac: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB3A8u, 0x1BB3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3B0u;
label_1bb3b0:
    // 0x1bb3b0: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb3b4: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1bb3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bb3b8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bb3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb3bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb3bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb3c0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb3c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb3c8: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
label_1bb3cc:
    // 0x1bb3cc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1bb3ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb3d0: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1bb3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb3d4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1bb3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x1bb3d8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1bb3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x1bb3dc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bb3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1bb3e0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1BB3E0u;
    {
        const bool branch_taken_0x1bb3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB3E0u;
        // 0x1bb3e4: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3e0) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BB3E8u;
label_1bb3e8:
    // 0x1bb3e8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb3ec: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB3ECu;
    SET_GPR_U32(ctx, 31, 0x1BB3F4u);
    ctx->pc = 0x1BB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB3ECu;
    // 0x1bb3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB3ECu, 0x1BB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB3F4u;
label_1bb3f4:
    // 0x1bb3f4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb3f8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1bb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1bb3fc: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb400: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb404: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB404u;
    SET_GPR_U32(ctx, 31, 0x1BB40Cu);
    ctx->pc = 0x1BB408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB404u;
    // 0x1bb408: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB404u, 0x1BB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB40Cu;
label_1bb40c:
    // 0x1bb40c: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb410: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1bb410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bb414: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bb414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bb418: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb41c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bb41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bb420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bb424: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb42c: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb42cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb430: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1bb430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1bb434: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1bb434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb438: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1bb438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb43c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1bb43cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bb440:
    // 0x1bb440: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bb440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1bb444: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1BB444u;
    {
        const bool branch_taken_0x1bb444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB444u;
        // 0x1bb448: 0xe7a20040  swc1        $f2, 0x40($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb444) {
            ctx->pc = 0x1BB4ACu;
            goto label_1bb4ac;
        }
    }
    ctx->pc = 0x1BB44Cu;
label_1bb44c:
    // 0x1bb44c: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb450: 0xc07f662  jal         func_1FD988
    ctx->pc = 0x1BB450u;
    SET_GPR_U32(ctx, 31, 0x1BB458u);
    ctx->pc = 0x1BB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB450u;
    // 0x1bb454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD988u, 0x1BB450u, 0x1BB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB458u;
label_1bb458:
    // 0x1bb458: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb45c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb460: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1bb460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x1bb464: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x1bb464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x1bb468: 0xc07f4ce  jal         func_1FD338
    ctx->pc = 0x1BB468u;
    SET_GPR_U32(ctx, 31, 0x1BB470u);
    ctx->pc = 0x1BB46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB468u;
    // 0x1bb46c: 0x8e240600  lw          $a0, 0x600($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD338u, 0x1BB468u, 0x1BB470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB470u;
label_1bb470:
    // 0x1bb470: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb474: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1bb474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1bb478: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1bb478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1bb47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb480: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bb480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bb484: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bb484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb488: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1bb48c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bb48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bb490:
    // 0x1bb490: 0xa4620046  sh          $v0, 0x46($v1)
    ctx->pc = 0x1bb490u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bb494: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1bb494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1bb498: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1bb498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1bb49c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1bb49cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1bb4a0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1bb4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1bb4a4:
    // 0x1bb4a4: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x1bb4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_1bb4a8:
    // 0x1bb4a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1bb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1bb4ac:
    // 0x1bb4ac: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
label_1bb4b0:
    // 0x1bb4b0: 0xc07f622  jal         func_1FD888
    ctx->pc = 0x1BB4B0u;
    SET_GPR_U32(ctx, 31, 0x1BB4B8u);
    ctx->pc = 0x1BB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4B0u;
    // 0x1bb4b4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD888u, 0x1BB4B0u, 0x1BB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4B8u;
label_1bb4b8:
    // 0x1bb4b8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1bb4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1bb4bc: 0xc07f608  jal         func_1FD820
    ctx->pc = 0x1BB4BCu;
    SET_GPR_U32(ctx, 31, 0x1BB4C4u);
    ctx->pc = 0x1BB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB4BCu;
    // 0x1bb4c0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD820u, 0x1BB4BCu, 0x1BB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB4C4u;
label_1bb4c4:
    // 0x1bb4c4: 0xc6200624  lwc1        $f0, 0x624($s1)
    ctx->pc = 0x1bb4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bb4c8:
    // 0x1bb4c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bb4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb4cc: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1bb4ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1bb4d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1bb4d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bb4d4: 0x0  nop
    ctx->pc = 0x1bb4d4u;
    // NOP
    // 0x1bb4d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB4D8u;
    {
        const bool branch_taken_0x1bb4d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BB4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB4D8u;
        // 0x1bb4dc: 0xe6200624  swc1        $f0, 0x624($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4d8) {
            ctx->pc = 0x1BB4E8u;
            goto label_1bb4e8;
        }
    }
    ctx->pc = 0x1BB4E0u;
label_1bb4e0:
    // 0x1bb4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bb4e4:
    // 0x1bb4e4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x1bb4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_1bb4e8:
    // 0x1bb4e8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1bb4e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1bb4ec: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1bb4ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1bb4f0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1bb4f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1bb4f4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1bb4f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bb4f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1bb4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bb4fc: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1bb4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bb500: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB500u;
        // 0x1bb504: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB508u;
}

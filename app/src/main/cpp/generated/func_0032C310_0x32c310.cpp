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

// Function: func_0032C310
// Address: 0x32c310 - 0x32c5f8
void func_0032C310_0x32c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032C310_0x32c310");
#endif

    switch (ctx->pc) {
        case 0x32c310u: goto label_32c310;
        case 0x32c314u: goto label_32c314;
        case 0x32c318u: goto label_32c318;
        case 0x32c31cu: goto label_32c31c;
        case 0x32c320u: goto label_32c320;
        case 0x32c324u: goto label_32c324;
        case 0x32c328u: goto label_32c328;
        case 0x32c32cu: goto label_32c32c;
        case 0x32c330u: goto label_32c330;
        case 0x32c334u: goto label_32c334;
        case 0x32c338u: goto label_32c338;
        case 0x32c33cu: goto label_32c33c;
        case 0x32c340u: goto label_32c340;
        case 0x32c344u: goto label_32c344;
        case 0x32c348u: goto label_32c348;
        case 0x32c34cu: goto label_32c34c;
        case 0x32c350u: goto label_32c350;
        case 0x32c354u: goto label_32c354;
        case 0x32c358u: goto label_32c358;
        case 0x32c35cu: goto label_32c35c;
        case 0x32c360u: goto label_32c360;
        case 0x32c364u: goto label_32c364;
        case 0x32c368u: goto label_32c368;
        case 0x32c36cu: goto label_32c36c;
        case 0x32c370u: goto label_32c370;
        case 0x32c374u: goto label_32c374;
        case 0x32c378u: goto label_32c378;
        case 0x32c37cu: goto label_32c37c;
        case 0x32c380u: goto label_32c380;
        case 0x32c384u: goto label_32c384;
        case 0x32c388u: goto label_32c388;
        case 0x32c38cu: goto label_32c38c;
        case 0x32c390u: goto label_32c390;
        case 0x32c394u: goto label_32c394;
        case 0x32c398u: goto label_32c398;
        case 0x32c39cu: goto label_32c39c;
        case 0x32c3a0u: goto label_32c3a0;
        case 0x32c3a4u: goto label_32c3a4;
        case 0x32c3a8u: goto label_32c3a8;
        case 0x32c3acu: goto label_32c3ac;
        case 0x32c3b0u: goto label_32c3b0;
        case 0x32c3b4u: goto label_32c3b4;
        case 0x32c3b8u: goto label_32c3b8;
        case 0x32c3bcu: goto label_32c3bc;
        case 0x32c3c0u: goto label_32c3c0;
        case 0x32c3c4u: goto label_32c3c4;
        case 0x32c3c8u: goto label_32c3c8;
        case 0x32c3ccu: goto label_32c3cc;
        case 0x32c3d0u: goto label_32c3d0;
        case 0x32c3d4u: goto label_32c3d4;
        case 0x32c3d8u: goto label_32c3d8;
        case 0x32c3dcu: goto label_32c3dc;
        case 0x32c3e0u: goto label_32c3e0;
        case 0x32c3e4u: goto label_32c3e4;
        case 0x32c3e8u: goto label_32c3e8;
        case 0x32c3ecu: goto label_32c3ec;
        case 0x32c3f0u: goto label_32c3f0;
        case 0x32c3f4u: goto label_32c3f4;
        case 0x32c3f8u: goto label_32c3f8;
        case 0x32c3fcu: goto label_32c3fc;
        case 0x32c400u: goto label_32c400;
        case 0x32c404u: goto label_32c404;
        case 0x32c408u: goto label_32c408;
        case 0x32c40cu: goto label_32c40c;
        case 0x32c410u: goto label_32c410;
        case 0x32c414u: goto label_32c414;
        case 0x32c418u: goto label_32c418;
        case 0x32c41cu: goto label_32c41c;
        case 0x32c420u: goto label_32c420;
        case 0x32c424u: goto label_32c424;
        case 0x32c428u: goto label_32c428;
        case 0x32c42cu: goto label_32c42c;
        case 0x32c430u: goto label_32c430;
        case 0x32c434u: goto label_32c434;
        case 0x32c438u: goto label_32c438;
        case 0x32c43cu: goto label_32c43c;
        case 0x32c440u: goto label_32c440;
        case 0x32c444u: goto label_32c444;
        case 0x32c448u: goto label_32c448;
        case 0x32c44cu: goto label_32c44c;
        case 0x32c450u: goto label_32c450;
        case 0x32c454u: goto label_32c454;
        case 0x32c458u: goto label_32c458;
        case 0x32c45cu: goto label_32c45c;
        case 0x32c460u: goto label_32c460;
        case 0x32c464u: goto label_32c464;
        case 0x32c468u: goto label_32c468;
        case 0x32c46cu: goto label_32c46c;
        case 0x32c470u: goto label_32c470;
        case 0x32c474u: goto label_32c474;
        case 0x32c478u: goto label_32c478;
        case 0x32c47cu: goto label_32c47c;
        case 0x32c480u: goto label_32c480;
        case 0x32c484u: goto label_32c484;
        case 0x32c488u: goto label_32c488;
        case 0x32c48cu: goto label_32c48c;
        case 0x32c490u: goto label_32c490;
        case 0x32c494u: goto label_32c494;
        case 0x32c498u: goto label_32c498;
        case 0x32c49cu: goto label_32c49c;
        case 0x32c4a0u: goto label_32c4a0;
        case 0x32c4a4u: goto label_32c4a4;
        case 0x32c4a8u: goto label_32c4a8;
        case 0x32c4acu: goto label_32c4ac;
        case 0x32c4b0u: goto label_32c4b0;
        case 0x32c4b4u: goto label_32c4b4;
        case 0x32c4b8u: goto label_32c4b8;
        case 0x32c4bcu: goto label_32c4bc;
        case 0x32c4c0u: goto label_32c4c0;
        case 0x32c4c4u: goto label_32c4c4;
        case 0x32c4c8u: goto label_32c4c8;
        case 0x32c4ccu: goto label_32c4cc;
        case 0x32c4d0u: goto label_32c4d0;
        case 0x32c4d4u: goto label_32c4d4;
        case 0x32c4d8u: goto label_32c4d8;
        case 0x32c4dcu: goto label_32c4dc;
        case 0x32c4e0u: goto label_32c4e0;
        case 0x32c4e4u: goto label_32c4e4;
        case 0x32c4e8u: goto label_32c4e8;
        case 0x32c4ecu: goto label_32c4ec;
        case 0x32c4f0u: goto label_32c4f0;
        case 0x32c4f4u: goto label_32c4f4;
        case 0x32c4f8u: goto label_32c4f8;
        case 0x32c4fcu: goto label_32c4fc;
        case 0x32c500u: goto label_32c500;
        case 0x32c504u: goto label_32c504;
        case 0x32c508u: goto label_32c508;
        case 0x32c50cu: goto label_32c50c;
        case 0x32c510u: goto label_32c510;
        case 0x32c514u: goto label_32c514;
        case 0x32c518u: goto label_32c518;
        case 0x32c51cu: goto label_32c51c;
        case 0x32c520u: goto label_32c520;
        case 0x32c524u: goto label_32c524;
        case 0x32c528u: goto label_32c528;
        case 0x32c52cu: goto label_32c52c;
        case 0x32c530u: goto label_32c530;
        case 0x32c534u: goto label_32c534;
        case 0x32c538u: goto label_32c538;
        case 0x32c53cu: goto label_32c53c;
        case 0x32c540u: goto label_32c540;
        case 0x32c544u: goto label_32c544;
        case 0x32c548u: goto label_32c548;
        case 0x32c54cu: goto label_32c54c;
        case 0x32c550u: goto label_32c550;
        case 0x32c554u: goto label_32c554;
        case 0x32c558u: goto label_32c558;
        case 0x32c55cu: goto label_32c55c;
        case 0x32c560u: goto label_32c560;
        case 0x32c564u: goto label_32c564;
        case 0x32c568u: goto label_32c568;
        case 0x32c56cu: goto label_32c56c;
        case 0x32c570u: goto label_32c570;
        case 0x32c574u: goto label_32c574;
        case 0x32c578u: goto label_32c578;
        case 0x32c57cu: goto label_32c57c;
        case 0x32c580u: goto label_32c580;
        case 0x32c584u: goto label_32c584;
        case 0x32c588u: goto label_32c588;
        case 0x32c58cu: goto label_32c58c;
        case 0x32c590u: goto label_32c590;
        case 0x32c594u: goto label_32c594;
        case 0x32c598u: goto label_32c598;
        case 0x32c59cu: goto label_32c59c;
        case 0x32c5a0u: goto label_32c5a0;
        case 0x32c5a4u: goto label_32c5a4;
        case 0x32c5a8u: goto label_32c5a8;
        case 0x32c5acu: goto label_32c5ac;
        case 0x32c5b0u: goto label_32c5b0;
        case 0x32c5b4u: goto label_32c5b4;
        case 0x32c5b8u: goto label_32c5b8;
        case 0x32c5bcu: goto label_32c5bc;
        case 0x32c5c0u: goto label_32c5c0;
        case 0x32c5c4u: goto label_32c5c4;
        case 0x32c5c8u: goto label_32c5c8;
        case 0x32c5ccu: goto label_32c5cc;
        case 0x32c5d0u: goto label_32c5d0;
        case 0x32c5d4u: goto label_32c5d4;
        case 0x32c5d8u: goto label_32c5d8;
        case 0x32c5dcu: goto label_32c5dc;
        case 0x32c5e0u: goto label_32c5e0;
        case 0x32c5e4u: goto label_32c5e4;
        case 0x32c5e8u: goto label_32c5e8;
        case 0x32c5ecu: goto label_32c5ec;
        case 0x32c5f0u: goto label_32c5f0;
        case 0x32c5f4u: goto label_32c5f4;
        default: break;
    }

    ctx->pc = 0x32c310u;

label_32c310:
    // 0x32c310: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x32c310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_32c314:
    // 0x32c314: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x32c314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_32c318:
    // 0x32c318: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x32c318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32c31c:
    // 0x32c31c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x32c31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_32c320:
    // 0x32c320: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x32c320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_32c324:
    // 0x32c324: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x32c324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_32c328:
    // 0x32c328: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x32c328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_32c32c:
    // 0x32c32c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x32c32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_32c330:
    // 0x32c330: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x32c330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_32c334:
    // 0x32c334: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x32c334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_32c338:
    // 0x32c338: 0x82820098  lb          $v0, 0x98($s4)
    ctx->pc = 0x32c338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 152)));
label_32c33c:
    // 0x32c33c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x32c33cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_32c340:
    // 0x32c340: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_32c344:
    if (ctx->pc == 0x32C344u) {
        ctx->pc = 0x32C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C340u;
        // 0x32c344: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C348u;
        goto label_32c348;
    }
    ctx->pc = 0x32C340u;
    {
        const bool branch_taken_0x32c340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C340u;
        // 0x32c344: 0x8e910014  lw          $s1, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c340) {
            ctx->pc = 0x32C5CCu;
            goto label_32c5cc;
        }
    }
    ctx->pc = 0x32C348u;
label_32c348:
    // 0x32c348: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c34c:
    // 0x32c34c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32c34cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_32c350:
    // 0x32c350: 0xa7a00042  sh          $zero, 0x42($sp)
    ctx->pc = 0x32c350u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 66), (uint16_t)GPR_U32(ctx, 0));
label_32c354:
    // 0x32c354: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x32c354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32c358:
    // 0x32c358: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32c358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32c35c:
    // 0x32c35c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c360:
    // 0x32c360: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c364:
    // 0x32c364: 0x60f809  jalr        $v1
label_32c368:
    if (ctx->pc == 0x32C368u) {
        ctx->pc = 0x32C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C364u;
        // 0x32c368: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C36Cu;
        goto label_32c36c;
    }
    ctx->pc = 0x32C364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32C36Cu);
        ctx->pc = 0x32C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C364u;
        // 0x32c368: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C364u, 0x32C36Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C36Cu;
label_32c36c:
    // 0x32c36c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x32c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c370:
    // 0x32c370: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x32c370u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_32c374:
    // 0x32c374: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x32c374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_32c378:
    // 0x32c378: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x32c378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32c37c:
    // 0x32c37c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c380:
    // 0x32c380: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c384:
    // 0x32c384: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x32c384u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_32c388:
    // 0x32c388: 0x60f809  jalr        $v1
label_32c38c:
    if (ctx->pc == 0x32C38Cu) {
        ctx->pc = 0x32C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C388u;
        // 0x32c38c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C390u;
        goto label_32c390;
    }
    ctx->pc = 0x32C388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32C390u);
        ctx->pc = 0x32C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C388u;
        // 0x32c38c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C388u, 0x32C390u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C390u;
label_32c390:
    // 0x32c390: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x32c390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_32c394:
    // 0x32c394: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32c394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32c398:
    // 0x32c398: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x32c398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32c39c:
    // 0x32c39c: 0xc0cfc14  jal         func_33F050
label_32c3a0:
    if (ctx->pc == 0x32C3A0u) {
        ctx->pc = 0x32C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C39Cu;
        // 0x32c3a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3A4u;
        goto label_32c3a4;
    }
    ctx->pc = 0x32C39Cu;
    SET_GPR_U32(ctx, 31, 0x32C3A4u);
    ctx->pc = 0x32C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C39Cu;
    // 0x32c3a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F050u, 0x32C39Cu, 0x32C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3A4u;
label_32c3a4:
    // 0x32c3a4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_32c3a8:
    if (ctx->pc == 0x32C3A8u) {
        ctx->pc = 0x32C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3A4u;
        // 0x32c3a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3ACu;
        goto label_32c3ac;
    }
    ctx->pc = 0x32C3A4u;
    {
        const bool branch_taken_0x32c3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3A4u;
        // 0x32c3a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c3a4) {
            ctx->pc = 0x32C3F0u;
            goto label_32c3f0;
        }
    }
    ctx->pc = 0x32C3ACu;
label_32c3ac:
    // 0x32c3ac: 0xc0cad98  jal         func_32B660
label_32c3b0:
    if (ctx->pc == 0x32C3B0u) {
        ctx->pc = 0x32C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3ACu;
        // 0x32c3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3B4u;
        goto label_32c3b4;
    }
    ctx->pc = 0x32C3ACu;
    SET_GPR_U32(ctx, 31, 0x32C3B4u);
    ctx->pc = 0x32C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C3ACu;
    // 0x32c3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32C3ACu, 0x32C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C3B4u;
label_32c3b4:
    // 0x32c3b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c3b8:
    // 0x32c3b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32c3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c3bc:
    // 0x32c3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c3c0:
    // 0x32c3c0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c3c4:
    // 0x32c3c4: 0x40f809  jalr        $v0
label_32c3c8:
    if (ctx->pc == 0x32C3C8u) {
        ctx->pc = 0x32C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3C4u;
        // 0x32c3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3CCu;
        goto label_32c3cc;
    }
    ctx->pc = 0x32C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C3CCu);
        ctx->pc = 0x32C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3C4u;
        // 0x32c3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C3C4u, 0x32C3CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C3CCu;
label_32c3cc:
    // 0x32c3cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c3d0:
    // 0x32c3d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c3d4:
    // 0x32c3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c3d8:
    // 0x32c3d8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c3dc:
    // 0x32c3dc: 0x40f809  jalr        $v0
label_32c3e0:
    if (ctx->pc == 0x32C3E0u) {
        ctx->pc = 0x32C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3DCu;
        // 0x32c3e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3E4u;
        goto label_32c3e4;
    }
    ctx->pc = 0x32C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C3E4u);
        ctx->pc = 0x32C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3DCu;
        // 0x32c3e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C3DCu, 0x32C3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C3E4u;
label_32c3e4:
    // 0x32c3e4: 0x1000007a  b           . + 4 + (0x7A << 2)
label_32c3e8:
    if (ctx->pc == 0x32C3E8u) {
        ctx->pc = 0x32C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3E4u;
        // 0x32c3e8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C3ECu;
        goto label_32c3ec;
    }
    ctx->pc = 0x32C3E4u;
    {
        const bool branch_taken_0x32c3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C3E4u;
        // 0x32c3e8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c3e4) {
            ctx->pc = 0x32C5D0u;
            goto label_32c5d0;
        }
    }
    ctx->pc = 0x32C3ECu;
label_32c3ec:
    // 0x32c3ec: 0x0  nop
    ctx->pc = 0x32c3ecu;
    // NOP
label_32c3f0:
    // 0x32c3f0: 0x87b00040  lh          $s0, 0x40($sp)
    ctx->pc = 0x32c3f0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_32c3f4:
    // 0x32c3f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32c3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32c3f8:
    // 0x32c3f8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x32c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32c3fc:
    // 0x32c3fc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x32c3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_32c400:
    // 0x32c400: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x32c400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_32c404:
    // 0x32c404: 0xc0cfa06  jal         func_33E818
label_32c408:
    if (ctx->pc == 0x32C408u) {
        ctx->pc = 0x32C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C404u;
        // 0x32c408: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C40Cu;
        goto label_32c40c;
    }
    ctx->pc = 0x32C404u;
    SET_GPR_U32(ctx, 31, 0x32C40Cu);
    ctx->pc = 0x32C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C404u;
    // 0x32c408: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E818u, 0x32C404u, 0x32C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C40Cu;
label_32c40c:
    // 0x32c40c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x32c40cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c410:
    // 0x32c410: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_32c414:
    if (ctx->pc == 0x32C414u) {
        ctx->pc = 0x32C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C410u;
        // 0x32c414: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C418u;
        goto label_32c418;
    }
    ctx->pc = 0x32C410u;
    {
        const bool branch_taken_0x32c410 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C410u;
        // 0x32c414: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c410) {
            ctx->pc = 0x32C42Cu;
            goto label_32c42c;
        }
    }
    ctx->pc = 0x32C418u;
label_32c418:
    // 0x32c418: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x32c418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_32c41c:
    // 0x32c41c: 0x27a60042  addiu       $a2, $sp, 0x42
    ctx->pc = 0x32c41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 66));
label_32c420:
    // 0x32c420: 0xc0cfa06  jal         func_33E818
label_32c424:
    if (ctx->pc == 0x32C424u) {
        ctx->pc = 0x32C424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C420u;
        // 0x32c424: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C428u;
        goto label_32c428;
    }
    ctx->pc = 0x32C420u;
    SET_GPR_U32(ctx, 31, 0x32C428u);
    ctx->pc = 0x32C424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C420u;
    // 0x32c424: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E818u, 0x32C420u, 0x32C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C428u;
label_32c428:
    // 0x32c428: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32c428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32c42c:
    // 0x32c42c: 0x87a20040  lh          $v0, 0x40($sp)
    ctx->pc = 0x32c42cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_32c430:
    // 0x32c430: 0x87b60042  lh          $s6, 0x42($sp)
    ctx->pc = 0x32c430u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 66)));
label_32c434:
    // 0x32c434: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_32c438:
    if (ctx->pc == 0x32C438u) {
        ctx->pc = 0x32C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C434u;
        // 0x32c438: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C43Cu;
        goto label_32c43c;
    }
    ctx->pc = 0x32C434u;
    {
        const bool branch_taken_0x32c434 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C434u;
        // 0x32c438: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c434) {
            ctx->pc = 0x32C478u;
            goto label_32c478;
        }
    }
    ctx->pc = 0x32C43Cu;
label_32c43c:
    // 0x32c43c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_32c440:
    if (ctx->pc == 0x32C440u) {
        ctx->pc = 0x32C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C43Cu;
        // 0x32c440: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C444u;
        goto label_32c444;
    }
    ctx->pc = 0x32C43Cu;
    {
        const bool branch_taken_0x32c43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C43Cu;
        // 0x32c440: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c43c) {
            ctx->pc = 0x32C4E0u;
            goto label_32c4e0;
        }
    }
    ctx->pc = 0x32C444u;
label_32c444:
    // 0x32c444: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c448:
    // 0x32c448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c44c:
    // 0x32c44c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c450:
    // 0x32c450: 0x40f809  jalr        $v0
label_32c454:
    if (ctx->pc == 0x32C454u) {
        ctx->pc = 0x32C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C450u;
        // 0x32c454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C458u;
        goto label_32c458;
    }
    ctx->pc = 0x32C450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C458u);
        ctx->pc = 0x32C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C450u;
        // 0x32c454: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C450u, 0x32C458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C458u;
label_32c458:
    // 0x32c458: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c45c:
    // 0x32c45c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c460:
    // 0x32c460: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32c460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32c464:
    // 0x32c464: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c468:
    // 0x32c468: 0x40f809  jalr        $v0
label_32c46c:
    if (ctx->pc == 0x32C46Cu) {
        ctx->pc = 0x32C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C468u;
        // 0x32c46c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C470u;
        goto label_32c470;
    }
    ctx->pc = 0x32C468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C470u);
        ctx->pc = 0x32C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C468u;
        // 0x32c46c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C468u, 0x32C470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C470u;
label_32c470:
    // 0x32c470: 0x10000044  b           . + 4 + (0x44 << 2)
label_32c474:
    if (ctx->pc == 0x32C474u) {
        ctx->pc = 0x32C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C470u;
        // 0x32c474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C478u;
        goto label_32c478;
    }
    ctx->pc = 0x32C470u;
    {
        const bool branch_taken_0x32c470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C470u;
        // 0x32c474: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c470) {
            ctx->pc = 0x32C584u;
            goto label_32c584;
        }
    }
    ctx->pc = 0x32C478u;
label_32c478:
    // 0x32c478: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c47c:
    // 0x32c47c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32c47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c480:
    // 0x32c480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c484:
    // 0x32c484: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c488:
    // 0x32c488: 0x40f809  jalr        $v0
label_32c48c:
    if (ctx->pc == 0x32C48Cu) {
        ctx->pc = 0x32C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C488u;
        // 0x32c48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C490u;
        goto label_32c490;
    }
    ctx->pc = 0x32C488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C490u);
        ctx->pc = 0x32C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C488u;
        // 0x32c48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C488u, 0x32C490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C490u;
label_32c490:
    // 0x32c490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c494:
    // 0x32c494: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x32c494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_32c498:
    // 0x32c498: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32c498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32c49c:
    // 0x32c49c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32c49cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32c4a0:
    // 0x32c4a0: 0xc0ceb28  jal         func_33ACA0
label_32c4a4:
    if (ctx->pc == 0x32C4A4u) {
        ctx->pc = 0x32C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4A0u;
        // 0x32c4a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4A8u;
        goto label_32c4a8;
    }
    ctx->pc = 0x32C4A0u;
    SET_GPR_U32(ctx, 31, 0x32C4A8u);
    ctx->pc = 0x32C4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C4A0u;
    // 0x32c4a4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32C4A0u, 0x32C4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C4A8u;
label_32c4a8:
    // 0x32c4a8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c4ac:
    // 0x32c4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c4b0:
    // 0x32c4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32c4b4:
    // 0x32c4b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32c4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32c4b8:
    // 0x32c4b8: 0x40f809  jalr        $v0
label_32c4bc:
    if (ctx->pc == 0x32C4BCu) {
        ctx->pc = 0x32C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4B8u;
        // 0x32c4bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4C0u;
        goto label_32c4c0;
    }
    ctx->pc = 0x32C4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C4C0u);
        ctx->pc = 0x32C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4B8u;
        // 0x32c4bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C4B8u, 0x32C4C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C4C0u;
label_32c4c0:
    // 0x32c4c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c4c4:
    // 0x32c4c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c4c8:
    // 0x32c4c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32c4c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c4cc:
    // 0x32c4cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c4d0:
    // 0x32c4d0: 0x40f809  jalr        $v0
label_32c4d4:
    if (ctx->pc == 0x32C4D4u) {
        ctx->pc = 0x32C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4D0u;
        // 0x32c4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4D8u;
        goto label_32c4d8;
    }
    ctx->pc = 0x32C4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C4D8u);
        ctx->pc = 0x32C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4D0u;
        // 0x32c4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C4D0u, 0x32C4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C4D8u;
label_32c4d8:
    // 0x32c4d8: 0x10000019  b           . + 4 + (0x19 << 2)
label_32c4dc:
    if (ctx->pc == 0x32C4DCu) {
        ctx->pc = 0x32C4E0u;
        goto label_32c4e0;
    }
    ctx->pc = 0x32C4D8u;
    {
        const bool branch_taken_0x32c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c4d8) {
            ctx->pc = 0x32C540u;
            goto label_32c540;
        }
    }
    ctx->pc = 0x32C4E0u;
label_32c4e0:
    // 0x32c4e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c4e4:
    // 0x32c4e4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32c4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32c4e8:
    // 0x32c4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c4ec:
    // 0x32c4ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32c4f0:
    // 0x32c4f0: 0x40f809  jalr        $v0
label_32c4f4:
    if (ctx->pc == 0x32C4F4u) {
        ctx->pc = 0x32C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4F0u;
        // 0x32c4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C4F8u;
        goto label_32c4f8;
    }
    ctx->pc = 0x32C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C4F8u);
        ctx->pc = 0x32C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C4F0u;
        // 0x32c4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C4F0u, 0x32C4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C4F8u;
label_32c4f8:
    // 0x32c4f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x32c4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c4fc:
    // 0x32c4fc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x32c4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_32c500:
    // 0x32c500: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x32c500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_32c504:
    // 0x32c504: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32c504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c508:
    // 0x32c508: 0xc0ceb28  jal         func_33ACA0
label_32c50c:
    if (ctx->pc == 0x32C50Cu) {
        ctx->pc = 0x32C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C508u;
        // 0x32c50c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C510u;
        goto label_32c510;
    }
    ctx->pc = 0x32C508u;
    SET_GPR_U32(ctx, 31, 0x32C510u);
    ctx->pc = 0x32C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C508u;
    // 0x32c50c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ACA0u, 0x32C508u, 0x32C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C510u;
label_32c510:
    // 0x32c510: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c514:
    // 0x32c514: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x32c514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_32c518:
    // 0x32c518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c51c:
    // 0x32c51c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x32c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_32c520:
    // 0x32c520: 0x40f809  jalr        $v0
label_32c524:
    if (ctx->pc == 0x32C524u) {
        ctx->pc = 0x32C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C520u;
        // 0x32c524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C528u;
        goto label_32c528;
    }
    ctx->pc = 0x32C520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C528u);
        ctx->pc = 0x32C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C520u;
        // 0x32c524: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C520u, 0x32C528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C528u;
label_32c528:
    // 0x32c528: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_32c52c:
    // 0x32c52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32c52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_32c530:
    // 0x32c530: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32c530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32c534:
    // 0x32c534: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x32c534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_32c538:
    // 0x32c538: 0x40f809  jalr        $v0
label_32c53c:
    if (ctx->pc == 0x32C53Cu) {
        ctx->pc = 0x32C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C538u;
        // 0x32c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C540u;
        goto label_32c540;
    }
    ctx->pc = 0x32C538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32C540u);
        ctx->pc = 0x32C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C538u;
        // 0x32c53c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C538u, 0x32C540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32C540u;
label_32c540:
    // 0x32c540: 0xc0c9dc4  jal         func_327710
label_32c544:
    if (ctx->pc == 0x32C544u) {
        ctx->pc = 0x32C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C540u;
        // 0x32c544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C548u;
        goto label_32c548;
    }
    ctx->pc = 0x32C540u;
    SET_GPR_U32(ctx, 31, 0x32C548u);
    ctx->pc = 0x32C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C540u;
    // 0x32c544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327710u, 0x32C540u, 0x32C548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C548u;
label_32c548:
    // 0x32c548: 0x8e8300a4  lw          $v1, 0xA4($s4)
    ctx->pc = 0x32c548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
label_32c54c:
    // 0x32c54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c550:
    // 0x32c550: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_32c554:
    // 0x32c554: 0xc0c9a18  jal         func_326860
label_32c558:
    if (ctx->pc == 0x32C558u) {
        ctx->pc = 0x32C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C554u;
        // 0x32c558: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C55Cu;
        goto label_32c55c;
    }
    ctx->pc = 0x32C554u;
    SET_GPR_U32(ctx, 31, 0x32C55Cu);
    ctx->pc = 0x32C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C554u;
    // 0x32c558: 0xae8300a4  sw          $v1, 0xA4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326860u, 0x32C554u, 0x32C55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C55Cu;
label_32c55c:
    // 0x32c55c: 0xc0c9a0c  jal         func_326830
label_32c560:
    if (ctx->pc == 0x32C560u) {
        ctx->pc = 0x32C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C55Cu;
        // 0x32c560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C564u;
        goto label_32c564;
    }
    ctx->pc = 0x32C55Cu;
    SET_GPR_U32(ctx, 31, 0x32C564u);
    ctx->pc = 0x32C560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C55Cu;
    // 0x32c560: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326830u, 0x32C55Cu, 0x32C564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C564u;
label_32c564:
    // 0x32c564: 0xc0c9cdc  jal         func_327370
label_32c568:
    if (ctx->pc == 0x32C568u) {
        ctx->pc = 0x32C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C564u;
        // 0x32c568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C56Cu;
        goto label_32c56c;
    }
    ctx->pc = 0x32C564u;
    SET_GPR_U32(ctx, 31, 0x32C56Cu);
    ctx->pc = 0x32C568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C564u;
    // 0x32c568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327370u, 0x32C564u, 0x32C56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C56Cu;
label_32c56c:
    // 0x32c56c: 0xc0c99de  jal         func_326778
label_32c570:
    if (ctx->pc == 0x32C570u) {
        ctx->pc = 0x32C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C56Cu;
        // 0x32c570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C574u;
        goto label_32c574;
    }
    ctx->pc = 0x32C56Cu;
    SET_GPR_U32(ctx, 31, 0x32C574u);
    ctx->pc = 0x32C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C56Cu;
    // 0x32c570: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326778u, 0x32C56Cu, 0x32C574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C574u;
label_32c574:
    // 0x32c574: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x32c574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_32c578:
    // 0x32c578: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
label_32c57c:
    if (ctx->pc == 0x32C57Cu) {
        ctx->pc = 0x32C57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C578u;
        // 0x32c57c: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C580u;
        goto label_32c580;
    }
    ctx->pc = 0x32C578u;
    {
        const bool branch_taken_0x32c578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c578) {
            ctx->pc = 0x32C57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C578u;
            // 0x32c57c: 0x8e850048  lw          $a1, 0x48($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C598u;
            goto label_32c598;
        }
    }
    ctx->pc = 0x32C580u;
label_32c580:
    // 0x32c580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32c580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_32c584:
    // 0x32c584: 0xc0cad98  jal         func_32B660
label_32c588:
    if (ctx->pc == 0x32C588u) {
        ctx->pc = 0x32C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C584u;
        // 0x32c588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C58Cu;
        goto label_32c58c;
    }
    ctx->pc = 0x32C584u;
    SET_GPR_U32(ctx, 31, 0x32C58Cu);
    ctx->pc = 0x32C588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C584u;
    // 0x32c588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B660u, 0x32C584u, 0x32C58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C58Cu;
label_32c58c:
    // 0x32c58c: 0x10000010  b           . + 4 + (0x10 << 2)
label_32c590:
    if (ctx->pc == 0x32C590u) {
        ctx->pc = 0x32C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C58Cu;
        // 0x32c590: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C594u;
        goto label_32c594;
    }
    ctx->pc = 0x32C58Cu;
    {
        const bool branch_taken_0x32c58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C58Cu;
        // 0x32c590: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c58c) {
            ctx->pc = 0x32C5D0u;
            goto label_32c5d0;
        }
    }
    ctx->pc = 0x32C594u;
label_32c594:
    // 0x32c594: 0x0  nop
    ctx->pc = 0x32c594u;
    // NOP
label_32c598:
    // 0x32c598: 0xc0c99f0  jal         func_3267C0
label_32c59c:
    if (ctx->pc == 0x32C59Cu) {
        ctx->pc = 0x32C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C598u;
        // 0x32c59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5A0u;
        goto label_32c5a0;
    }
    ctx->pc = 0x32C598u;
    SET_GPR_U32(ctx, 31, 0x32C5A0u);
    ctx->pc = 0x32C59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C598u;
    // 0x32c59c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267C0u, 0x32C598u, 0x32C5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5A0u;
label_32c5a0:
    // 0x32c5a0: 0xc0c9dfa  jal         func_3277E8
label_32c5a4:
    if (ctx->pc == 0x32C5A4u) {
        ctx->pc = 0x32C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5A0u;
        // 0x32c5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5A8u;
        goto label_32c5a8;
    }
    ctx->pc = 0x32C5A0u;
    SET_GPR_U32(ctx, 31, 0x32C5A8u);
    ctx->pc = 0x32C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5A0u;
    // 0x32c5a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x32C5A0u, 0x32C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5A8u;
label_32c5a8:
    // 0x32c5a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c5ac:
    // 0x32c5ac: 0xc0c9dd6  jal         func_327758
label_32c5b0:
    if (ctx->pc == 0x32C5B0u) {
        ctx->pc = 0x32C5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5ACu;
        // 0x32c5b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5B4u;
        goto label_32c5b4;
    }
    ctx->pc = 0x32C5ACu;
    SET_GPR_U32(ctx, 31, 0x32C5B4u);
    ctx->pc = 0x32C5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5ACu;
    // 0x32c5b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327758u, 0x32C5ACu, 0x32C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5B4u;
label_32c5b4:
    // 0x32c5b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c5b8:
    // 0x32c5b8: 0xc0c9dda  jal         func_327768
label_32c5bc:
    if (ctx->pc == 0x32C5BCu) {
        ctx->pc = 0x32C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5B8u;
        // 0x32c5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5C0u;
        goto label_32c5c0;
    }
    ctx->pc = 0x32C5B8u;
    SET_GPR_U32(ctx, 31, 0x32C5C0u);
    ctx->pc = 0x32C5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5B8u;
    // 0x32c5bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327768u, 0x32C5B8u, 0x32C5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5C0u;
label_32c5c0:
    // 0x32c5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32c5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_32c5c4:
    // 0x32c5c4: 0xc0c9dd8  jal         func_327760
label_32c5c8:
    if (ctx->pc == 0x32C5C8u) {
        ctx->pc = 0x32C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5C4u;
        // 0x32c5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5CCu;
        goto label_32c5cc;
    }
    ctx->pc = 0x32C5C4u;
    SET_GPR_U32(ctx, 31, 0x32C5CCu);
    ctx->pc = 0x32C5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C5C4u;
    // 0x32c5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327760u, 0x32C5C4u, 0x32C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C5CCu;
label_32c5cc:
    // 0x32c5cc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x32c5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_32c5d0:
    // 0x32c5d0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x32c5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_32c5d4:
    // 0x32c5d4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x32c5d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32c5d8:
    // 0x32c5d8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x32c5d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_32c5dc:
    // 0x32c5dc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x32c5dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_32c5e0:
    // 0x32c5e0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x32c5e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_32c5e4:
    // 0x32c5e4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x32c5e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_32c5e8:
    // 0x32c5e8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x32c5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_32c5ec:
    // 0x32c5ec: 0x3e00008  jr          $ra
label_32c5f0:
    if (ctx->pc == 0x32C5F0u) {
        ctx->pc = 0x32C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5ECu;
        // 0x32c5f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32C5F4u;
        goto label_32c5f4;
    }
    ctx->pc = 0x32C5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C5ECu;
        // 0x32c5f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C5F4u;
label_32c5f4:
    // 0x32c5f4: 0x0  nop
    ctx->pc = 0x32c5f4u;
    // NOP
    ctx->pc = 0x32c5f8u;
}

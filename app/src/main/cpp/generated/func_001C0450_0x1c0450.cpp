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

// Function: func_001C0450
// Address: 0x1c0450 - 0x1c0678
void func_001C0450_0x1c0450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C0450_0x1c0450");
#endif

    switch (ctx->pc) {
        case 0x1c0450u: goto label_1c0450;
        case 0x1c0454u: goto label_1c0454;
        case 0x1c0458u: goto label_1c0458;
        case 0x1c045cu: goto label_1c045c;
        case 0x1c0460u: goto label_1c0460;
        case 0x1c0464u: goto label_1c0464;
        case 0x1c0468u: goto label_1c0468;
        case 0x1c046cu: goto label_1c046c;
        case 0x1c0470u: goto label_1c0470;
        case 0x1c0474u: goto label_1c0474;
        case 0x1c0478u: goto label_1c0478;
        case 0x1c047cu: goto label_1c047c;
        case 0x1c0480u: goto label_1c0480;
        case 0x1c0484u: goto label_1c0484;
        case 0x1c0488u: goto label_1c0488;
        case 0x1c048cu: goto label_1c048c;
        case 0x1c0490u: goto label_1c0490;
        case 0x1c0494u: goto label_1c0494;
        case 0x1c0498u: goto label_1c0498;
        case 0x1c049cu: goto label_1c049c;
        case 0x1c04a0u: goto label_1c04a0;
        case 0x1c04a4u: goto label_1c04a4;
        case 0x1c04a8u: goto label_1c04a8;
        case 0x1c04acu: goto label_1c04ac;
        case 0x1c04b0u: goto label_1c04b0;
        case 0x1c04b4u: goto label_1c04b4;
        case 0x1c04b8u: goto label_1c04b8;
        case 0x1c04bcu: goto label_1c04bc;
        case 0x1c04c0u: goto label_1c04c0;
        case 0x1c04c4u: goto label_1c04c4;
        case 0x1c04c8u: goto label_1c04c8;
        case 0x1c04ccu: goto label_1c04cc;
        case 0x1c04d0u: goto label_1c04d0;
        case 0x1c04d4u: goto label_1c04d4;
        case 0x1c04d8u: goto label_1c04d8;
        case 0x1c04dcu: goto label_1c04dc;
        case 0x1c04e0u: goto label_1c04e0;
        case 0x1c04e4u: goto label_1c04e4;
        case 0x1c04e8u: goto label_1c04e8;
        case 0x1c04ecu: goto label_1c04ec;
        case 0x1c04f0u: goto label_1c04f0;
        case 0x1c04f4u: goto label_1c04f4;
        case 0x1c04f8u: goto label_1c04f8;
        case 0x1c04fcu: goto label_1c04fc;
        case 0x1c0500u: goto label_1c0500;
        case 0x1c0504u: goto label_1c0504;
        case 0x1c0508u: goto label_1c0508;
        case 0x1c050cu: goto label_1c050c;
        case 0x1c0510u: goto label_1c0510;
        case 0x1c0514u: goto label_1c0514;
        case 0x1c0518u: goto label_1c0518;
        case 0x1c051cu: goto label_1c051c;
        case 0x1c0520u: goto label_1c0520;
        case 0x1c0524u: goto label_1c0524;
        case 0x1c0528u: goto label_1c0528;
        case 0x1c052cu: goto label_1c052c;
        case 0x1c0530u: goto label_1c0530;
        case 0x1c0534u: goto label_1c0534;
        case 0x1c0538u: goto label_1c0538;
        case 0x1c053cu: goto label_1c053c;
        case 0x1c0540u: goto label_1c0540;
        case 0x1c0544u: goto label_1c0544;
        case 0x1c0548u: goto label_1c0548;
        case 0x1c054cu: goto label_1c054c;
        case 0x1c0550u: goto label_1c0550;
        case 0x1c0554u: goto label_1c0554;
        case 0x1c0558u: goto label_1c0558;
        case 0x1c055cu: goto label_1c055c;
        case 0x1c0560u: goto label_1c0560;
        case 0x1c0564u: goto label_1c0564;
        case 0x1c0568u: goto label_1c0568;
        case 0x1c056cu: goto label_1c056c;
        case 0x1c0570u: goto label_1c0570;
        case 0x1c0574u: goto label_1c0574;
        case 0x1c0578u: goto label_1c0578;
        case 0x1c057cu: goto label_1c057c;
        case 0x1c0580u: goto label_1c0580;
        case 0x1c0584u: goto label_1c0584;
        case 0x1c0588u: goto label_1c0588;
        case 0x1c058cu: goto label_1c058c;
        case 0x1c0590u: goto label_1c0590;
        case 0x1c0594u: goto label_1c0594;
        case 0x1c0598u: goto label_1c0598;
        case 0x1c059cu: goto label_1c059c;
        case 0x1c05a0u: goto label_1c05a0;
        case 0x1c05a4u: goto label_1c05a4;
        case 0x1c05a8u: goto label_1c05a8;
        case 0x1c05acu: goto label_1c05ac;
        case 0x1c05b0u: goto label_1c05b0;
        case 0x1c05b4u: goto label_1c05b4;
        case 0x1c05b8u: goto label_1c05b8;
        case 0x1c05bcu: goto label_1c05bc;
        case 0x1c05c0u: goto label_1c05c0;
        case 0x1c05c4u: goto label_1c05c4;
        case 0x1c05c8u: goto label_1c05c8;
        case 0x1c05ccu: goto label_1c05cc;
        case 0x1c05d0u: goto label_1c05d0;
        case 0x1c05d4u: goto label_1c05d4;
        case 0x1c05d8u: goto label_1c05d8;
        case 0x1c05dcu: goto label_1c05dc;
        case 0x1c05e0u: goto label_1c05e0;
        case 0x1c05e4u: goto label_1c05e4;
        case 0x1c05e8u: goto label_1c05e8;
        case 0x1c05ecu: goto label_1c05ec;
        case 0x1c05f0u: goto label_1c05f0;
        case 0x1c05f4u: goto label_1c05f4;
        case 0x1c05f8u: goto label_1c05f8;
        case 0x1c05fcu: goto label_1c05fc;
        case 0x1c0600u: goto label_1c0600;
        case 0x1c0604u: goto label_1c0604;
        case 0x1c0608u: goto label_1c0608;
        case 0x1c060cu: goto label_1c060c;
        case 0x1c0610u: goto label_1c0610;
        case 0x1c0614u: goto label_1c0614;
        case 0x1c0618u: goto label_1c0618;
        case 0x1c061cu: goto label_1c061c;
        case 0x1c0620u: goto label_1c0620;
        case 0x1c0624u: goto label_1c0624;
        case 0x1c0628u: goto label_1c0628;
        case 0x1c062cu: goto label_1c062c;
        case 0x1c0630u: goto label_1c0630;
        case 0x1c0634u: goto label_1c0634;
        case 0x1c0638u: goto label_1c0638;
        case 0x1c063cu: goto label_1c063c;
        case 0x1c0640u: goto label_1c0640;
        case 0x1c0644u: goto label_1c0644;
        case 0x1c0648u: goto label_1c0648;
        case 0x1c064cu: goto label_1c064c;
        case 0x1c0650u: goto label_1c0650;
        case 0x1c0654u: goto label_1c0654;
        case 0x1c0658u: goto label_1c0658;
        case 0x1c065cu: goto label_1c065c;
        case 0x1c0660u: goto label_1c0660;
        case 0x1c0664u: goto label_1c0664;
        case 0x1c0668u: goto label_1c0668;
        case 0x1c066cu: goto label_1c066c;
        case 0x1c0670u: goto label_1c0670;
        case 0x1c0674u: goto label_1c0674;
        default: break;
    }

    ctx->pc = 0x1c0450u;

label_1c0450:
    // 0x1c0450: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c0450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1c0454:
    // 0x1c0454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0458:
    // 0x1c0458: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1c0458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1c045c:
    // 0x1c045c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1c0460:
    // 0x1c0460: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c0460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c0464:
    // 0x1c0464: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c0464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1c0468:
    // 0x1c0468: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c046c:
    // 0x1c046c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c046cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c0470:
    // 0x1c0470: 0x9e6205b0  lwu         $v0, 0x5B0($s3)
    ctx->pc = 0x1c0470u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 1456)));
label_1c0474:
    // 0x1c0474: 0x2117b  dsra        $v0, $v0, 5
    ctx->pc = 0x1c0474u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 5);
label_1c0478:
    // 0x1c0478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c047c:
    // 0x1c047c: 0x10430078  beq         $v0, $v1, . + 4 + (0x78 << 2)
label_1c0480:
    if (ctx->pc == 0x1C0480u) {
        ctx->pc = 0x1C0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C047Cu;
        // 0x1c0480: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0484u;
        goto label_1c0484;
    }
    ctx->pc = 0x1C047Cu;
    {
        const bool branch_taken_0x1c047c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C047Cu;
        // 0x1c0480: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c047c) {
            ctx->pc = 0x1C0660u;
            goto label_1c0660;
        }
    }
    ctx->pc = 0x1C0484u;
label_1c0484:
    // 0x1c0484: 0x8e630560  lw          $v1, 0x560($s3)
    ctx->pc = 0x1c0484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
label_1c0488:
    // 0x1c0488: 0x8e62067c  lw          $v0, 0x67C($s3)
    ctx->pc = 0x1c0488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1660)));
label_1c048c:
    // 0x1c048c: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
label_1c0490:
    if (ctx->pc == 0x1C0490u) {
        ctx->pc = 0x1C0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C048Cu;
        // 0x1c0490: 0x8e630214  lw          $v1, 0x214($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0494u;
        goto label_1c0494;
    }
    ctx->pc = 0x1C048Cu;
    {
        const bool branch_taken_0x1c048c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c048c) {
            ctx->pc = 0x1C0490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C048Cu;
            // 0x1c0490: 0x8e630214  lw          $v1, 0x214($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C051Cu;
            goto label_1c051c;
        }
    }
    ctx->pc = 0x1C0494u;
label_1c0494:
    // 0x1c0494: 0x92630676  lbu         $v1, 0x676($s3)
    ctx->pc = 0x1c0494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1654)));
label_1c0498:
    // 0x1c0498: 0x92620677  lbu         $v0, 0x677($s3)
    ctx->pc = 0x1c0498u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1655)));
label_1c049c:
    // 0x1c049c: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_1c04a0:
    if (ctx->pc == 0x1C04A0u) {
        ctx->pc = 0x1C04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C049Cu;
        // 0x1c04a0: 0x8e630214  lw          $v1, 0x214($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04A4u;
        goto label_1c04a4;
    }
    ctx->pc = 0x1C049Cu;
    {
        const bool branch_taken_0x1c049c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c049c) {
            ctx->pc = 0x1C04A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C049Cu;
            // 0x1c04a0: 0x8e630214  lw          $v1, 0x214($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C051Cu;
            goto label_1c051c;
        }
    }
    ctx->pc = 0x1C04A4u;
label_1c04a4:
    // 0x1c04a4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x1c04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_1c04a8:
    // 0x1c04a8: 0xc6610490  lwc1        $f1, 0x490($s3)
    ctx->pc = 0x1c04a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c04ac:
    // 0x1c04ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1c04acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c04b0:
    // 0x1c04b0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c04b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c04b4:
    // 0x1c04b4: 0x0  nop
    ctx->pc = 0x1c04b4u;
    // NOP
label_1c04b8:
    // 0x1c04b8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1c04bc:
    if (ctx->pc == 0x1C04BCu) {
        ctx->pc = 0x1C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B8u;
        // 0x1c04bc: 0x26630490  addiu       $v1, $s3, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04C0u;
        goto label_1c04c0;
    }
    ctx->pc = 0x1C04B8u;
    {
        const bool branch_taken_0x1c04b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04B8u;
        // 0x1c04bc: 0x26630490  addiu       $v1, $s3, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c04b8) {
            ctx->pc = 0x1C0508u;
            goto label_1c0508;
        }
    }
    ctx->pc = 0x1C04C0u;
label_1c04c0:
    // 0x1c04c0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c04c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c04c4:
    // 0x1c04c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c04c8:
    // 0x1c04c8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c04c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c04cc:
    // 0x1c04cc: 0x0  nop
    ctx->pc = 0x1c04ccu;
    // NOP
label_1c04d0:
    // 0x1c04d0: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1c04d4:
    if (ctx->pc == 0x1C04D4u) {
        ctx->pc = 0x1C04D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04D0u;
        // 0x1c04d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04D8u;
        goto label_1c04d8;
    }
    ctx->pc = 0x1C04D0u;
    {
        const bool branch_taken_0x1c04d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c04d0) {
            ctx->pc = 0x1C04D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C04D0u;
            // 0x1c04d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C050Cu;
            goto label_1c050c;
        }
    }
    ctx->pc = 0x1C04D8u;
label_1c04d8:
    // 0x1c04d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c04d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c04dc:
    // 0x1c04dc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c04dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c04e0:
    // 0x1c04e0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c04e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c04e4:
    // 0x1c04e4: 0x0  nop
    ctx->pc = 0x1c04e4u;
    // NOP
label_1c04e8:
    // 0x1c04e8: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1c04ec:
    if (ctx->pc == 0x1C04ECu) {
        ctx->pc = 0x1C04ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C04E8u;
        // 0x1c04ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C04F0u;
        goto label_1c04f0;
    }
    ctx->pc = 0x1C04E8u;
    {
        const bool branch_taken_0x1c04e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c04e8) {
            ctx->pc = 0x1C04ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C04E8u;
            // 0x1c04ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C050Cu;
            goto label_1c050c;
        }
    }
    ctx->pc = 0x1C04F0u;
label_1c04f0:
    // 0x1c04f0: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1c04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c04f4:
    // 0x1c04f4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1c04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c04f8:
    // 0x1c04f8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c04f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c04fc:
    // 0x1c04fc: 0x0  nop
    ctx->pc = 0x1c04fcu;
    // NOP
label_1c0500:
    // 0x1c0500: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1c0504:
    if (ctx->pc == 0x1C0504u) {
        ctx->pc = 0x1C0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0500u;
        // 0x1c0504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0508u;
        goto label_1c0508;
    }
    ctx->pc = 0x1C0500u;
    {
        const bool branch_taken_0x1c0500 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0500u;
        // 0x1c0504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0500) {
            ctx->pc = 0x1C050Cu;
            goto label_1c050c;
        }
    }
    ctx->pc = 0x1C0508u;
label_1c0508:
    // 0x1c0508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c050c:
    // 0x1c050c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c050cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c0510:
    // 0x1c0510: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_1c0514:
    if (ctx->pc == 0x1C0514u) {
        ctx->pc = 0x1C0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0510u;
        // 0x1c0514: 0x92620676  lbu         $v0, 0x676($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1654)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0518u;
        goto label_1c0518;
    }
    ctx->pc = 0x1C0510u;
    {
        const bool branch_taken_0x1c0510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0510) {
            ctx->pc = 0x1C0514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0510u;
            // 0x1c0514: 0x92620676  lbu         $v0, 0x676($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1654)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0574u;
            goto label_1c0574;
        }
    }
    ctx->pc = 0x1C0518u;
label_1c0518:
    // 0x1c0518: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c0518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c051c:
    // 0x1c051c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1c051cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_1c0520:
    // 0x1c0520: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1c0520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_1c0524:
    // 0x1c0524: 0x96720662  lhu         $s2, 0x662($s3)
    ctx->pc = 0x1c0524u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1634)));
label_1c0528:
    // 0x1c0528: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0528u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c052c:
    // 0x1c052c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0530:
    // 0x1c0530: 0x40f809  jalr        $v0
label_1c0534:
    if (ctx->pc == 0x1C0534u) {
        ctx->pc = 0x1C0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0530u;
        // 0x1c0534: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0538u;
        goto label_1c0538;
    }
    ctx->pc = 0x1C0530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0538u);
        ctx->pc = 0x1C0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0530u;
        // 0x1c0534: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0530u, 0x1C0538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0538u;
label_1c0538:
    // 0x1c0538: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c0538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c053c:
    // 0x1c053c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c053cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0540:
    // 0x1c0540: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c0540u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c0544:
    // 0x1c0544: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c0544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c0548:
    // 0x1c0548: 0x40f809  jalr        $v0
label_1c054c:
    if (ctx->pc == 0x1C054Cu) {
        ctx->pc = 0x1C054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0548u;
        // 0x1c054c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0550u;
        goto label_1c0550;
    }
    ctx->pc = 0x1C0548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0550u);
        ctx->pc = 0x1C054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0548u;
        // 0x1c054c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0548u, 0x1C0550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0550u;
label_1c0550:
    // 0x1c0550: 0x8e680560  lw          $t0, 0x560($s3)
    ctx->pc = 0x1c0550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
label_1c0554:
    // 0x1c0554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0558:
    // 0x1c0558: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c0558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c055c:
    // 0x1c055c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c055cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0560:
    // 0x1c0560: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c0560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0564:
    // 0x1c0564: 0xc07ec70  jal         func_1FB1C0
label_1c0568:
    if (ctx->pc == 0x1C0568u) {
        ctx->pc = 0x1C0568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0564u;
        // 0x1c0568: 0x26690676  addiu       $t1, $s3, 0x676 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C056Cu;
        goto label_1c056c;
    }
    ctx->pc = 0x1C0564u;
    SET_GPR_U32(ctx, 31, 0x1C056Cu);
    ctx->pc = 0x1C0568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0564u;
    // 0x1c0568: 0x26690676  addiu       $t1, $s3, 0x676 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1654));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB1C0u, 0x1C0564u, 0x1C056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C056Cu;
label_1c056c:
    // 0x1c056c: 0x10000038  b           . + 4 + (0x38 << 2)
label_1c0570:
    if (ctx->pc == 0x1C0570u) {
        ctx->pc = 0x1C0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C056Cu;
        // 0x1c0570: 0x8e620560  lw          $v0, 0x560($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0574u;
        goto label_1c0574;
    }
    ctx->pc = 0x1C056Cu;
    {
        const bool branch_taken_0x1c056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C056Cu;
        // 0x1c0570: 0x8e620560  lw          $v0, 0x560($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c056c) {
            ctx->pc = 0x1C0650u;
            goto label_1c0650;
        }
    }
    ctx->pc = 0x1C0574u;
label_1c0574:
    // 0x1c0574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0578:
    // 0x1c0578: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1c0578u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
label_1c057c:
    // 0x1c057c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c057cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c0580:
    // 0x1c0580: 0x54430033  bnel        $v0, $v1, . + 4 + (0x33 << 2)
label_1c0584:
    if (ctx->pc == 0x1C0584u) {
        ctx->pc = 0x1C0584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0580u;
        // 0x1c0584: 0x8e620560  lw          $v0, 0x560($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0588u;
        goto label_1c0588;
    }
    ctx->pc = 0x1C0580u;
    {
        const bool branch_taken_0x1c0580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c0580) {
            ctx->pc = 0x1C0584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0580u;
            // 0x1c0584: 0x8e620560  lw          $v0, 0x560($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0650u;
            goto label_1c0650;
        }
    }
    ctx->pc = 0x1C0588u;
label_1c0588:
    // 0x1c0588: 0xc66105d0  lwc1        $f1, 0x5D0($s3)
    ctx->pc = 0x1c0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c058c:
    // 0x1c058c: 0x266305d0  addiu       $v1, $s3, 0x5D0
    ctx->pc = 0x1c058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
label_1c0590:
    // 0x1c0590: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x1c0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0594:
    // 0x1c0594: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c0594u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0598:
    // 0x1c0598: 0x0  nop
    ctx->pc = 0x1c0598u;
    // NOP
label_1c059c:
    // 0x1c059c: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1c05a0:
    if (ctx->pc == 0x1C05A0u) {
        ctx->pc = 0x1C05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C059Cu;
        // 0x1c05a0: 0x26620100  addiu       $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05A4u;
        goto label_1c05a4;
    }
    ctx->pc = 0x1C059Cu;
    {
        const bool branch_taken_0x1c059c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C059Cu;
        // 0x1c05a0: 0x26620100  addiu       $v0, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c059c) {
            ctx->pc = 0x1C05ECu;
            goto label_1c05ec;
        }
    }
    ctx->pc = 0x1C05A4u;
label_1c05a4:
    // 0x1c05a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1c05a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c05a8:
    // 0x1c05a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1c05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c05ac:
    // 0x1c05ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c05acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c05b0:
    // 0x1c05b0: 0x0  nop
    ctx->pc = 0x1c05b0u;
    // NOP
label_1c05b4:
    // 0x1c05b4: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_1c05b8:
    if (ctx->pc == 0x1C05B8u) {
        ctx->pc = 0x1C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05B4u;
        // 0x1c05b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05BCu;
        goto label_1c05bc;
    }
    ctx->pc = 0x1C05B4u;
    {
        const bool branch_taken_0x1c05b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c05b4) {
            ctx->pc = 0x1C05B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C05B4u;
            // 0x1c05b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C05F0u;
            goto label_1c05f0;
        }
    }
    ctx->pc = 0x1C05BCu;
label_1c05bc:
    // 0x1c05bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1c05bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c05c0:
    // 0x1c05c0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1c05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c05c4:
    // 0x1c05c4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c05c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c05c8:
    // 0x1c05c8: 0x0  nop
    ctx->pc = 0x1c05c8u;
    // NOP
label_1c05cc:
    // 0x1c05cc: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_1c05d0:
    if (ctx->pc == 0x1C05D0u) {
        ctx->pc = 0x1C05D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05CCu;
        // 0x1c05d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05D4u;
        goto label_1c05d4;
    }
    ctx->pc = 0x1C05CCu;
    {
        const bool branch_taken_0x1c05cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c05cc) {
            ctx->pc = 0x1C05D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C05CCu;
            // 0x1c05d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C05F0u;
            goto label_1c05f0;
        }
    }
    ctx->pc = 0x1C05D4u;
label_1c05d4:
    // 0x1c05d4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1c05d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c05d8:
    // 0x1c05d8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1c05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c05dc:
    // 0x1c05dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1c05dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c05e0:
    // 0x1c05e0: 0x0  nop
    ctx->pc = 0x1c05e0u;
    // NOP
label_1c05e4:
    // 0x1c05e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1c05e8:
    if (ctx->pc == 0x1C05E8u) {
        ctx->pc = 0x1C05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05E4u;
        // 0x1c05e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05ECu;
        goto label_1c05ec;
    }
    ctx->pc = 0x1C05E4u;
    {
        const bool branch_taken_0x1c05e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C05E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05E4u;
        // 0x1c05e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05e4) {
            ctx->pc = 0x1C05F0u;
            goto label_1c05f0;
        }
    }
    ctx->pc = 0x1C05ECu;
label_1c05ec:
    // 0x1c05ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c05ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c05f0:
    // 0x1c05f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1c05f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c05f4:
    // 0x1c05f4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1c05f8:
    if (ctx->pc == 0x1C05F8u) {
        ctx->pc = 0x1C05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05F4u;
        // 0x1c05f8: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C05FCu;
        goto label_1c05fc;
    }
    ctx->pc = 0x1C05F4u;
    {
        const bool branch_taken_0x1c05f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C05F4u;
        // 0x1c05f8: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c05f4) {
            ctx->pc = 0x1C064Cu;
            goto label_1c064c;
        }
    }
    ctx->pc = 0x1C05FCu;
label_1c05fc:
    // 0x1c05fc: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c05fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c0600:
    // 0x1c0600: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1c0600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_1c0604:
    // 0x1c0604: 0x96720662  lhu         $s2, 0x662($s3)
    ctx->pc = 0x1c0604u;
    SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1634)));
label_1c0608:
    // 0x1c0608: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1c0608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1c060c:
    // 0x1c060c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1c060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1c0610:
    // 0x1c0610: 0x40f809  jalr        $v0
label_1c0614:
    if (ctx->pc == 0x1C0614u) {
        ctx->pc = 0x1C0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0610u;
        // 0x1c0614: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0618u;
        goto label_1c0618;
    }
    ctx->pc = 0x1C0610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0618u);
        ctx->pc = 0x1C0614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0610u;
        // 0x1c0614: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0610u, 0x1C0618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0618u;
label_1c0618:
    // 0x1c0618: 0x8e630214  lw          $v1, 0x214($s3)
    ctx->pc = 0x1c0618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 532)));
label_1c061c:
    // 0x1c061c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c061cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0620:
    // 0x1c0620: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1c0620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1c0624:
    // 0x1c0624: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1c0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1c0628:
    // 0x1c0628: 0x40f809  jalr        $v0
label_1c062c:
    if (ctx->pc == 0x1C062Cu) {
        ctx->pc = 0x1C062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0628u;
        // 0x1c062c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0630u;
        goto label_1c0630;
    }
    ctx->pc = 0x1C0628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0630u);
        ctx->pc = 0x1C062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0628u;
        // 0x1c062c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0628u, 0x1C0630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0630u;
label_1c0630:
    // 0x1c0630: 0x8e680560  lw          $t0, 0x560($s3)
    ctx->pc = 0x1c0630u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
label_1c0634:
    // 0x1c0634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0638:
    // 0x1c0638: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c0638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c063c:
    // 0x1c063c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c063cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0640:
    // 0x1c0640: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c0640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0644:
    // 0x1c0644: 0xc07ec70  jal         func_1FB1C0
label_1c0648:
    if (ctx->pc == 0x1C0648u) {
        ctx->pc = 0x1C0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0644u;
        // 0x1c0648: 0x26690676  addiu       $t1, $s3, 0x676 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1654));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C064Cu;
        goto label_1c064c;
    }
    ctx->pc = 0x1C0644u;
    SET_GPR_U32(ctx, 31, 0x1C064Cu);
    ctx->pc = 0x1C0648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0644u;
    // 0x1c0648: 0x26690676  addiu       $t1, $s3, 0x676 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 1654));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB1C0u, 0x1C0644u, 0x1C064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C064Cu;
label_1c064c:
    // 0x1c064c: 0x8e620560  lw          $v0, 0x560($s3)
    ctx->pc = 0x1c064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1376)));
label_1c0650:
    // 0x1c0650: 0x92630676  lbu         $v1, 0x676($s3)
    ctx->pc = 0x1c0650u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1654)));
label_1c0654:
    // 0x1c0654: 0xae62067c  sw          $v0, 0x67C($s3)
    ctx->pc = 0x1c0654u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1660), GPR_U32(ctx, 2));
label_1c0658:
    // 0x1c0658: 0xa2630677  sb          $v1, 0x677($s3)
    ctx->pc = 0x1c0658u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1655), (uint8_t)GPR_U32(ctx, 3));
label_1c065c:
    // 0x1c065c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c065cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c0660:
    // 0x1c0660: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c0660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0664:
    // 0x1c0664: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0668:
    // 0x1c0668: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1c0668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c066c:
    // 0x1c066c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c066cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0670:
    // 0x1c0670: 0x3e00008  jr          $ra
label_1c0674:
    if (ctx->pc == 0x1C0674u) {
        ctx->pc = 0x1C0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0670u;
        // 0x1c0674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0678u;
        goto label_fallthrough_0x1c0670;
    }
    ctx->pc = 0x1C0670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0670u;
        // 0x1c0674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c0670:
    ctx->pc = 0x1C0678u;
}

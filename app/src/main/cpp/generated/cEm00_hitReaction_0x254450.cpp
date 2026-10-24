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

// Function: cEm00_hitReaction
// Address: 0x254450 - 0x2557f8
void cEm00_hitReaction_0x254450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_hitReaction_0x254450");
#endif

    switch (ctx->pc) {
        case 0x254614u: goto label_254614;
        case 0x25461cu: goto label_25461c;
        case 0x25474cu: goto label_25474c;
        case 0x25475cu: goto label_25475c;
        case 0x25477cu: goto label_25477c;
        case 0x2547b8u: goto label_2547b8;
        case 0x254860u: goto label_254860;
        case 0x25488cu: goto label_25488c;
        case 0x254930u: goto label_254930;
        case 0x254938u: goto label_254938;
        case 0x254960u: goto label_254960;
        case 0x2549acu: goto label_2549ac;
        case 0x2549f8u: goto label_2549f8;
        case 0x254adcu: goto label_254adc;
        case 0x254b5cu: goto label_254b5c;
        case 0x254b70u: goto label_254b70;
        case 0x254ba0u: goto label_254ba0;
        case 0x254bb0u: goto label_254bb0;
        case 0x254bc0u: goto label_254bc0;
        case 0x254bd0u: goto label_254bd0;
        case 0x254c40u: goto label_254c40;
        case 0x254ca0u: goto label_254ca0;
        case 0x254cb0u: goto label_254cb0;
        case 0x254cc0u: goto label_254cc0;
        case 0x254ce0u: goto label_254ce0;
        case 0x254d24u: goto label_254d24;
        case 0x254db8u: goto label_254db8;
        case 0x254de8u: goto label_254de8;
        case 0x254e54u: goto label_254e54;
        case 0x254e68u: goto label_254e68;
        case 0x254eb8u: goto label_254eb8;
        case 0x254ed0u: goto label_254ed0;
        case 0x254ee8u: goto label_254ee8;
        case 0x254ef4u: goto label_254ef4;
        case 0x254f50u: goto label_254f50;
        case 0x254f8cu: goto label_254f8c;
        case 0x254f9cu: goto label_254f9c;
        case 0x254fbcu: goto label_254fbc;
        case 0x2550c0u: goto label_2550c0;
        case 0x2550e0u: goto label_2550e0;
        case 0x2550f0u: goto label_2550f0;
        case 0x255104u: goto label_255104;
        case 0x255110u: goto label_255110;
        case 0x255158u: goto label_255158;
        case 0x25516cu: goto label_25516c;
        case 0x255174u: goto label_255174;
        case 0x2551acu: goto label_2551ac;
        case 0x2551e4u: goto label_2551e4;
        case 0x25521cu: goto label_25521c;
        case 0x255248u: goto label_255248;
        case 0x255274u: goto label_255274;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552d4u: goto label_2552d4;
        case 0x255310u: goto label_255310;
        case 0x255340u: goto label_255340;
        case 0x2553e4u: goto label_2553e4;
        case 0x2553ecu: goto label_2553ec;
        case 0x255414u: goto label_255414;
        case 0x25541cu: goto label_25541c;
        case 0x255428u: goto label_255428;
        case 0x255458u: goto label_255458;
        case 0x25547cu: goto label_25547c;
        case 0x2554a0u: goto label_2554a0;
        case 0x2554c4u: goto label_2554c4;
        case 0x2554f8u: goto label_2554f8;
        case 0x25551cu: goto label_25551c;
        case 0x2555c4u: goto label_2555c4;
        case 0x2555ccu: goto label_2555cc;
        case 0x2555dcu: goto label_2555dc;
        case 0x2555ecu: goto label_2555ec;
        case 0x2555fcu: goto label_2555fc;
        case 0x255658u: goto label_255658;
        case 0x255678u: goto label_255678;
        case 0x2556c8u: goto label_2556c8;
        case 0x2556d8u: goto label_2556d8;
        case 0x255750u: goto label_255750;
        case 0x25576cu: goto label_25576c;
        case 0x255780u: goto label_255780;
        case 0x2557a8u: goto label_2557a8;
        case 0x2557c4u: goto label_2557c4;
        case 0x2557d0u: goto label_2557d0;
        default: break;
    }

    ctx->pc = 0x254450u;

    // 0x254450: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x254450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x254454: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x254454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x254458: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x254458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25445c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25445cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254460: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x254460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x254464: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x254464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x254468: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x254468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x25446c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x25446cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x254470: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x254470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x254474: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x254474u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x254478: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x254478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x25447c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x25447cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254480: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x254480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x254484: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x254484u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x254488: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x254488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25448c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x25448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x254490: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x254490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254494: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x254494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x254498: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254498u;
    {
        const bool branch_taken_0x254498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254498u;
        // 0x25449c: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254498) {
            ctx->pc = 0x2544B8u;
            goto label_2544b8;
        }
    }
    ctx->pc = 0x2544A0u;
    // 0x2544a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2544A0u;
    {
        const bool branch_taken_0x2544a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544A0u;
        // 0x2544a4: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544a0) {
            ctx->pc = 0x2544C4u;
            goto label_2544c4;
        }
    }
    ctx->pc = 0x2544A8u;
    // 0x2544a8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2544A8u;
    {
        const bool branch_taken_0x2544a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2544a8) {
            ctx->pc = 0x2544ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544A8u;
            // 0x2544ac: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2544C8u;
            goto label_2544c8;
        }
    }
    ctx->pc = 0x2544B0u;
    // 0x2544b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2544B0u;
    {
        const bool branch_taken_0x2544b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544B0u;
        // 0x2544b4: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544b0) {
            ctx->pc = 0x2544DCu;
            goto label_2544dc;
        }
    }
    ctx->pc = 0x2544B8u;
label_2544b8:
    // 0x2544b8: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2544b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x2544bc: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2544BCu;
    {
        const bool branch_taken_0x2544bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2544bc) {
            ctx->pc = 0x2544C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544BCu;
            // 0x2544c0: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2544DCu;
            goto label_2544dc;
        }
    }
    ctx->pc = 0x2544C4u;
label_2544c4:
    // 0x2544c4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2544c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2544c8:
    // 0x2544c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2544C8u;
    {
        const bool branch_taken_0x2544c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2544c8) {
            ctx->pc = 0x2544CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544C8u;
            // 0x2544cc: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2544DCu;
            goto label_2544dc;
        }
    }
    ctx->pc = 0x2544D0u;
    // 0x2544d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2544d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2544d4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2544d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2544d8: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2544d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_2544dc:
    // 0x2544dc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2544dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2544e0: 0x104004bb  beqz        $v0, . + 4 + (0x4BB << 2)
    ctx->pc = 0x2544E0u;
    {
        const bool branch_taken_0x2544e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2544E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544E0u;
        // 0x2544e4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2544e0) {
            ctx->pc = 0x2557D0u;
            goto label_2557d0;
        }
    }
    ctx->pc = 0x2544E8u;
    // 0x2544e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2544e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2544ec: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x2544ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x2544f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2544f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2544f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2544f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2544f8: 0x800008  jr          $a0
    ctx->pc = 0x2544F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254500u: goto label_254500;
            case 0x2549B8u: goto label_2549b8;
            case 0x254CA8u: goto label_254ca8;
            case 0x254E60u: goto label_254e60;
            case 0x254F84u: goto label_254f84;
            case 0x2550D8u: goto label_2550d8;
            case 0x255118u: goto label_255118;
            case 0x255594u: goto label_255594;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254500u;
label_254500:
    // 0x254500: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x254500u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x254504: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x254504u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x254508: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254508u;
    {
        const bool branch_taken_0x254508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254508u;
        // 0x25450c: 0xae201710  sw          $zero, 0x1710($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254508) {
            ctx->pc = 0x25452Cu;
            goto label_25452c;
        }
    }
    ctx->pc = 0x254510u;
    // 0x254510: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x254510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x254514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254518: 0x244206e0  addiu       $v0, $v0, 0x6E0
    ctx->pc = 0x254518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1760));
    // 0x25451c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254520: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254524: 0x800008  jr          $a0
    ctx->pc = 0x254524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25452Cu: goto label_25452c;
            case 0x254540u: goto label_254540;
            case 0x254574u: goto label_254574;
            case 0x254588u: goto label_254588;
            case 0x2545B4u: goto label_2545b4;
            case 0x2545C8u: goto label_2545c8;
            case 0x2545DCu: goto label_2545dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25452Cu;
label_25452c:
    // 0x25452c: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x25452cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x254530: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x254530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x254534: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254538: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x254538u;
    {
        const bool branch_taken_0x254538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254538u;
        // 0x25453c: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254538) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254540u;
label_254540:
    // 0x254540: 0x3c013d1f  lui         $at, 0x3D1F
    ctx->pc = 0x254540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15647 << 16));
    // 0x254544: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x254544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x254548: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25454c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x25454cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x254550: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x254550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    // 0x254554: 0x9062b010  lbu         $v0, -0x4FF0($v1)
    ctx->pc = 0x254554u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x254558: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x254558u;
    {
        const bool branch_taken_0x254558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254558) {
            ctx->pc = 0x25455Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254558u;
            // 0x25455c: 0x922302f7  lbu         $v1, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F4u;
            goto label_2545f4;
        }
    }
    ctx->pc = 0x254560u;
    // 0x254560: 0x3c013cd4  lui         $at, 0x3CD4
    ctx->pc = 0x254560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15572 << 16));
    // 0x254564: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x254564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x254568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25456c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x25456Cu;
    {
        const bool branch_taken_0x25456c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25456Cu;
        // 0x254570: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25456c) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254574u;
label_254574:
    // 0x254574: 0x3c013e6f  lui         $at, 0x3E6F
    ctx->pc = 0x254574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15983 << 16));
    // 0x254578: 0x34219db2  ori         $at, $at, 0x9DB2
    ctx->pc = 0x254578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40370);
    // 0x25457c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25457cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254580: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x254580u;
    {
        const bool branch_taken_0x254580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254580u;
        // 0x254584: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254580) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x254588u;
label_254588:
    // 0x254588: 0x922217c1  lbu         $v0, 0x17C1($s1)
    ctx->pc = 0x254588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6081)));
    // 0x25458c: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x25458cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x254590: 0x34215e36  ori         $at, $at, 0x5E36
    ctx->pc = 0x254590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24118);
    // 0x254594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254598: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x254598u;
    {
        const bool branch_taken_0x254598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254598) {
            ctx->pc = 0x25459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254598u;
            // 0x25459c: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x2545A0u;
    // 0x2545a0: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2545a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2545a4: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2545a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2545a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2545a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2545ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2545ACu;
    {
        const bool branch_taken_0x2545ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545ACu;
        // 0x2545b0: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545ac) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x2545B4u;
label_2545b4:
    // 0x2545b4: 0x3c013dba  lui         $at, 0x3DBA
    ctx->pc = 0x2545b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15802 << 16));
    // 0x2545b8: 0x34215e36  ori         $at, $at, 0x5E36
    ctx->pc = 0x2545b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24118);
    // 0x2545bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2545bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2545c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2545C0u;
    {
        const bool branch_taken_0x2545c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545C0u;
        // 0x2545c4: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545c0) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x2545C8u;
label_2545c8:
    // 0x2545c8: 0x3c013c9f  lui         $at, 0x3C9F
    ctx->pc = 0x2545c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15519 << 16));
    // 0x2545cc: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x2545ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
    // 0x2545d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2545d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2545d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2545D4u;
    {
        const bool branch_taken_0x2545d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545D4u;
        // 0x2545d8: 0xe62005c4  swc1        $f0, 0x5C4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545d4) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x2545DCu;
label_2545dc:
    // 0x2545dc: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x2545dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x2545e0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2545e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2545e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2545e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2545e8: 0x0  nop
    ctx->pc = 0x2545e8u;
    // NOP
    // 0x2545ec: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2545ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_2545f0:
    // 0x2545f0: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x2545f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_2545f4:
    // 0x2545f4: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x2545f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2545f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2545F8u;
    {
        const bool branch_taken_0x2545f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545F8u;
        // 0x2545fc: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545f8) {
            ctx->pc = 0x25461Cu;
            goto label_25461c;
        }
    }
    ctx->pc = 0x254600u;
    // 0x254600: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x254600u;
    {
        const bool branch_taken_0x254600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254600) {
            ctx->pc = 0x254604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254600u;
            // 0x254604: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254620u;
            goto label_254620;
        }
    }
    ctx->pc = 0x254608u;
    // 0x254608: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x254608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x25460c: 0xc0a4ba0  jal         func_292E80
    ctx->pc = 0x25460Cu;
    SET_GPR_U32(ctx, 31, 0x254614u);
    ctx->pc = 0x254610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25460Cu;
    // 0x254610: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292E80u, 0x25460Cu, 0x254614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254614u;
label_254614:
    // 0x254614: 0xc09c5f4  jal         func_2717D0
    ctx->pc = 0x254614u;
    SET_GPR_U32(ctx, 31, 0x25461Cu);
    ctx->pc = 0x254618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254614u;
    // 0x254618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2717D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2717D0u, 0x254614u, 0x25461Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25461Cu;
label_25461c:
    // 0x25461c: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x25461cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_254620:
    // 0x254620: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x254620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254624: 0x50440009  beql        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254624u;
    {
        const bool branch_taken_0x254624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x254624) {
            ctx->pc = 0x254628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254624u;
            // 0x254628: 0x922202f7  lbu         $v0, 0x2F7($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25464Cu;
            goto label_25464c;
        }
    }
    ctx->pc = 0x25462Cu;
    // 0x25462c: 0x92221867  lbu         $v0, 0x1867($s1)
    ctx->pc = 0x25462cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6247)));
    // 0x254630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x254630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254634: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x254634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x254638: 0x2c630005  sltiu       $v1, $v1, 0x5
    ctx->pc = 0x254638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25463c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25463Cu;
    {
        const bool branch_taken_0x25463c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25463Cu;
        // 0x254640: 0xa2221867  sb          $v0, 0x1867($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6247), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25463c) {
            ctx->pc = 0x254648u;
            goto label_254648;
        }
    }
    ctx->pc = 0x254644u;
    // 0x254644: 0xa2241867  sb          $a0, 0x1867($s1)
    ctx->pc = 0x254644u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6247), (uint8_t)GPR_U32(ctx, 4));
label_254648:
    // 0x254648: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x254648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_25464c:
    // 0x25464c: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x25464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x254650: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x254650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x254654: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x254654u;
    {
        const bool branch_taken_0x254654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254654) {
            ctx->pc = 0x254744u;
            goto label_254744;
        }
    }
    ctx->pc = 0x25465Cu;
    // 0x25465c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x25465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254660: 0x2444fdf6  addiu       $a0, $v0, -0x20A
    ctx->pc = 0x254660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966774));
    // 0x254664: 0x2c830070  sltiu       $v1, $a0, 0x70
    ctx->pc = 0x254664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)112) ? 1 : 0);
    // 0x254668: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x254668u;
    {
        const bool branch_taken_0x254668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254668u;
        // 0x25466c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254668) {
            ctx->pc = 0x254744u;
            goto label_254744;
        }
    }
    ctx->pc = 0x254670u;
    // 0x254670: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x254670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x254674: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x254674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x254678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25467c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254680: 0x800008  jr          $a0
    ctx->pc = 0x254680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254688u: goto label_254688;
            case 0x25469Cu: goto label_25469c;
            case 0x254718u: goto label_254718;
            case 0x254744u: goto label_254744;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254688u;
label_254688:
    // 0x254688: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x254688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x25468c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25468cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x254690: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254694: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x254694u;
    {
        const bool branch_taken_0x254694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254694u;
        // 0x254698: 0xc62005c4  lwc1        $f0, 0x5C4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254694) {
            ctx->pc = 0x254738u;
            goto label_254738;
        }
    }
    ctx->pc = 0x25469Cu;
label_25469c:
    // 0x25469c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x25469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2546a0: 0x24447a2c  addiu       $a0, $v0, 0x7A2C
    ctx->pc = 0x2546a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x2546a4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2546a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A3Cu));
    // 0x2546a8: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x2546a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2546ac: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2546ACu;
    {
        const bool branch_taken_0x2546ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2546ac) {
            ctx->pc = 0x2546B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2546ACu;
            // 0x2546b0: 0x94830024  lhu         $v1, 0x24($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2546C4u;
            goto label_2546c4;
        }
    }
    ctx->pc = 0x2546B4u;
    // 0x2546b4: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x2546b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2546b8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2546B8u;
    {
        const bool branch_taken_0x2546b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546B8u;
        // 0x2546bc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546b8) {
            ctx->pc = 0x25471Cu;
            goto label_25471c;
        }
    }
    ctx->pc = 0x2546C0u;
    // 0x2546c0: 0x94830024  lhu         $v1, 0x24($a0)
    ctx->pc = 0x2546c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
label_2546c4:
    // 0x2546c4: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2546c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2546c8: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2546C8u;
    {
        const bool branch_taken_0x2546c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2546CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546C8u;
        // 0x2546cc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546c8) {
            ctx->pc = 0x25471Cu;
            goto label_25471c;
        }
    }
    ctx->pc = 0x2546D0u;
    // 0x2546d0: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x2546d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x2546d4: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2546d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2546d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2546D8u;
    {
        const bool branch_taken_0x2546d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546D8u;
        // 0x2546dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546d8) {
            ctx->pc = 0x2546FCu;
            goto label_2546fc;
        }
    }
    ctx->pc = 0x2546E0u;
    // 0x2546e0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2546E0u;
    {
        const bool branch_taken_0x2546e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2546e0) {
            ctx->pc = 0x2546E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2546E0u;
            // 0x2546e4: 0xc62005c4  lwc1        $f0, 0x5C4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x254700u;
            goto label_254700;
        }
    }
    ctx->pc = 0x2546E8u;
    // 0x2546e8: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2546e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2546ec: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2546ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2546f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2546f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2546f4: 0x0  nop
    ctx->pc = 0x2546f4u;
    // NOP
    // 0x2546f8: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2546f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_2546fc:
    // 0x2546fc: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x2546fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_254700:
    // 0x254700: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x254700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x254704: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x254704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x254708: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25470c: 0x0  nop
    ctx->pc = 0x25470cu;
    // NOP
    // 0x254710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x254714: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x254714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_254718:
    // 0x254718: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x254718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_25471c:
    // 0x25471c: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x25471cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x254720: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x254720u;
    {
        const bool branch_taken_0x254720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254720) {
            ctx->pc = 0x254744u;
            goto label_254744;
        }
    }
    ctx->pc = 0x254728u;
    // 0x254728: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x254728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25472c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x25472cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x254730: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x254730u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x254734: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_254738:
    // 0x254738: 0x0  nop
    ctx->pc = 0x254738u;
    // NOP
    // 0x25473c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x25473cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x254740: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x254740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_254744:
    // 0x254744: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x254744u;
    SET_GPR_U32(ctx, 31, 0x25474Cu);
    ctx->pc = 0x254748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254744u;
    // 0x254748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x254744u, 0x25474Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25474Cu;
label_25474c:
    // 0x25474c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25474Cu;
    {
        const bool branch_taken_0x25474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25474c) {
            ctx->pc = 0x254774u;
            goto label_254774;
        }
    }
    ctx->pc = 0x254754u;
    // 0x254754: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254754u;
    SET_GPR_U32(ctx, 31, 0x25475Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254754u, 0x25475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25475Cu;
label_25475c:
    // 0x25475c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254760: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254760u;
    {
        const bool branch_taken_0x254760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254760u;
        // 0x254764: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254760) {
            ctx->pc = 0x254770u;
            goto label_254770;
        }
    }
    ctx->pc = 0x254768u;
    // 0x254768: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254768u;
    {
        const bool branch_taken_0x254768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254768u;
        // 0x25476c: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254768) {
            ctx->pc = 0x254774u;
            goto label_254774;
        }
    }
    ctx->pc = 0x254770u;
label_254770:
    // 0x254770: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x254770u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_254774:
    // 0x254774: 0xc09d91a  jal         func_276468
    ctx->pc = 0x254774u;
    SET_GPR_U32(ctx, 31, 0x25477Cu);
    ctx->pc = 0x254778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254774u;
    // 0x254778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x254774u, 0x25477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25477Cu;
label_25477c:
    // 0x25477c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x25477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254780: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x254780u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254784: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x254784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x254788: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x254788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x25478c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25478Cu;
    {
        const bool branch_taken_0x25478c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25478Cu;
        // 0x254790: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25478c) {
            ctx->pc = 0x2547B0u;
            goto label_2547b0;
        }
    }
    ctx->pc = 0x254794u;
    // 0x254794: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x254794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x254798: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25479c: 0x244208c0  addiu       $v0, $v0, 0x8C0
    ctx->pc = 0x25479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
    // 0x2547a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2547a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2547a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2547a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2547a8: 0x800008  jr          $a0
    ctx->pc = 0x2547A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2547B0u: goto label_2547b0;
            case 0x2547DCu: goto label_2547dc;
            case 0x25482Cu: goto label_25482c;
            case 0x25483Cu: goto label_25483c;
            case 0x254894u: goto label_254894;
            case 0x2548A4u: goto label_2548a4;
            case 0x2548B4u: goto label_2548b4;
            case 0x2548C4u: goto label_2548c4;
            case 0x2548D4u: goto label_2548d4;
            case 0x2548E4u: goto label_2548e4;
            case 0x2548F4u: goto label_2548f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2547A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2547B0u;
label_2547b0:
    // 0x2547b0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2547B0u;
    SET_GPR_U32(ctx, 31, 0x2547B8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2547B0u, 0x2547B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547B8u;
label_2547b8:
    // 0x2547b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2547b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2547bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2547BCu;
    {
        const bool branch_taken_0x2547bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547BCu;
        // 0x2547c0: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547bc) {
            ctx->pc = 0x2547D0u;
            goto label_2547d0;
        }
    }
    ctx->pc = 0x2547C4u;
    // 0x2547c4: 0x8c4305b8  lw          $v1, 0x5B8($v0)
    ctx->pc = 0x2547c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1464)));
    // 0x2547c8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2547C8u;
    {
        const bool branch_taken_0x2547c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C8u;
        // 0x2547cc: 0x8c4405bc  lw          $a0, 0x5BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547c8) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2547D0u;
label_2547d0:
    // 0x2547d0: 0x8c4305b8  lw          $v1, 0x5B8($v0)
    ctx->pc = 0x2547d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1464)));
    // 0x2547d4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2547D4u;
    {
        const bool branch_taken_0x2547d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547D4u;
        // 0x2547d8: 0x8c4405bc  lw          $a0, 0x5BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547d4) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2547DCu;
label_2547dc:
    // 0x2547dc: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x2547dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x2547e0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2547e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2547e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2547E4u;
    {
        const bool branch_taken_0x2547e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547E4u;
        // 0x2547e8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547e4) {
            ctx->pc = 0x254804u;
            goto label_254804;
        }
    }
    ctx->pc = 0x2547ECu;
    // 0x2547ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2547ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2547f0: 0x24420aa0  addiu       $v0, $v0, 0xAA0
    ctx->pc = 0x2547f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2720));
    // 0x2547f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2547f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2547f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2547f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2547fc: 0x800008  jr          $a0
    ctx->pc = 0x2547FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254804u: goto label_254804;
            case 0x254814u: goto label_254814;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2547FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254804u;
label_254804:
    // 0x254804: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254808: 0x8c430eb4  lw          $v1, 0xEB4($v0)
    ctx->pc = 0x254808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3764)));
    // 0x25480c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x25480Cu;
    {
        const bool branch_taken_0x25480c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25480Cu;
        // 0x254810: 0x8c440eb8  lw          $a0, 0xEB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25480c) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x254814u;
label_254814:
    // 0x254814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x254814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254818: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25481c: 0xae2305f4  sw          $v1, 0x5F4($s1)
    ctx->pc = 0x25481cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
    // 0x254820: 0x8c430eac  lw          $v1, 0xEAC($v0)
    ctx->pc = 0x254820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
    // 0x254824: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x254824u;
    {
        const bool branch_taken_0x254824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254824u;
        // 0x254828: 0x8c440eb0  lw          $a0, 0xEB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254824) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x25482Cu;
label_25482c:
    // 0x25482c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254830: 0x8c430a68  lw          $v1, 0xA68($v0)
    ctx->pc = 0x254830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x254834: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x254834u;
    {
        const bool branch_taken_0x254834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254834u;
        // 0x254838: 0x8c440a6c  lw          $a0, 0xA6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254834) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x25483Cu;
label_25483c:
    // 0x25483c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x25483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254840: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x254840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x254844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254848: 0x2470ee00  addiu       $s0, $v1, -0x1200
    ctx->pc = 0x254848u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x25484c: 0x8c460a68  lw          $a2, 0xA68($v0)
    ctx->pc = 0x25484cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x254850: 0x8c450a6c  lw          $a1, 0xA6C($v0)
    ctx->pc = 0x254850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2668)));
    // 0x254854: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x254854u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x254858: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x254858u;
    SET_GPR_U32(ctx, 31, 0x254860u);
    ctx->pc = 0x25485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254858u;
    // 0x25485c: 0xa29021  addu        $s2, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x254858u, 0x254860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254860u;
label_254860:
    // 0x254860: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x254860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x254864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254868: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x254868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25486c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25486cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254870: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x254870u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x254874: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x254874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254878: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x254878u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25487c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25487cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254880: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x254880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254884: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x254884u;
    SET_GPR_U32(ctx, 31, 0x25488Cu);
    ctx->pc = 0x254888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254884u;
    // 0x254888: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x254884u, 0x25488Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25488Cu;
label_25488c:
    // 0x25488c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25488Cu;
    {
        const bool branch_taken_0x25488c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25488c) {
            ctx->pc = 0x254908u;
            goto label_254908;
        }
    }
    ctx->pc = 0x254894u;
label_254894:
    // 0x254894: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254898: 0x8c433184  lw          $v1, 0x3184($v0)
    ctx->pc = 0x254898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12676)));
    // 0x25489c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25489Cu;
    {
        const bool branch_taken_0x25489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25489Cu;
        // 0x2548a0: 0x8c443188  lw          $a0, 0x3188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25489c) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2548A4u;
label_2548a4:
    // 0x2548a4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2548a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2548a8: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x2548a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x2548ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2548ACu;
    {
        const bool branch_taken_0x2548ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548ACu;
        // 0x2548b0: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548ac) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2548B4u;
label_2548b4:
    // 0x2548b4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2548b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2548b8: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x2548b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x2548bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2548BCu;
    {
        const bool branch_taken_0x2548bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548BCu;
        // 0x2548c0: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548bc) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2548C4u;
label_2548c4:
    // 0x2548c4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2548c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2548c8: 0x8c4305b8  lw          $v1, 0x5B8($v0)
    ctx->pc = 0x2548c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1464)));
    // 0x2548cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2548CCu;
    {
        const bool branch_taken_0x2548cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548CCu;
        // 0x2548d0: 0x8c4405bc  lw          $a0, 0x5BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548cc) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2548D4u;
label_2548d4:
    // 0x2548d4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2548d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2548d8: 0x8c432ea4  lw          $v1, 0x2EA4($v0)
    ctx->pc = 0x2548d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11940)));
    // 0x2548dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2548DCu;
    {
        const bool branch_taken_0x2548dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548DCu;
        // 0x2548e0: 0x8c442ea8  lw          $a0, 0x2EA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548dc) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2548E4u;
label_2548e4:
    // 0x2548e4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2548e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2548e8: 0x8c4312d8  lw          $v1, 0x12D8($v0)
    ctx->pc = 0x2548e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4824)));
    // 0x2548ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2548ECu;
    {
        const bool branch_taken_0x2548ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2548F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2548ECu;
        // 0x2548f0: 0x8c4412dc  lw          $a0, 0x12DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2548ec) {
            ctx->pc = 0x254900u;
            goto label_254900;
        }
    }
    ctx->pc = 0x2548F4u;
label_2548f4:
    // 0x2548f4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2548f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2548f8: 0x8c431710  lw          $v1, 0x1710($v0)
    ctx->pc = 0x2548f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5904)));
    // 0x2548fc: 0x8c441714  lw          $a0, 0x1714($v0)
    ctx->pc = 0x2548fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5908)));
label_254900:
    // 0x254900: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x254900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254904: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x254904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_254908:
    // 0x254908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x254908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25490c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x25490cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x254910: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254914: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x254914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254918: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x254918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25491c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x25491cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x254920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x254920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254924: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x254924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x254928: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x254928u;
    SET_GPR_U32(ctx, 31, 0x254930u);
    ctx->pc = 0x25492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254928u;
    // 0x25492c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x254928u, 0x254930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254930u;
label_254930:
    // 0x254930: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x254930u;
    SET_GPR_U32(ctx, 31, 0x254938u);
    ctx->pc = 0x254934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254930u;
    // 0x254934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x254930u, 0x254938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254938u;
label_254938:
    // 0x254938: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x254938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25493c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25493cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254940: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x254940u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x254944: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x254944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254948: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x254948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25494c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25494cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x254950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x254954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254958: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x254958u;
    SET_GPR_U32(ctx, 31, 0x254960u);
    ctx->pc = 0x25495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254958u;
    // 0x25495c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x254958u, 0x254960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254960u;
label_254960:
    // 0x254960: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x254964: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x254964u;
    {
        const bool branch_taken_0x254964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254964u;
        // 0x254968: 0xae2005f0  sw          $zero, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254964) {
            ctx->pc = 0x2549A4u;
            goto label_2549a4;
        }
    }
    ctx->pc = 0x25496Cu;
    // 0x25496c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x25496cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x254970: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x254970u;
    {
        const bool branch_taken_0x254970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254970u;
        // 0x254974: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254970) {
            ctx->pc = 0x2549A4u;
            goto label_2549a4;
        }
    }
    ctx->pc = 0x254978u;
    // 0x254978: 0x262305d0  addiu       $v1, $s1, 0x5D0
    ctx->pc = 0x254978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x25497c: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x25497cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x254980: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x254980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x254984: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254984u;
    {
        const bool branch_taken_0x254984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x254984) {
            ctx->pc = 0x2549A4u;
            goto label_2549a4;
        }
    }
    ctx->pc = 0x25498Cu;
    // 0x25498c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254990: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x254990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x254994: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x254994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254998: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x254998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x25499c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2549a0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2549a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2549a4:
    // 0x2549a4: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x2549A4u;
    SET_GPR_U32(ctx, 31, 0x2549ACu);
    ctx->pc = 0x2549A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549A4u;
    // 0x2549a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x2549A4u, 0x2549ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549ACu;
label_2549ac:
    // 0x2549ac: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2549acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2549b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2549b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2549b4: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x2549b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_2549b8:
    // 0x2549b8: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x2549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x2549bc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2549bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2549c0: 0x8e2405f0  lw          $a0, 0x5F0($s1)
    ctx->pc = 0x2549c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x2549c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2549c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2549c8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2549C8u;
    {
        const bool branch_taken_0x2549c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2549CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2549C8u;
        // 0x2549cc: 0xae2216d0  sw          $v0, 0x16D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2549c8) {
            ctx->pc = 0x2549F8u;
            goto label_2549f8;
        }
    }
    ctx->pc = 0x2549D0u;
    // 0x2549d0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x2549d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2549d4: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2549d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2549d8: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2549d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2549dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2549dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2549e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2549e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2549e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2549e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2549e8: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x2549e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x2549ec: 0x262505d0  addiu       $a1, $s1, 0x5D0
    ctx->pc = 0x2549ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x2549f0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2549F0u;
    SET_GPR_U32(ctx, 31, 0x2549F8u);
    ctx->pc = 0x2549F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2549F0u;
    // 0x2549f4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2549F0u, 0x2549F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2549F8u;
label_2549f8:
    // 0x2549f8: 0xc62205a8  lwc1        $f2, 0x5A8($s1)
    ctx->pc = 0x2549f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2549fc: 0xc62105c4  lwc1        $f1, 0x5C4($s1)
    ctx->pc = 0x2549fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254a00: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x254a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x254a04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x254a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x254a08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254a0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x254a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x254a10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x254a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254a14: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x254a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x254a18: 0xc62305c4  lwc1        $f3, 0x5C4($s1)
    ctx->pc = 0x254a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x254a1c: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x254a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254a20: 0x0  nop
    ctx->pc = 0x254a20u;
    // NOP
    // 0x254a24: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x254A24u;
    {
        const bool branch_taken_0x254a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A24u;
        // 0x254a28: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a24) {
            ctx->pc = 0x254A40u;
            goto label_254a40;
        }
    }
    ctx->pc = 0x254A2Cu;
    // 0x254a2c: 0x3c013bff  lui         $at, 0x3BFF
    ctx->pc = 0x254a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15359 << 16));
    // 0x254a30: 0x34219725  ori         $at, $at, 0x9725
    ctx->pc = 0x254a30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38693);
    // 0x254a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254a38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x254A38u;
    {
        const bool branch_taken_0x254a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A38u;
        // 0x254a3c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a38) {
            ctx->pc = 0x254A54u;
            goto label_254a54;
        }
    }
    ctx->pc = 0x254A40u;
label_254a40:
    // 0x254a40: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x254a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x254a44: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x254a44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x254a48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254a4c: 0x0  nop
    ctx->pc = 0x254a4cu;
    // NOP
    // 0x254a50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x254a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_254a54:
    // 0x254a54: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x254a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x254a58: 0xe62005c4  swc1        $f0, 0x5C4($s1)
    ctx->pc = 0x254a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
    // 0x254a5c: 0xc62005c4  lwc1        $f0, 0x5C4($s1)
    ctx->pc = 0x254a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254a60: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x254a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x254a64: 0x0  nop
    ctx->pc = 0x254a64u;
    // NOP
    // 0x254a68: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x254a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254a6c: 0x0  nop
    ctx->pc = 0x254a6cu;
    // NOP
    // 0x254a70: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
    ctx->pc = 0x254A70u;
    {
        const bool branch_taken_0x254a70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254A70u;
        // 0x254a74: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254a70) {
            ctx->pc = 0x254BE8u;
            goto label_254be8;
        }
    }
    ctx->pc = 0x254A78u;
    // 0x254a78: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x254a78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254a7c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x254a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x254a80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254a84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254a88: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x254a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x254a8c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x254a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254a90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x254a90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254a94: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x254a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x254a98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x254a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x254a9c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x254a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x254aa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x254aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254aa4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x254aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254aa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x254aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254aac: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x254aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x254ab0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x254ab0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ab4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x254ab4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254ab8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254abc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x254abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x254ac0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x254ac0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x254ac4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x254ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x254ac8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x254ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x254acc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x254accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x254ad0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x254ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x254ad4: 0xc04c784  jal         func_131E10
    ctx->pc = 0x254AD4u;
    SET_GPR_U32(ctx, 31, 0x254ADCu);
    ctx->pc = 0x254AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254AD4u;
    // 0x254ad8: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x254AD4u, 0x254ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254ADCu;
label_254adc:
    // 0x254adc: 0x54500067  bnel        $v0, $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x254ADCu;
    {
        const bool branch_taken_0x254adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x254adc) {
            ctx->pc = 0x254AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254ADCu;
            // 0x254ae0: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254AE4u;
    // 0x254ae4: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x254ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254ae8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x254ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x254aec: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x254aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x254af0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254af4: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x254af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x254af8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x254af8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x254afc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x254afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x254b00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x254b00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254b04: 0x0  nop
    ctx->pc = 0x254b04u;
    // NOP
    // 0x254b08: 0x4502005c  bc1fl       . + 4 + (0x5C << 2)
    ctx->pc = 0x254B08u;
    {
        const bool branch_taken_0x254b08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254b08) {
            ctx->pc = 0x254B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B08u;
            // 0x254b0c: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254B10u;
    // 0x254b10: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x254b10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x254b14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x254b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254b18: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x254b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254b1c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x254b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x254b20: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x254b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x254b24: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x254b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x254b28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254B28u;
    {
        const bool branch_taken_0x254b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B28u;
        // 0x254b2c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b28) {
            ctx->pc = 0x254B48u;
            goto label_254b48;
        }
    }
    ctx->pc = 0x254B30u;
    // 0x254b30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254b34: 0x24420ac0  addiu       $v0, $v0, 0xAC0
    ctx->pc = 0x254b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2752));
    // 0x254b38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254b3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254b40: 0x800008  jr          $a0
    ctx->pc = 0x254B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254B48u: goto label_254b48;
            case 0x254C78u: goto label_254c78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254B48u;
label_254b48:
    // 0x254b48: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x254b48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x254b4c: 0x5840004b  blezl       $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x254B4Cu;
    {
        const bool branch_taken_0x254b4c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x254b4c) {
            ctx->pc = 0x254B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B4Cu;
            // 0x254b50: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254B54u;
    // 0x254b54: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x254B54u;
    SET_GPR_U32(ctx, 31, 0x254B5Cu);
    ctx->pc = 0x254B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B54u;
    // 0x254b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x254B54u, 0x254B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B5Cu;
label_254b5c:
    // 0x254b5c: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x254B5Cu;
    {
        const bool branch_taken_0x254b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254b5c) {
            ctx->pc = 0x254B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254B5Cu;
            // 0x254b60: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254B64u;
    // 0x254b64: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x254b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x254b68: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x254B68u;
    SET_GPR_U32(ctx, 31, 0x254B70u);
    ctx->pc = 0x254B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254B68u;
    // 0x254b6c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x254B68u, 0x254B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254B70u;
label_254b70:
    // 0x254b70: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x254b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x254b74: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x254b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x254b78: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x254B78u;
    {
        const bool branch_taken_0x254b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254B78u;
        // 0x254b7c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254b78) {
            ctx->pc = 0x254C78u;
            goto label_254c78;
        }
    }
    ctx->pc = 0x254B80u;
    // 0x254b80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254b84: 0x24420cc0  addiu       $v0, $v0, 0xCC0
    ctx->pc = 0x254b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3264));
    // 0x254b88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254b8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254b90: 0x800008  jr          $a0
    ctx->pc = 0x254B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254B98u: goto label_254b98;
            case 0x254BA8u: goto label_254ba8;
            case 0x254BB8u: goto label_254bb8;
            case 0x254BC8u: goto label_254bc8;
            case 0x254C78u: goto label_254c78;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254B90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254B98u;
label_254b98:
    // 0x254b98: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254B98u;
    SET_GPR_U32(ctx, 31, 0x254BA0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254B98u, 0x254BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BA0u;
label_254ba0:
    // 0x254ba0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x254BA0u;
    {
        const bool branch_taken_0x254ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BA0u;
        // 0x254ba4: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ba0) {
            ctx->pc = 0x254BD4u;
            goto label_254bd4;
        }
    }
    ctx->pc = 0x254BA8u;
label_254ba8:
    // 0x254ba8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254BA8u;
    SET_GPR_U32(ctx, 31, 0x254BB0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254BA8u, 0x254BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BB0u;
label_254bb0:
    // 0x254bb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254BB0u;
    {
        const bool branch_taken_0x254bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BB0u;
        // 0x254bb4: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bb0) {
            ctx->pc = 0x254BD4u;
            goto label_254bd4;
        }
    }
    ctx->pc = 0x254BB8u;
label_254bb8:
    // 0x254bb8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254BB8u;
    SET_GPR_U32(ctx, 31, 0x254BC0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254BB8u, 0x254BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BC0u;
label_254bc0:
    // 0x254bc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254BC0u;
    {
        const bool branch_taken_0x254bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BC0u;
        // 0x254bc4: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x254bc0) {
            ctx->pc = 0x254BD4u;
            goto label_254bd4;
        }
    }
    ctx->pc = 0x254BC8u;
label_254bc8:
    // 0x254bc8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254BC8u;
    SET_GPR_U32(ctx, 31, 0x254BD0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254BC8u, 0x254BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254BD0u;
label_254bd0:
    // 0x254bd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_254bd4:
    // 0x254bd4: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x254BD4u;
    {
        const bool branch_taken_0x254bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254bd4) {
            ctx->pc = 0x254BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254BD4u;
            // 0x254bd8: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254BDCu;
    // 0x254bdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x254bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x254be0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x254BE0u;
    {
        const bool branch_taken_0x254be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254BE0u;
        // 0x254be4: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254be0) {
            ctx->pc = 0x254C78u;
            goto label_254c78;
        }
    }
    ctx->pc = 0x254BE8u;
label_254be8:
    // 0x254be8: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x254be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x254bec: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x254becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x254bf0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x254bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254bf4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x254bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x254bf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254bfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x254bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254c00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c04: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x254c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254c08: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x254c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x254c0c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x254c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x254c10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x254c10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x254c14: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x254c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x254c18: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x254c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x254c1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x254c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c20: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x254c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x254c24: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x254c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x254c28: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x254c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x254c2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x254c2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c30: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x254c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x254c34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x254c34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c38: 0xc04c784  jal         func_131E10
    ctx->pc = 0x254C38u;
    SET_GPR_U32(ctx, 31, 0x254C40u);
    ctx->pc = 0x254C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C38u;
    // 0x254c3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x254C38u, 0x254C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254C40u;
label_254c40:
    // 0x254c40: 0x5450000e  bnel        $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x254C40u;
    {
        const bool branch_taken_0x254c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x254c40) {
            ctx->pc = 0x254C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254C40u;
            // 0x254c44: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254C48u;
    // 0x254c48: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x254c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x254c4c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x254c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x254c50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x254c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x254c54: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x254c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x254c58: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x254c58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x254c5c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x254c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x254c60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x254c60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254c64: 0x0  nop
    ctx->pc = 0x254c64u;
    // NOP
    // 0x254c68: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x254C68u;
    {
        const bool branch_taken_0x254c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x254c68) {
            ctx->pc = 0x254C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254C68u;
            // 0x254c6c: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254C7Cu;
            goto label_254c7c;
        }
    }
    ctx->pc = 0x254C70u;
    // 0x254c70: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x254c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x254c74: 0xe63405c4  swc1        $f20, 0x5C4($s1)
    ctx->pc = 0x254c74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1476), bits); }
label_254c78:
    // 0x254c78: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x254c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
label_254c7c:
    // 0x254c7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254C7Cu;
    {
        const bool branch_taken_0x254c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254c7c) {
            ctx->pc = 0x254C90u;
            goto label_254c90;
        }
    }
    ctx->pc = 0x254C84u;
    // 0x254c84: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x254c84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x254c88: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x254c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x254c8c: 0xa6220434  sh          $v0, 0x434($s1)
    ctx->pc = 0x254c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
label_254c90:
    // 0x254c90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254c94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x254c94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x254c98: 0xc055f06  jal         func_157C18
    ctx->pc = 0x254C98u;
    SET_GPR_U32(ctx, 31, 0x254CA0u);
    ctx->pc = 0x254C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254C98u;
    // 0x254c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x254C98u, 0x254CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CA0u;
label_254ca0:
    // 0x254ca0: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x254CA0u;
    {
        const bool branch_taken_0x254ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CA0u;
        // 0x254ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ca0) {
            ctx->pc = 0x2550FCu;
            goto label_2550fc;
        }
    }
    ctx->pc = 0x254CA8u;
label_254ca8:
    // 0x254ca8: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x254CA8u;
    SET_GPR_U32(ctx, 31, 0x254CB0u);
    ctx->pc = 0x254CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CA8u;
    // 0x254cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x254CA8u, 0x254CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CB0u;
label_254cb0:
    // 0x254cb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254CB0u;
    {
        const bool branch_taken_0x254cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254cb0) {
            ctx->pc = 0x254CD8u;
            goto label_254cd8;
        }
    }
    ctx->pc = 0x254CB8u;
    // 0x254cb8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254CB8u;
    SET_GPR_U32(ctx, 31, 0x254CC0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254CB8u, 0x254CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CC0u;
label_254cc0:
    // 0x254cc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254CC4u;
    {
        const bool branch_taken_0x254cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CC4u;
        // 0x254cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cc4) {
            ctx->pc = 0x254CD4u;
            goto label_254cd4;
        }
    }
    ctx->pc = 0x254CCCu;
    // 0x254ccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254CCCu;
    {
        const bool branch_taken_0x254ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CCCu;
        // 0x254cd0: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ccc) {
            ctx->pc = 0x254CD8u;
            goto label_254cd8;
        }
    }
    ctx->pc = 0x254CD4u;
label_254cd4:
    // 0x254cd4: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x254cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_254cd8:
    // 0x254cd8: 0xc09d91a  jal         func_276468
    ctx->pc = 0x254CD8u;
    SET_GPR_U32(ctx, 31, 0x254CE0u);
    ctx->pc = 0x254CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254CD8u;
    // 0x254cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x254CD8u, 0x254CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254CE0u;
label_254ce0:
    // 0x254ce0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x254ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254ce4: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x254ce4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254ce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254cec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254cf0: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x254cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x254cf4: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x254cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x254cf8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254CF8u;
    {
        const bool branch_taken_0x254cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254CF8u;
        // 0x254cfc: 0xe6200600  swc1        $f0, 0x600($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x254cf8) {
            ctx->pc = 0x254D1Cu;
            goto label_254d1c;
        }
    }
    ctx->pc = 0x254D00u;
    // 0x254d00: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x254d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x254d04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254d08: 0x24420ce0  addiu       $v0, $v0, 0xCE0
    ctx->pc = 0x254d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3296));
    // 0x254d0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254d10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254d14: 0x800008  jr          $a0
    ctx->pc = 0x254D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254D1Cu: goto label_254d1c;
            case 0x254D48u: goto label_254d48;
            case 0x254D58u: goto label_254d58;
            case 0x254D74u: goto label_254d74;
            case 0x254D90u: goto label_254d90;
            case 0x254DC0u: goto label_254dc0;
            case 0x254DF0u: goto label_254df0;
            case 0x254E00u: goto label_254e00;
            case 0x254E10u: goto label_254e10;
            case 0x254E20u: goto label_254e20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254D14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254D1Cu;
label_254d1c:
    // 0x254d1c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254D1Cu;
    SET_GPR_U32(ctx, 31, 0x254D24u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254D1Cu, 0x254D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254D24u;
label_254d24:
    // 0x254d24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254d28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254D28u;
    {
        const bool branch_taken_0x254d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D28u;
        // 0x254d2c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d28) {
            ctx->pc = 0x254D3Cu;
            goto label_254d3c;
        }
    }
    ctx->pc = 0x254D30u;
    // 0x254d30: 0x8c4305c0  lw          $v1, 0x5C0($v0)
    ctx->pc = 0x254d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1472)));
    // 0x254d34: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x254D34u;
    {
        const bool branch_taken_0x254d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D34u;
        // 0x254d38: 0x8c4405c4  lw          $a0, 0x5C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d34) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254D3Cu;
label_254d3c:
    // 0x254d3c: 0x8c4305c0  lw          $v1, 0x5C0($v0)
    ctx->pc = 0x254d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1472)));
    // 0x254d40: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x254D40u;
    {
        const bool branch_taken_0x254d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D40u;
        // 0x254d44: 0x8c4405c4  lw          $a0, 0x5C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d40) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254D48u;
label_254d48:
    // 0x254d48: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254d4c: 0x8c430ebc  lw          $v1, 0xEBC($v0)
    ctx->pc = 0x254d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3772)));
    // 0x254d50: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x254D50u;
    {
        const bool branch_taken_0x254d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D50u;
        // 0x254d54: 0x8c440ec0  lw          $a0, 0xEC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d50) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254D58u;
label_254d58:
    // 0x254d58: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x254d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x254d5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254d60: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254d64: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x254d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x254d68: 0x8c430a70  lw          $v1, 0xA70($v0)
    ctx->pc = 0x254d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2672)));
    // 0x254d6c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x254D6Cu;
    {
        const bool branch_taken_0x254d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D6Cu;
        // 0x254d70: 0x8c440a74  lw          $a0, 0xA74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d6c) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254D74u;
label_254d74:
    // 0x254d74: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x254d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x254d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x254d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x254d7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254d80: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x254d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x254d84: 0x8c433174  lw          $v1, 0x3174($v0)
    ctx->pc = 0x254d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12660)));
    // 0x254d88: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x254D88u;
    {
        const bool branch_taken_0x254d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D88u;
        // 0x254d8c: 0x8c443178  lw          $a0, 0x3178($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d88) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254D90u;
label_254d90:
    // 0x254d90: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254d94: 0x8e270740  lw          $a3, 0x740($s1)
    ctx->pc = 0x254d94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
    // 0x254d98: 0x8c433348  lw          $v1, 0x3348($v0)
    ctx->pc = 0x254d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13128)));
    // 0x254d9c: 0x8c44334c  lw          $a0, 0x334C($v0)
    ctx->pc = 0x254d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13132)));
    // 0x254da0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x254da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254da4: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x254DA4u;
    {
        const bool branch_taken_0x254da4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DA4u;
        // 0x254da8: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254da4) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254DACu;
    // 0x254dac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x254dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254db0: 0xc09f6d4  jal         func_27DB50
    ctx->pc = 0x254DB0u;
    SET_GPR_U32(ctx, 31, 0x254DB8u);
    ctx->pc = 0x254DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DB0u;
    // 0x254db4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB50u, 0x254DB0u, 0x254DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DB8u;
label_254db8:
    // 0x254db8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x254DB8u;
    {
        const bool branch_taken_0x254db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254db8) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254DC0u;
label_254dc0:
    // 0x254dc0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254dc4: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x254dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x254dc8: 0x8c433860  lw          $v1, 0x3860($v0)
    ctx->pc = 0x254dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14432)));
    // 0x254dcc: 0x8c443864  lw          $a0, 0x3864($v0)
    ctx->pc = 0x254dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14436)));
    // 0x254dd0: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x254dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254dd4: 0x10e00017  beqz        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x254DD4u;
    {
        const bool branch_taken_0x254dd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DD4u;
        // 0x254dd8: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dd4) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254DDCu;
    // 0x254ddc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x254ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254de0: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x254DE0u;
    SET_GPR_U32(ctx, 31, 0x254DE8u);
    ctx->pc = 0x254DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DE0u;
    // 0x254de4: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x254DE0u, 0x254DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DE8u;
label_254de8:
    // 0x254de8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x254DE8u;
    {
        const bool branch_taken_0x254de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x254de8) {
            ctx->pc = 0x254E34u;
            goto label_254e34;
        }
    }
    ctx->pc = 0x254DF0u;
label_254df0:
    // 0x254df0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254df4: 0x8c4305c0  lw          $v1, 0x5C0($v0)
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1472)));
    // 0x254df8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x254DF8u;
    {
        const bool branch_taken_0x254df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DF8u;
        // 0x254dfc: 0x8c4405c4  lw          $a0, 0x5C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254df8) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254E00u;
label_254e00:
    // 0x254e00: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254e04: 0x8c432eac  lw          $v1, 0x2EAC($v0)
    ctx->pc = 0x254e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11948)));
    // 0x254e08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x254E08u;
    {
        const bool branch_taken_0x254e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E08u;
        // 0x254e0c: 0x8c442eb0  lw          $a0, 0x2EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e08) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254E10u;
label_254e10:
    // 0x254e10: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254e14: 0x8c4312e0  lw          $v1, 0x12E0($v0)
    ctx->pc = 0x254e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4832)));
    // 0x254e18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x254E18u;
    {
        const bool branch_taken_0x254e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E18u;
        // 0x254e1c: 0x8c4412e4  lw          $a0, 0x12E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e18) {
            ctx->pc = 0x254E2Cu;
            goto label_254e2c;
        }
    }
    ctx->pc = 0x254E20u;
label_254e20:
    // 0x254e20: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254e24: 0x8c431718  lw          $v1, 0x1718($v0)
    ctx->pc = 0x254e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5912)));
    // 0x254e28: 0x8c44171c  lw          $a0, 0x171C($v0)
    ctx->pc = 0x254e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5916)));
label_254e2c:
    // 0x254e2c: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x254e2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254e30: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x254e30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_254e34:
    // 0x254e34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x254e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x254e38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x254e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x254e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e40: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x254e40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254e48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x254e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x254e4c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x254E4Cu;
    SET_GPR_U32(ctx, 31, 0x254E54u);
    ctx->pc = 0x254E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E4Cu;
    // 0x254e50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x254E4Cu, 0x254E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E54u;
label_254e54:
    // 0x254e54: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x254e54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x254e58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x254e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x254e5c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x254e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_254e60:
    // 0x254e60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x254E60u;
    SET_GPR_U32(ctx, 31, 0x254E68u);
    ctx->pc = 0x254E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254E60u;
    // 0x254e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x254E60u, 0x254E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E68u;
label_254e68:
    // 0x254e68: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x254E68u;
    {
        const bool branch_taken_0x254e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254e68) {
            ctx->pc = 0x254ED8u;
            goto label_254ed8;
        }
    }
    ctx->pc = 0x254E70u;
    // 0x254e70: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x254e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x254e74: 0x1c400014  bgtz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x254E74u;
    {
        const bool branch_taken_0x254e74 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x254E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E74u;
        // 0x254e78: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e74) {
            ctx->pc = 0x254EC8u;
            goto label_254ec8;
        }
    }
    ctx->pc = 0x254E7Cu;
    // 0x254e7c: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x254e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x254e80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254e84: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x254E84u;
    {
        const bool branch_taken_0x254e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E84u;
        // 0x254e88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e84) {
            ctx->pc = 0x254F58u;
            goto label_254f58;
        }
    }
    ctx->pc = 0x254E8Cu;
    // 0x254e8c: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x254e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x254e90: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x254e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x254e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254e98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254E98u;
    {
        const bool branch_taken_0x254e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E98u;
        // 0x254e9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e98) {
            ctx->pc = 0x254EA8u;
            goto label_254ea8;
        }
    }
    ctx->pc = 0x254EA0u;
    // 0x254ea0: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x254EA0u;
    {
        const bool branch_taken_0x254ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EA0u;
        // 0x254ea4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ea0) {
            ctx->pc = 0x254F70u;
            goto label_254f70;
        }
    }
    ctx->pc = 0x254EA8u;
label_254ea8:
    // 0x254ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254eac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x254eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x254eb0: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x254EB0u;
    SET_GPR_U32(ctx, 31, 0x254EB8u);
    ctx->pc = 0x254EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EB0u;
    // 0x254eb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x254EB0u, 0x254EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EB8u;
label_254eb8:
    // 0x254eb8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x254EB8u;
    {
        const bool branch_taken_0x254eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EB8u;
        // 0x254ebc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254eb8) {
            ctx->pc = 0x254F58u;
            goto label_254f58;
        }
    }
    ctx->pc = 0x254EC0u;
    // 0x254ec0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x254EC0u;
    {
        const bool branch_taken_0x254ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EC0u;
        // 0x254ec4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ec0) {
            ctx->pc = 0x254F70u;
            goto label_254f70;
        }
    }
    ctx->pc = 0x254EC8u;
label_254ec8:
    // 0x254ec8: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x254EC8u;
    SET_GPR_U32(ctx, 31, 0x254ED0u);
    ctx->pc = 0x254ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EC8u;
    // 0x254ecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x254EC8u, 0x254ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254ED0u;
label_254ed0:
    // 0x254ed0: 0x10000240  b           . + 4 + (0x240 << 2)
    ctx->pc = 0x254ED0u;
    {
        const bool branch_taken_0x254ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254ED0u;
        // 0x254ed4: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ed0) {
            ctx->pc = 0x2557D4u;
            goto label_2557d4;
        }
    }
    ctx->pc = 0x254ED8u;
label_254ed8:
    // 0x254ed8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x254ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x254edc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x254edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x254ee0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x254EE0u;
    SET_GPR_U32(ctx, 31, 0x254EE8u);
    ctx->pc = 0x254EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EE0u;
    // 0x254ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x254EE0u, 0x254EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EE8u;
label_254ee8:
    // 0x254ee8: 0xc62c0600  lwc1        $f12, 0x600($s1)
    ctx->pc = 0x254ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x254eec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x254EECu;
    SET_GPR_U32(ctx, 31, 0x254EF4u);
    ctx->pc = 0x254EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254EECu;
    // 0x254ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x254EECu, 0x254EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254EF4u;
label_254ef4:
    // 0x254ef4: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x254ef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x254ef8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x254ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x254efc: 0x10400235  beqz        $v0, . + 4 + (0x235 << 2)
    ctx->pc = 0x254EFCu;
    {
        const bool branch_taken_0x254efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254EFCu;
        // 0x254f00: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254efc) {
            ctx->pc = 0x2557D4u;
            goto label_2557d4;
        }
    }
    ctx->pc = 0x254F04u;
    // 0x254f04: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x254f04u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x254f08: 0x5c400233  bgtzl       $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x254F08u;
    {
        const bool branch_taken_0x254f08 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x254f08) {
            ctx->pc = 0x254F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254F08u;
            // 0x254f0c: 0x7bb100b0  lq          $s1, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2557D8u;
            goto label_2557d8;
        }
    }
    ctx->pc = 0x254F10u;
    // 0x254f10: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x254f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x254f14: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x254f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x254f18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254f1c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x254F1Cu;
    {
        const bool branch_taken_0x254f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F1Cu;
        // 0x254f20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f1c) {
            ctx->pc = 0x254F58u;
            goto label_254f58;
        }
    }
    ctx->pc = 0x254F24u;
    // 0x254f24: 0x8e221644  lw          $v0, 0x1644($s1)
    ctx->pc = 0x254f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5700)));
    // 0x254f28: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x254f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x254f2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x254f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x254f30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254F30u;
    {
        const bool branch_taken_0x254f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F30u;
        // 0x254f34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f30) {
            ctx->pc = 0x254F40u;
            goto label_254f40;
        }
    }
    ctx->pc = 0x254F38u;
    // 0x254f38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x254F38u;
    {
        const bool branch_taken_0x254f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F38u;
        // 0x254f3c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f38) {
            ctx->pc = 0x254F70u;
            goto label_254f70;
        }
    }
    ctx->pc = 0x254F40u;
label_254f40:
    // 0x254f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x254f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254f44: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x254f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x254f48: 0xc097f8c  jal         func_25FE30
    ctx->pc = 0x254F48u;
    SET_GPR_U32(ctx, 31, 0x254F50u);
    ctx->pc = 0x254F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F48u;
    // 0x254f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE30u, 0x254F48u, 0x254F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F50u;
label_254f50:
    // 0x254f50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x254F50u;
    {
        const bool branch_taken_0x254f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F50u;
        // 0x254f54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f50) {
            ctx->pc = 0x254F6Cu;
            goto label_254f6c;
        }
    }
    ctx->pc = 0x254F58u;
label_254f58:
    // 0x254f58: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x254f58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x254f5c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x254f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x254f60: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x254f60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x254f64: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x254F64u;
    {
        const bool branch_taken_0x254f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F64u;
        // 0x254f68: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f64) {
            ctx->pc = 0x2557D0u;
            goto label_2557d0;
        }
    }
    ctx->pc = 0x254F6Cu;
label_254f6c:
    // 0x254f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x254f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254f70:
    // 0x254f70: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x254f70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x254f74: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x254f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x254f78: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x254f78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x254f7c: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x254F7Cu;
    {
        const bool branch_taken_0x254f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254F7Cu;
        // 0x254f80: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254f7c) {
            ctx->pc = 0x2557D0u;
            goto label_2557d0;
        }
    }
    ctx->pc = 0x254F84u;
label_254f84:
    // 0x254f84: 0xc09d036  jal         func_2740D8
    ctx->pc = 0x254F84u;
    SET_GPR_U32(ctx, 31, 0x254F8Cu);
    ctx->pc = 0x254F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254F84u;
    // 0x254f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2740D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2740D8u, 0x254F84u, 0x254F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F8Cu;
label_254f8c:
    // 0x254f8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x254F8Cu;
    {
        const bool branch_taken_0x254f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254f8c) {
            ctx->pc = 0x254FB4u;
            goto label_254fb4;
        }
    }
    ctx->pc = 0x254F94u;
    // 0x254f94: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x254F94u;
    SET_GPR_U32(ctx, 31, 0x254F9Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x254F94u, 0x254F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254F9Cu;
label_254f9c:
    // 0x254f9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x254f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x254fa0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254FA0u;
    {
        const bool branch_taken_0x254fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA0u;
        // 0x254fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fa0) {
            ctx->pc = 0x254FB0u;
            goto label_254fb0;
        }
    }
    ctx->pc = 0x254FA8u;
    // 0x254fa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254FA8u;
    {
        const bool branch_taken_0x254fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FA8u;
        // 0x254fac: 0xa22217c3  sb          $v0, 0x17C3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fa8) {
            ctx->pc = 0x254FB4u;
            goto label_254fb4;
        }
    }
    ctx->pc = 0x254FB0u;
label_254fb0:
    // 0x254fb0: 0xa22017c3  sb          $zero, 0x17C3($s1)
    ctx->pc = 0x254fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6083), (uint8_t)GPR_U32(ctx, 0));
label_254fb4:
    // 0x254fb4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x254FB4u;
    SET_GPR_U32(ctx, 31, 0x254FBCu);
    ctx->pc = 0x254FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254FB4u;
    // 0x254fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x254FB4u, 0x254FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254FBCu;
label_254fbc:
    // 0x254fbc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x254fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x254fc0: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x254fc0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254fc4: 0x2463fdfb  addiu       $v1, $v1, -0x205
    ctx->pc = 0x254fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966779));
    // 0x254fc8: 0x2c620075  sltiu       $v0, $v1, 0x75
    ctx->pc = 0x254fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x254fcc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254FCCu;
    {
        const bool branch_taken_0x254fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FCCu;
        // 0x254fd0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254fcc) {
            ctx->pc = 0x254FECu;
            goto label_254fec;
        }
    }
    ctx->pc = 0x254FD4u;
    // 0x254fd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x254fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254fd8: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x254fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x254fdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254fe0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x254fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x254fe4: 0x800008  jr          $a0
    ctx->pc = 0x254FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x254FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FE4u;
        // 0x254fe8: 0x8e250304  lw          $a1, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x254FECu: goto label_254fec;
            case 0x254FFCu: goto label_254ffc;
            case 0x255000u: goto label_255000;
            case 0x255014u: goto label_255014;
            case 0x255024u: goto label_255024;
            case 0x255034u: goto label_255034;
            case 0x255044u: goto label_255044;
            case 0x255054u: goto label_255054;
            case 0x255064u: goto label_255064;
            case 0x255074u: goto label_255074;
            case 0x255084u: goto label_255084;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254FE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x254FECu;
label_254fec:
    // 0x254fec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x254fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x254ff0: 0x8c4305c8  lw          $v1, 0x5C8($v0)
    ctx->pc = 0x254ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1480)));
    // 0x254ff4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x254FF4u;
    {
        const bool branch_taken_0x254ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254FF4u;
        // 0x254ff8: 0x8c4405cc  lw          $a0, 0x5CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254ff4) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x254FFCu;
label_254ffc:
    // 0x254ffc: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x254ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_255000:
    // 0x255000: 0x8ca20a78  lw          $v0, 0xA78($a1)
    ctx->pc = 0x255000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2680)));
    // 0x255004: 0x8ca30a7c  lw          $v1, 0xA7C($a1)
    ctx->pc = 0x255004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2684)));
    // 0x255008: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x255008u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25500c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x25500Cu;
    {
        const bool branch_taken_0x25500c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25500Cu;
        // 0x255010: 0x659021  addu        $s2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25500c) {
            ctx->pc = 0x2550A0u;
            goto label_2550a0;
        }
    }
    ctx->pc = 0x255014u;
label_255014:
    // 0x255014: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255018: 0x8c430a78  lw          $v1, 0xA78($v0)
    ctx->pc = 0x255018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2680)));
    // 0x25501c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x25501Cu;
    {
        const bool branch_taken_0x25501c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25501Cu;
        // 0x255020: 0x8c440a80  lw          $a0, 0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25501c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255024u;
label_255024:
    // 0x255024: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255028: 0x8c430a78  lw          $v1, 0xA78($v0)
    ctx->pc = 0x255028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2680)));
    // 0x25502c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25502Cu;
    {
        const bool branch_taken_0x25502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25502Cu;
        // 0x255030: 0x8c440a80  lw          $a0, 0xA80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25502c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255034u;
label_255034:
    // 0x255034: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255038: 0x8c433300  lw          $v1, 0x3300($v0)
    ctx->pc = 0x255038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13056)));
    // 0x25503c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25503Cu;
    {
        const bool branch_taken_0x25503c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25503Cu;
        // 0x255040: 0x8c443304  lw          $a0, 0x3304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25503c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255044u;
label_255044:
    // 0x255044: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255048: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x255048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x25504c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x25504Cu;
    {
        const bool branch_taken_0x25504c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25504Cu;
        // 0x255050: 0x8c44381c  lw          $a0, 0x381C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25504c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255054u;
label_255054:
    // 0x255054: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255058: 0x8c4312e8  lw          $v1, 0x12E8($v0)
    ctx->pc = 0x255058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4840)));
    // 0x25505c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25505Cu;
    {
        const bool branch_taken_0x25505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25505Cu;
        // 0x255060: 0x8c4412ec  lw          $a0, 0x12EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25505c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255064u;
label_255064:
    // 0x255064: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255068: 0x8c431720  lw          $v1, 0x1720($v0)
    ctx->pc = 0x255068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5920)));
    // 0x25506c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25506Cu;
    {
        const bool branch_taken_0x25506c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25506Cu;
        // 0x255070: 0x8c441724  lw          $a0, 0x1724($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25506c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255074u;
label_255074:
    // 0x255074: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255078: 0x8c431720  lw          $v1, 0x1720($v0)
    ctx->pc = 0x255078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5920)));
    // 0x25507c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25507Cu;
    {
        const bool branch_taken_0x25507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25507Cu;
        // 0x255080: 0x8c441724  lw          $a0, 0x1724($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25507c) {
            ctx->pc = 0x255098u;
            goto label_255098;
        }
    }
    ctx->pc = 0x255084u;
label_255084:
    // 0x255084: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x255088: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x255088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x25508c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25508cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x255090: 0x8c432d6c  lw          $v1, 0x2D6C($v0)
    ctx->pc = 0x255090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11628)));
    // 0x255094: 0x8c442d70  lw          $a0, 0x2D70($v0)
    ctx->pc = 0x255094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11632)));
label_255098:
    // 0x255098: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x255098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25509c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x25509cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2550a0:
    // 0x2550a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2550a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2550a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2550a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2550ac: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2550acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2550b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2550b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2550b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2550b8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2550B8u;
    SET_GPR_U32(ctx, 31, 0x2550C0u);
    ctx->pc = 0x2550BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550B8u;
    // 0x2550bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2550B8u, 0x2550C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550C0u;
label_2550c0:
    // 0x2550c0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2550c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2550c4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2550c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2550c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2550c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2550cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2550ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2550d0: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x2550d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x2550d4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2550d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_2550d8:
    // 0x2550d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2550D8u;
    SET_GPR_U32(ctx, 31, 0x2550E0u);
    ctx->pc = 0x2550DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550D8u;
    // 0x2550dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2550D8u, 0x2550E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550E0u;
label_2550e0:
    // 0x2550e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2550E0u;
    {
        const bool branch_taken_0x2550e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2550e0) {
            ctx->pc = 0x2550F0u;
            goto label_2550f0;
        }
    }
    ctx->pc = 0x2550E8u;
    // 0x2550e8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2550E8u;
    SET_GPR_U32(ctx, 31, 0x2550F0u);
    ctx->pc = 0x2550ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550E8u;
    // 0x2550ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2550E8u, 0x2550F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2550F0u;
label_2550f0:
    // 0x2550f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2550f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2550f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2550f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2550f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2550f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2550fc:
    // 0x2550fc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2550FCu;
    SET_GPR_U32(ctx, 31, 0x255104u);
    ctx->pc = 0x255100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2550FCu;
    // 0x255100: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2550FCu, 0x255104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255104u;
label_255104:
    // 0x255104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x255104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255108: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x255108u;
    SET_GPR_U32(ctx, 31, 0x255110u);
    ctx->pc = 0x25510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255108u;
    // 0x25510c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x255108u, 0x255110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255110u;
label_255110:
    // 0x255110: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x255110u;
    {
        const bool branch_taken_0x255110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255110u;
        // 0x255114: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255110) {
            ctx->pc = 0x2557D4u;
            goto label_2557d4;
        }
    }
    ctx->pc = 0x255118u;
label_255118:
    // 0x255118: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x255118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
    // 0x25511c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25511Cu;
    {
        const bool branch_taken_0x25511c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25511c) {
            ctx->pc = 0x25516Cu;
            goto label_25516c;
        }
    }
    ctx->pc = 0x255124u;
    // 0x255124: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x255124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x255128: 0x2444fdd9  addiu       $a0, $v0, -0x227
    ctx->pc = 0x255128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966745));
    // 0x25512c: 0x2c830034  sltiu       $v1, $a0, 0x34
    ctx->pc = 0x25512cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x255130: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x255130u;
    {
        const bool branch_taken_0x255130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x255134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255130u;
        // 0x255134: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255130) {
            ctx->pc = 0x255150u;
            goto label_255150;
        }
    }
    ctx->pc = 0x255138u;
    // 0x255138: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x255138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x25513c: 0x244210a0  addiu       $v0, $v0, 0x10A0
    ctx->pc = 0x25513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4256));
    // 0x255140: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255144: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255148: 0x800008  jr          $a0
    ctx->pc = 0x255148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x255150u: goto label_255150;
            case 0x25516Cu: goto label_25516c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255148u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255150u;
label_255150:
    // 0x255150: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255150u;
    SET_GPR_U32(ctx, 31, 0x255158u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255150u, 0x255158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255158u;
label_255158:
    // 0x255158: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x255158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x25515c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25515Cu;
    {
        const bool branch_taken_0x25515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25515c) {
            ctx->pc = 0x25516Cu;
            goto label_25516c;
        }
    }
    ctx->pc = 0x255164u;
    // 0x255164: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x255164u;
    SET_GPR_U32(ctx, 31, 0x25516Cu);
    ctx->pc = 0x255168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255164u;
    // 0x255168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x255164u, 0x25516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25516Cu;
label_25516c:
    // 0x25516c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x25516Cu;
    SET_GPR_U32(ctx, 31, 0x255174u);
    ctx->pc = 0x255170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25516Cu;
    // 0x255170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x25516Cu, 0x255174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255174u;
label_255174:
    // 0x255174: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x255174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x255178: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x255178u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25517c: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x25517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x255180: 0x2c62007f  sltiu       $v0, $v1, 0x7F
    ctx->pc = 0x255180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x255184: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x255184u;
    {
        const bool branch_taken_0x255184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255184u;
        // 0x255188: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255184) {
            ctx->pc = 0x2551DCu;
            goto label_2551dc;
        }
    }
    ctx->pc = 0x25518Cu;
    // 0x25518c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25518cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x255190: 0x24421170  addiu       $v0, $v0, 0x1170
    ctx->pc = 0x255190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4464));
    // 0x255194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255198: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25519c: 0x800008  jr          $a0
    ctx->pc = 0x25519Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2551A4u: goto label_2551a4;
            case 0x2551DCu: goto label_2551dc;
            case 0x255214u: goto label_255214;
            case 0x255240u: goto label_255240;
            case 0x25526Cu: goto label_25526c;
            case 0x2552DCu: goto label_2552dc;
            case 0x2552ECu: goto label_2552ec;
            case 0x255318u: goto label_255318;
            case 0x255348u: goto label_255348;
            case 0x255358u: goto label_255358;
            case 0x255368u: goto label_255368;
            case 0x255378u: goto label_255378;
            case 0x255388u: goto label_255388;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25519Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2551A4u;
label_2551a4:
    // 0x2551a4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2551A4u;
    SET_GPR_U32(ctx, 31, 0x2551ACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2551A4u, 0x2551ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551ACu;
label_2551ac:
    // 0x2551ac: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2551acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2551b0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2551B0u;
    {
        const bool branch_taken_0x2551b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551B0u;
        // 0x2551b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551b0) {
            ctx->pc = 0x2551C0u;
            goto label_2551c0;
        }
    }
    ctx->pc = 0x2551B8u;
    // 0x2551b8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2551B8u;
    {
        const bool branch_taken_0x2551b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2551b8) {
            ctx->pc = 0x2551BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551B8u;
            // 0x2551bc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2551D0u;
            goto label_2551d0;
        }
    }
    ctx->pc = 0x2551C0u;
label_2551c0:
    // 0x2551c0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2551c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2551c4: 0x8c4302e0  lw          $v1, 0x2E0($v0)
    ctx->pc = 0x2551c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 736)));
    // 0x2551c8: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2551C8u;
    {
        const bool branch_taken_0x2551c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551C8u;
        // 0x2551cc: 0x8c4402e4  lw          $a0, 0x2E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551c8) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x2551D0u;
label_2551d0:
    // 0x2551d0: 0x8c4302e8  lw          $v1, 0x2E8($v0)
    ctx->pc = 0x2551d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 744)));
    // 0x2551d4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2551D4u;
    {
        const bool branch_taken_0x2551d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551D4u;
        // 0x2551d8: 0x8c4402ec  lw          $a0, 0x2EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551d4) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x2551DCu;
label_2551dc:
    // 0x2551dc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2551DCu;
    SET_GPR_U32(ctx, 31, 0x2551E4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2551DCu, 0x2551E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551E4u;
label_2551e4:
    // 0x2551e4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2551e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2551e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2551E8u;
    {
        const bool branch_taken_0x2551e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2551ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2551E8u;
        // 0x2551ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2551e8) {
            ctx->pc = 0x2551F8u;
            goto label_2551f8;
        }
    }
    ctx->pc = 0x2551F0u;
    // 0x2551f0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2551F0u;
    {
        const bool branch_taken_0x2551f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2551f0) {
            ctx->pc = 0x2551F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2551F0u;
            // 0x2551f4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255208u;
            goto label_255208;
        }
    }
    ctx->pc = 0x2551F8u;
label_2551f8:
    // 0x2551f8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2551f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2551fc: 0x8c430784  lw          $v1, 0x784($v0)
    ctx->pc = 0x2551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1924)));
    // 0x255200: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x255200u;
    {
        const bool branch_taken_0x255200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255200u;
        // 0x255204: 0x8c440788  lw          $a0, 0x788($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255200) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255208u;
label_255208:
    // 0x255208: 0x8c43078c  lw          $v1, 0x78C($v0)
    ctx->pc = 0x255208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1932)));
    // 0x25520c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x25520Cu;
    {
        const bool branch_taken_0x25520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25520Cu;
        // 0x255210: 0x8c440790  lw          $a0, 0x790($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25520c) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255214u;
label_255214:
    // 0x255214: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255214u;
    SET_GPR_U32(ctx, 31, 0x25521Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255214u, 0x25521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25521Cu;
label_25521c:
    // 0x25521c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x255220: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255220u;
    {
        const bool branch_taken_0x255220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255220u;
        // 0x255224: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255220) {
            ctx->pc = 0x255234u;
            goto label_255234;
        }
    }
    ctx->pc = 0x255228u;
    // 0x255228: 0x8c431248  lw          $v1, 0x1248($v0)
    ctx->pc = 0x255228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4680)));
    // 0x25522c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x25522Cu;
    {
        const bool branch_taken_0x25522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25522Cu;
        // 0x255230: 0x8c44124c  lw          $a0, 0x124C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25522c) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255234u;
label_255234:
    // 0x255234: 0x8c431250  lw          $v1, 0x1250($v0)
    ctx->pc = 0x255234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4688)));
    // 0x255238: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x255238u;
    {
        const bool branch_taken_0x255238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255238u;
        // 0x25523c: 0x8c441254  lw          $a0, 0x1254($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255238) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255240u;
label_255240:
    // 0x255240: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255240u;
    SET_GPR_U32(ctx, 31, 0x255248u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255240u, 0x255248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255248u;
label_255248:
    // 0x255248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x255248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25524c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25524Cu;
    {
        const bool branch_taken_0x25524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25524Cu;
        // 0x255250: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25524c) {
            ctx->pc = 0x255260u;
            goto label_255260;
        }
    }
    ctx->pc = 0x255254u;
    // 0x255254: 0x8c4309d0  lw          $v1, 0x9D0($v0)
    ctx->pc = 0x255254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x255258: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x255258u;
    {
        const bool branch_taken_0x255258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255258u;
        // 0x25525c: 0x8c4409d4  lw          $a0, 0x9D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255258) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255260u;
label_255260:
    // 0x255260: 0x8c4309d8  lw          $v1, 0x9D8($v0)
    ctx->pc = 0x255260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x255264: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x255264u;
    {
        const bool branch_taken_0x255264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255264u;
        // 0x255268: 0x8c4409dc  lw          $a0, 0x9DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255264) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x25526Cu;
label_25526c:
    // 0x25526c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25526Cu;
    SET_GPR_U32(ctx, 31, 0x255274u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25526Cu, 0x255274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255274u;
label_255274:
    // 0x255274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x255274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x255278: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x255278u;
    {
        const bool branch_taken_0x255278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255278u;
        // 0x25527c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255278) {
            ctx->pc = 0x25528Cu;
            goto label_25528c;
        }
    }
    ctx->pc = 0x255280u;
    // 0x255280: 0x8c4309d0  lw          $v1, 0x9D0($v0)
    ctx->pc = 0x255280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2512)));
    // 0x255284: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x255284u;
    {
        const bool branch_taken_0x255284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255284u;
        // 0x255288: 0x8c4409d4  lw          $a0, 0x9D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255284) {
            ctx->pc = 0x255294u;
            goto label_255294;
        }
    }
    ctx->pc = 0x25528Cu;
label_25528c:
    // 0x25528c: 0x8c4309d8  lw          $v1, 0x9D8($v0)
    ctx->pc = 0x25528cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x255290: 0x8c4409dc  lw          $a0, 0x9DC($v0)
    ctx->pc = 0x255290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2524)));
label_255294:
    // 0x255294: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255298: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x255298u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25529c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25529cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552a0: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2552A0u;
    SET_GPR_U32(ctx, 31, 0x2552A8u);
    ctx->pc = 0x2552A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552A0u;
    // 0x2552a4: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2552A0u, 0x2552A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552A8u;
label_2552a8:
    // 0x2552a8: 0x24420023  addiu       $v0, $v0, 0x23
    ctx->pc = 0x2552a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
    // 0x2552ac: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x2552acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x2552b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2552b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2552b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2552b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2552b8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2552b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2552bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2552bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2552c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2552c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2552c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2552cc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2552CCu;
    SET_GPR_U32(ctx, 31, 0x2552D4u);
    ctx->pc = 0x2552D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2552CCu;
    // 0x2552d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2552CCu, 0x2552D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2552D4u;
label_2552d4:
    // 0x2552d4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2552D4u;
    {
        const bool branch_taken_0x2552d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552D4u;
        // 0x2552d8: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552d4) {
            ctx->pc = 0x2553A0u;
            goto label_2553a0;
        }
    }
    ctx->pc = 0x2552DCu;
label_2552dc:
    // 0x2552dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2552dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2552e0: 0x8c433184  lw          $v1, 0x3184($v0)
    ctx->pc = 0x2552e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12676)));
    // 0x2552e4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2552E4u;
    {
        const bool branch_taken_0x2552e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552E4u;
        // 0x2552e8: 0x8c443188  lw          $a0, 0x3188($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552e4) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x2552ECu;
label_2552ec:
    // 0x2552ec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2552ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2552f0: 0x8e270740  lw          $a3, 0x740($s1)
    ctx->pc = 0x2552f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1856)));
    // 0x2552f4: 0x8c433318  lw          $v1, 0x3318($v0)
    ctx->pc = 0x2552f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13080)));
    // 0x2552f8: 0x8c44331c  lw          $a0, 0x331C($v0)
    ctx->pc = 0x2552f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13084)));
    // 0x2552fc: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2552fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255300: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x255300u;
    {
        const bool branch_taken_0x255300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x255304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255300u;
        // 0x255304: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255300) {
            ctx->pc = 0x25539Cu;
            goto label_25539c;
        }
    }
    ctx->pc = 0x255308u;
    // 0x255308: 0xc09f6c2  jal         func_27DB08
    ctx->pc = 0x255308u;
    SET_GPR_U32(ctx, 31, 0x255310u);
    ctx->pc = 0x25530Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255308u;
    // 0x25530c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DB08u, 0x255308u, 0x255310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255310u;
label_255310:
    // 0x255310: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x255310u;
    {
        const bool branch_taken_0x255310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255310u;
        // 0x255314: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255310) {
            ctx->pc = 0x2553A0u;
            goto label_2553a0;
        }
    }
    ctx->pc = 0x255318u;
label_255318:
    // 0x255318: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25531c: 0x8e270744  lw          $a3, 0x744($s1)
    ctx->pc = 0x25531cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1860)));
    // 0x255320: 0x8c433818  lw          $v1, 0x3818($v0)
    ctx->pc = 0x255320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14360)));
    // 0x255324: 0x8c44381c  lw          $a0, 0x381C($v0)
    ctx->pc = 0x255324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14364)));
    // 0x255328: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x255328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25532c: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x25532Cu;
    {
        const bool branch_taken_0x25532c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x255330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25532Cu;
        // 0x255330: 0x829021  addu        $s2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25532c) {
            ctx->pc = 0x25539Cu;
            goto label_25539c;
        }
    }
    ctx->pc = 0x255334u;
    // 0x255334: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x255334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255338: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x255338u;
    SET_GPR_U32(ctx, 31, 0x255340u);
    ctx->pc = 0x25533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255338u;
    // 0x25533c: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x255338u, 0x255340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255340u;
label_255340:
    // 0x255340: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x255340u;
    {
        const bool branch_taken_0x255340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255340u;
        // 0x255344: 0x8e2206ec  lw          $v0, 0x6EC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255340) {
            ctx->pc = 0x2553A0u;
            goto label_2553a0;
        }
    }
    ctx->pc = 0x255348u;
label_255348:
    // 0x255348: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25534c: 0x8c431690  lw          $v1, 0x1690($v0)
    ctx->pc = 0x25534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5776)));
    // 0x255350: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x255350u;
    {
        const bool branch_taken_0x255350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255350u;
        // 0x255354: 0x8c441694  lw          $a0, 0x1694($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255350) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255358u;
label_255358:
    // 0x255358: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25535c: 0x8c431690  lw          $v1, 0x1690($v0)
    ctx->pc = 0x25535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5776)));
    // 0x255360: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x255360u;
    {
        const bool branch_taken_0x255360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255360u;
        // 0x255364: 0x8c441694  lw          $a0, 0x1694($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5780)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255360) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255368u;
label_255368:
    // 0x255368: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25536c: 0x8c431d08  lw          $v1, 0x1D08($v0)
    ctx->pc = 0x25536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
    // 0x255370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x255370u;
    {
        const bool branch_taken_0x255370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255370u;
        // 0x255374: 0x8c441d0c  lw          $a0, 0x1D0C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255370) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255378u;
label_255378:
    // 0x255378: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25537c: 0x8c432e4c  lw          $v1, 0x2E4C($v0)
    ctx->pc = 0x25537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11852)));
    // 0x255380: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x255380u;
    {
        const bool branch_taken_0x255380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255380u;
        // 0x255384: 0x8c442e50  lw          $a0, 0x2E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255380) {
            ctx->pc = 0x255394u;
            goto label_255394;
        }
    }
    ctx->pc = 0x255388u;
label_255388:
    // 0x255388: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x255388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x25538c: 0x8c432364  lw          $v1, 0x2364($v0)
    ctx->pc = 0x25538cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9060)));
    // 0x255390: 0x8c442368  lw          $a0, 0x2368($v0)
    ctx->pc = 0x255390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9064)));
label_255394:
    // 0x255394: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x255394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255398: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x255398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_25539c:
    // 0x25539c: 0x8e2206ec  lw          $v0, 0x6EC($s1)
    ctx->pc = 0x25539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1772)));
label_2553a0:
    // 0x2553a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2553A0u;
    {
        const bool branch_taken_0x2553a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2553a0) {
            ctx->pc = 0x2553BCu;
            goto label_2553bc;
        }
    }
    ctx->pc = 0x2553A8u;
    // 0x2553a8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2553a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2553ac: 0x8c430784  lw          $v1, 0x784($v0)
    ctx->pc = 0x2553acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1924)));
    // 0x2553b0: 0x8c440788  lw          $a0, 0x788($v0)
    ctx->pc = 0x2553b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
    // 0x2553b4: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x2553b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2553b8: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x2553b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2553bc:
    // 0x2553bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2553bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2553c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2553c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2553c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2553c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2553c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553cc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2553ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2553d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2553d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2553d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553d8: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x2553d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2553dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2553DCu;
    SET_GPR_U32(ctx, 31, 0x2553E4u);
    ctx->pc = 0x2553E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553DCu;
    // 0x2553e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2553DCu, 0x2553E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553E4u;
label_2553e4:
    // 0x2553e4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x2553E4u;
    SET_GPR_U32(ctx, 31, 0x2553ECu);
    ctx->pc = 0x2553E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2553E4u;
    // 0x2553e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x2553E4u, 0x2553ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2553ECu;
label_2553ec:
    // 0x2553ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2553ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2553f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2553f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2553f4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2553f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2553f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2553f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2553fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2553fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255400: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x255400u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255404: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x255404u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255408: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x255408u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25540c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x25540Cu;
    SET_GPR_U32(ctx, 31, 0x255414u);
    ctx->pc = 0x255410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25540Cu;
    // 0x255410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x25540Cu, 0x255414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255414u;
label_255414:
    // 0x255414: 0xc09bc48  jal         func_26F120
    ctx->pc = 0x255414u;
    SET_GPR_U32(ctx, 31, 0x25541Cu);
    ctx->pc = 0x255418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255414u;
    // 0x255418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F120u, 0x255414u, 0x25541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25541Cu;
label_25541c:
    // 0x25541c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x25541cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x255420: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x255420u;
    SET_GPR_U32(ctx, 31, 0x255428u);
    ctx->pc = 0x255424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255420u;
    // 0x255424: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x255420u, 0x255428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255428u;
label_255428:
    // 0x255428: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x255428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25542c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x25542cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x255430: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255430u;
    {
        const bool branch_taken_0x255430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255430u;
        // 0x255434: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255430) {
            ctx->pc = 0x255450u;
            goto label_255450;
        }
    }
    ctx->pc = 0x255438u;
    // 0x255438: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x255438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25543c: 0x24421370  addiu       $v0, $v0, 0x1370
    ctx->pc = 0x25543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
    // 0x255440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x255440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x255444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x255444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x255448: 0x800008  jr          $a0
    ctx->pc = 0x255448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x255450u: goto label_255450;
            case 0x255474u: goto label_255474;
            case 0x255498u: goto label_255498;
            case 0x2554BCu: goto label_2554bc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255448u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x255450u;
label_255450:
    // 0x255450: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255450u;
    SET_GPR_U32(ctx, 31, 0x255458u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255450u, 0x255458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255458u;
label_255458:
    // 0x255458: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x255458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x25545c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25545cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x255460: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x255460u;
    {
        const bool branch_taken_0x255460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255460) {
            ctx->pc = 0x255464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255460u;
            // 0x255464: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x255468u;
            goto label_255468;
        }
    }
    ctx->pc = 0x255468u;
label_255468:
    // 0x255468: 0x2010  mfhi        $a0
    ctx->pc = 0x255468u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25546c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x25546Cu;
    {
        const bool branch_taken_0x25546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25546Cu;
        // 0x255470: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25546c) {
            ctx->pc = 0x2554DCu;
            goto label_2554dc;
        }
    }
    ctx->pc = 0x255474u;
label_255474:
    // 0x255474: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255474u;
    SET_GPR_U32(ctx, 31, 0x25547Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255474u, 0x25547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25547Cu;
label_25547c:
    // 0x25547c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x25547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x255480: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x255480u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x255484: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x255484u;
    {
        const bool branch_taken_0x255484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255484) {
            ctx->pc = 0x255488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255484u;
            // 0x255488: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25548Cu;
            goto label_25548c;
        }
    }
    ctx->pc = 0x25548Cu;
label_25548c:
    // 0x25548c: 0x2010  mfhi        $a0
    ctx->pc = 0x25548cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x255490: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x255490u;
    {
        const bool branch_taken_0x255490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255490u;
        // 0x255494: 0x2484002d  addiu       $a0, $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255490) {
            ctx->pc = 0x2554DCu;
            goto label_2554dc;
        }
    }
    ctx->pc = 0x255498u;
label_255498:
    // 0x255498: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255498u;
    SET_GPR_U32(ctx, 31, 0x2554A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255498u, 0x2554A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554A0u;
label_2554a0:
    // 0x2554a0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2554a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2554a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2554a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2554a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2554A8u;
    {
        const bool branch_taken_0x2554a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554a8) {
            ctx->pc = 0x2554ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2554A8u;
            // 0x2554ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2554B0u;
            goto label_2554b0;
        }
    }
    ctx->pc = 0x2554B0u;
label_2554b0:
    // 0x2554b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2554b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2554b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2554B4u;
    {
        const bool branch_taken_0x2554b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554B4u;
        // 0x2554b8: 0x2484001e  addiu       $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554b4) {
            ctx->pc = 0x2554DCu;
            goto label_2554dc;
        }
    }
    ctx->pc = 0x2554BCu;
label_2554bc:
    // 0x2554bc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2554BCu;
    SET_GPR_U32(ctx, 31, 0x2554C4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2554BCu, 0x2554C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554C4u;
label_2554c4:
    // 0x2554c4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2554c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2554c8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2554c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2554cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2554CCu;
    {
        const bool branch_taken_0x2554cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2554cc) {
            ctx->pc = 0x2554D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2554CCu;
            // 0x2554d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2554D4u;
            goto label_2554d4;
        }
    }
    ctx->pc = 0x2554D4u;
label_2554d4:
    // 0x2554d4: 0x2010  mfhi        $a0
    ctx->pc = 0x2554d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2554d8: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2554d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_2554dc:
    // 0x2554dc: 0xae2405f4  sw          $a0, 0x5F4($s1)
    ctx->pc = 0x2554dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 4));
    // 0x2554e0: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x2554e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x2554e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2554E4u;
    {
        const bool branch_taken_0x2554e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2554E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2554E4u;
        // 0x2554e8: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2554e4) {
            ctx->pc = 0x2554F0u;
            goto label_2554f0;
        }
    }
    ctx->pc = 0x2554ECu;
    // 0x2554ec: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x2554ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
label_2554f0:
    // 0x2554f0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2554F0u;
    SET_GPR_U32(ctx, 31, 0x2554F8u);
    ctx->pc = 0x2554F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2554F0u;
    // 0x2554f4: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2554F0u, 0x2554F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2554F8u;
label_2554f8:
    // 0x2554f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2554f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2554fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2554fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x255500: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x255500u;
    {
        const bool branch_taken_0x255500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255500) {
            ctx->pc = 0x255504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255500u;
            // 0x255504: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x255508u;
            goto label_255508;
        }
    }
    ctx->pc = 0x255508u;
label_255508:
    // 0x255508: 0x2010  mfhi        $a0
    ctx->pc = 0x255508u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25550c: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x25550Cu;
    {
        const bool branch_taken_0x25550c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25550c) {
            ctx->pc = 0x255510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25550Cu;
            // 0x255510: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255548u;
            goto label_255548;
        }
    }
    ctx->pc = 0x255514u;
    // 0x255514: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x255514u;
    SET_GPR_U32(ctx, 31, 0x25551Cu);
    ctx->pc = 0x255518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255514u;
    // 0x255518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x255514u, 0x25551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25551Cu;
label_25551c:
    // 0x25551c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x25551Cu;
    {
        const bool branch_taken_0x25551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25551c) {
            ctx->pc = 0x255520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25551Cu;
            // 0x255520: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255548u;
            goto label_255548;
        }
    }
    ctx->pc = 0x255524u;
    // 0x255524: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x255524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x255528: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x255528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x25552c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25552Cu;
    {
        const bool branch_taken_0x25552c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25552c) {
            ctx->pc = 0x255530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25552Cu;
            // 0x255530: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255548u;
            goto label_255548;
        }
    }
    ctx->pc = 0x255534u;
    // 0x255534: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x255534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x255538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x255538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25553c: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x25553cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x255540: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x255540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x255544: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x255544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_255548:
    // 0x255548: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x255548u;
    {
        const bool branch_taken_0x255548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255548u;
        // 0x25554c: 0xae2005f0  sw          $zero, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255548) {
            ctx->pc = 0x255588u;
            goto label_255588;
        }
    }
    ctx->pc = 0x255550u;
    // 0x255550: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x255550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x255554: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x255554u;
    {
        const bool branch_taken_0x255554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x255558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255554u;
        // 0x255558: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255554) {
            ctx->pc = 0x255588u;
            goto label_255588;
        }
    }
    ctx->pc = 0x25555Cu;
    // 0x25555c: 0x262305d0  addiu       $v1, $s1, 0x5D0
    ctx->pc = 0x25555cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x255560: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x255560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x255564: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x255564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x255568: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255568u;
    {
        const bool branch_taken_0x255568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255568) {
            ctx->pc = 0x25556Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255568u;
            // 0x25556c: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25558Cu;
            goto label_25558c;
        }
    }
    ctx->pc = 0x255570u;
    // 0x255570: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x255570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255574: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x255574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x255578: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x255578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25557c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x25557cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x255580: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x255580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255584: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x255584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_255588:
    // 0x255588: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x255588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_25558c:
    // 0x25558c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x255590: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x255590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_255594:
    // 0x255594: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x255594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x255598: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x255598u;
    {
        const bool branch_taken_0x255598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255598u;
        // 0x25559c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255598) {
            ctx->pc = 0x2555C4u;
            goto label_2555c4;
        }
    }
    ctx->pc = 0x2555A0u;
    // 0x2555a0: 0xc62c05a8  lwc1        $f12, 0x5A8($s1)
    ctx->pc = 0x2555a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2555a4: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2555a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2555a8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2555a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2555ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2555acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2555b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2555b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2555b4: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x2555b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x2555b8: 0x262505d0  addiu       $a1, $s1, 0x5D0
    ctx->pc = 0x2555b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
    // 0x2555bc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2555BCu;
    SET_GPR_U32(ctx, 31, 0x2555C4u);
    ctx->pc = 0x2555C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555BCu;
    // 0x2555c0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2555BCu, 0x2555C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555C4u;
label_2555c4:
    // 0x2555c4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2555C4u;
    SET_GPR_U32(ctx, 31, 0x2555CCu);
    ctx->pc = 0x2555C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555C4u;
    // 0x2555c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2555C4u, 0x2555CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555CCu;
label_2555cc:
    // 0x2555cc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2555CCu;
    {
        const bool branch_taken_0x2555cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2555cc) {
            ctx->pc = 0x2555D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2555CCu;
            // 0x2555d0: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255600u;
            goto label_255600;
        }
    }
    ctx->pc = 0x2555D4u;
    // 0x2555d4: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2555D4u;
    SET_GPR_U32(ctx, 31, 0x2555DCu);
    ctx->pc = 0x2555D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555D4u;
    // 0x2555d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2555D4u, 0x2555DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555DCu;
label_2555dc:
    // 0x2555dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2555DCu;
    {
        const bool branch_taken_0x2555dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2555dc) {
            ctx->pc = 0x2555F4u;
            goto label_2555f4;
        }
    }
    ctx->pc = 0x2555E4u;
    // 0x2555e4: 0xc09c31e  jal         func_270C78
    ctx->pc = 0x2555E4u;
    SET_GPR_U32(ctx, 31, 0x2555ECu);
    ctx->pc = 0x2555E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555E4u;
    // 0x2555e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270C78u, 0x2555E4u, 0x2555ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555ECu;
label_2555ec:
    // 0x2555ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2555ECu;
    {
        const bool branch_taken_0x2555ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2555F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2555ECu;
        // 0x2555f0: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2555ec) {
            ctx->pc = 0x255600u;
            goto label_255600;
        }
    }
    ctx->pc = 0x2555F4u;
label_2555f4:
    // 0x2555f4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2555F4u;
    SET_GPR_U32(ctx, 31, 0x2555FCu);
    ctx->pc = 0x2555F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2555F4u;
    // 0x2555f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2555F4u, 0x2555FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2555FCu;
label_2555fc:
    // 0x2555fc: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x2555fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
label_255600:
    // 0x255600: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x255600u;
    {
        const bool branch_taken_0x255600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255600u;
        // 0x255604: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255600) {
            ctx->pc = 0x255610u;
            goto label_255610;
        }
    }
    ctx->pc = 0x255608u;
    // 0x255608: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x255608u;
    {
        const bool branch_taken_0x255608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255608u;
        // 0x25560c: 0xae2205f4  sw          $v0, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255608) {
            ctx->pc = 0x2557B0u;
            goto label_2557b0;
        }
    }
    ctx->pc = 0x255610u;
label_255610:
    // 0x255610: 0x922217bb  lbu         $v0, 0x17BB($s1)
    ctx->pc = 0x255610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6075)));
    // 0x255614: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x255614u;
    {
        const bool branch_taken_0x255614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255614) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x25561Cu;
    // 0x25561c: 0xc6211740  lwc1        $f1, 0x1740($s1)
    ctx->pc = 0x25561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255620: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x255620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255624: 0x0  nop
    ctx->pc = 0x255624u;
    // NOP
    // 0x255628: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25562c: 0x0  nop
    ctx->pc = 0x25562cu;
    // NOP
    // 0x255630: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x255630u;
    {
        const bool branch_taken_0x255630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x255630) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x255638u;
    // 0x255638: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x255638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x25563c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x25563Cu;
    {
        const bool branch_taken_0x25563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25563Cu;
        // 0x255640: 0x2402020e  addiu       $v0, $zero, 0x20E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 526));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25563c) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x255644u;
    // 0x255644: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x255644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x255648: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x255648u;
    {
        const bool branch_taken_0x255648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x255648) {
            ctx->pc = 0x255670u;
            goto label_255670;
        }
    }
    ctx->pc = 0x255650u;
    // 0x255650: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255650u;
    SET_GPR_U32(ctx, 31, 0x255658u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255650u, 0x255658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255658u;
label_255658:
    // 0x255658: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x255658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x25565c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25565Cu;
    {
        const bool branch_taken_0x25565c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25565Cu;
        // 0x255660: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25565c) {
            ctx->pc = 0x255670u;
            goto label_255670;
        }
    }
    ctx->pc = 0x255664u;
    // 0x255664: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x255664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x255668: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x255668u;
    {
        const bool branch_taken_0x255668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255668u;
        // 0x25566c: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255668) {
            ctx->pc = 0x255794u;
            goto label_255794;
        }
    }
    ctx->pc = 0x255670u;
label_255670:
    // 0x255670: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255670u;
    SET_GPR_U32(ctx, 31, 0x255678u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255670u, 0x255678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255678u;
label_255678:
    // 0x255678: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x255678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x25567c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25567cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x255680: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x255680u;
    {
        const bool branch_taken_0x255680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x255680) {
            ctx->pc = 0x255684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255680u;
            // 0x255684: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x255688u;
            goto label_255688;
        }
    }
    ctx->pc = 0x255688u;
label_255688:
    // 0x255688: 0x2010  mfhi        $a0
    ctx->pc = 0x255688u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x25568c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x25568Cu;
    {
        const bool branch_taken_0x25568c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x25568c) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x255694u;
    // 0x255694: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x255694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255698: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x255698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x25569c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25569cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2556a0: 0x0  nop
    ctx->pc = 0x2556a0u;
    // NOP
    // 0x2556a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2556a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2556a8: 0x0  nop
    ctx->pc = 0x2556a8u;
    // NOP
    // 0x2556ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2556ACu;
    {
        const bool branch_taken_0x2556ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2556B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556ACu;
        // 0x2556b0: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556ac) {
            ctx->pc = 0x2556C0u;
            goto label_2556c0;
        }
    }
    ctx->pc = 0x2556B4u;
    // 0x2556b4: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x2556b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x2556b8: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2556B8u;
    {
        const bool branch_taken_0x2556b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2556BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2556B8u;
        // 0x2556bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2556b8) {
            ctx->pc = 0x255748u;
            goto label_255748;
        }
    }
    ctx->pc = 0x2556C0u;
label_2556c0:
    // 0x2556c0: 0xc09bc76  jal         func_26F1D8
    ctx->pc = 0x2556C0u;
    SET_GPR_U32(ctx, 31, 0x2556C8u);
    ctx->pc = 0x2556C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2556C0u;
    // 0x2556c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F1D8u, 0x2556C0u, 0x2556C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556C8u;
label_2556c8:
    // 0x2556c8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2556C8u;
    {
        const bool branch_taken_0x2556c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2556c8) {
            ctx->pc = 0x2557B0u;
            goto label_2557b0;
        }
    }
    ctx->pc = 0x2556D0u;
    // 0x2556d0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2556D0u;
    SET_GPR_U32(ctx, 31, 0x2556D8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2556D0u, 0x2556D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2556D8u;
label_2556d8:
    // 0x2556d8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2556d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2556dc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2556dcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2556e0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2556E0u;
    {
        const bool branch_taken_0x2556e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2556e0) {
            ctx->pc = 0x2556E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2556E0u;
            // 0x2556e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2556E8u;
            goto label_2556e8;
        }
    }
    ctx->pc = 0x2556E8u;
label_2556e8:
    // 0x2556e8: 0x2010  mfhi        $a0
    ctx->pc = 0x2556e8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2556ec: 0x5480001b  bnel        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2556ECu;
    {
        const bool branch_taken_0x2556ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2556ec) {
            ctx->pc = 0x2556F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2556ECu;
            // 0x2556f0: 0x922217b9  lbu         $v0, 0x17B9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25575Cu;
            goto label_25575c;
        }
    }
    ctx->pc = 0x2556F4u;
    // 0x2556f4: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x2556f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2556f8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2556f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2556fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2556fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255700: 0x0  nop
    ctx->pc = 0x255700u;
    // NOP
    // 0x255704: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x255704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x255708: 0x0  nop
    ctx->pc = 0x255708u;
    // NOP
    // 0x25570c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x25570Cu;
    {
        const bool branch_taken_0x25570c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25570Cu;
        // 0x255710: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25570c) {
            ctx->pc = 0x255758u;
            goto label_255758;
        }
    }
    ctx->pc = 0x255714u;
    // 0x255714: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x255714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x255718: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x255718u;
    {
        const bool branch_taken_0x255718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x255718) {
            ctx->pc = 0x25571Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255718u;
            // 0x25571c: 0x922217b9  lbu         $v0, 0x17B9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25575Cu;
            goto label_25575c;
        }
    }
    ctx->pc = 0x255720u;
    // 0x255720: 0x922217bb  lbu         $v0, 0x17BB($s1)
    ctx->pc = 0x255720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6075)));
    // 0x255724: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x255724u;
    {
        const bool branch_taken_0x255724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x255724) {
            ctx->pc = 0x255728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x255724u;
            // 0x255728: 0x922217b9  lbu         $v0, 0x17B9($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25575Cu;
            goto label_25575c;
        }
    }
    ctx->pc = 0x25572Cu;
    // 0x25572c: 0xc6211740  lwc1        $f1, 0x1740($s1)
    ctx->pc = 0x25572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255730: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x255730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x255734: 0x0  nop
    ctx->pc = 0x255734u;
    // NOP
    // 0x255738: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x255738u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25573c: 0x0  nop
    ctx->pc = 0x25573cu;
    // NOP
    // 0x255740: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x255740u;
    {
        const bool branch_taken_0x255740 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x255744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255740u;
        // 0x255744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255740) {
            ctx->pc = 0x255758u;
            goto label_255758;
        }
    }
    ctx->pc = 0x255748u;
label_255748:
    // 0x255748: 0xc09d08e  jal         func_274238
    ctx->pc = 0x255748u;
    SET_GPR_U32(ctx, 31, 0x255750u);
    ctx->pc = 0x25574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255748u;
    // 0x25574c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274238u, 0x255748u, 0x255750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255750u;
label_255750:
    // 0x255750: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x255750u;
    {
        const bool branch_taken_0x255750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x255754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255750u;
        // 0x255754: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255750) {
            ctx->pc = 0x2557D4u;
            goto label_2557d4;
        }
    }
    ctx->pc = 0x255758u;
label_255758:
    // 0x255758: 0x922217b9  lbu         $v0, 0x17B9($s1)
    ctx->pc = 0x255758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6073)));
label_25575c:
    // 0x25575c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x25575Cu;
    {
        const bool branch_taken_0x25575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25575c) {
            ctx->pc = 0x2557A0u;
            goto label_2557a0;
        }
    }
    ctx->pc = 0x255764u;
    // 0x255764: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x255764u;
    SET_GPR_U32(ctx, 31, 0x25576Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x255764u, 0x25576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25576Cu;
label_25576c:
    // 0x25576c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x25576cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x255770: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x255770u;
    {
        const bool branch_taken_0x255770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x255770) {
            ctx->pc = 0x2557A0u;
            goto label_2557a0;
        }
    }
    ctx->pc = 0x255778u;
    // 0x255778: 0xc09cf0e  jal         func_273C38
    ctx->pc = 0x255778u;
    SET_GPR_U32(ctx, 31, 0x255780u);
    ctx->pc = 0x25577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255778u;
    // 0x25577c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273C38u, 0x255778u, 0x255780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255780u;
label_255780:
    // 0x255780: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x255780u;
    {
        const bool branch_taken_0x255780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x255784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255780u;
        // 0x255784: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255780) {
            ctx->pc = 0x2557A0u;
            goto label_2557a0;
        }
    }
    ctx->pc = 0x255788u;
    // 0x255788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x255788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25578c: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x25578cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x255790: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x255790u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_255794:
    // 0x255794: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x255794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x255798: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x255798u;
    {
        const bool branch_taken_0x255798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255798u;
        // 0x25579c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255798) {
            ctx->pc = 0x2557D0u;
            goto label_2557d0;
        }
    }
    ctx->pc = 0x2557A0u;
label_2557a0:
    // 0x2557a0: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2557A0u;
    SET_GPR_U32(ctx, 31, 0x2557A8u);
    ctx->pc = 0x2557A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557A0u;
    // 0x2557a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2557A0u, 0x2557A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557A8u;
label_2557a8:
    // 0x2557a8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2557A8u;
    {
        const bool branch_taken_0x2557a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2557ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557A8u;
        // 0x2557ac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2557a8) {
            ctx->pc = 0x2557D4u;
            goto label_2557d4;
        }
    }
    ctx->pc = 0x2557B0u;
label_2557b0:
    // 0x2557b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2557b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2557b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2557b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2557b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2557b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557bc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2557BCu;
    SET_GPR_U32(ctx, 31, 0x2557C4u);
    ctx->pc = 0x2557C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557BCu;
    // 0x2557c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2557BCu, 0x2557C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557C4u;
label_2557c4:
    // 0x2557c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2557c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2557c8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2557C8u;
    SET_GPR_U32(ctx, 31, 0x2557D0u);
    ctx->pc = 0x2557CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2557C8u;
    // 0x2557cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2557C8u, 0x2557D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2557D0u;
label_2557d0:
    // 0x2557d0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2557d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2557d4:
    // 0x2557d4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2557d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2557d8:
    // 0x2557d8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2557d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2557dc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2557dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2557e0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2557e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2557e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2557e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2557e8: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2557e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2557ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2557ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2557F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2557ECu;
        // 0x2557f0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2557ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2557F4u;
    // 0x2557f4: 0x0  nop
    ctx->pc = 0x2557f4u;
    // NOP
    ctx->pc = 0x2557f8u;
}

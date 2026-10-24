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

// Function: func_003AF3D8
// Address: 0x3af3d8 - 0x3af570
void func_003AF3D8_0x3af3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AF3D8_0x3af3d8");
#endif

    switch (ctx->pc) {
        case 0x3af418u: goto label_3af418;
        default: break;
    }

    ctx->pc = 0x3af3d8u;

    // 0x3af3d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3af3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3af3dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3af3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3af3e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3af3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3af3e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3af3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af3e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3af3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3af3ec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3af3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3af3f0: 0x24940014  addiu       $s4, $a0, 0x14
    ctx->pc = 0x3af3f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x3af3f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3af3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3af3f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3af3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3af3fc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3af3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3af400: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3af400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3af404: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x3af404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3af408: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3af408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3af40c: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x3af40cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3af410: 0xc0ebace  jal         func_3AEB38
    ctx->pc = 0x3AF410u;
    SET_GPR_U32(ctx, 31, 0x3AF418u);
    ctx->pc = 0x3AF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AF410u;
    // 0x3af414: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEB38u, 0x3AF410u, 0x3AF418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF418u;
label_3af418:
    // 0x3af418: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3af418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af41c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3af41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3af420: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x3af420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x3af424: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3af424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3af428: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3AF428u;
    {
        const bool branch_taken_0x3af428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF428u;
        // 0x3af42c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af428) {
            ctx->pc = 0x3AF498u;
            goto label_3af498;
        }
    }
    ctx->pc = 0x3AF430u;
    // 0x3af430: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3af430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3af434: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x3af434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x3af438: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3af438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3af43c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af440: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3af440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3af444: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x3af444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x3af448: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x3af448u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3af44c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3af44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3af450: 0x292182b  sltu        $v1, $s4, $s2
    ctx->pc = 0x3af450u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3af454: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3af454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3af458: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3af458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3af45c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF45Cu;
    {
        const bool branch_taken_0x3af45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF45Cu;
        // 0x3af460: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af45c) {
            ctx->pc = 0x3AF468u;
            goto label_3af468;
        }
    }
    ctx->pc = 0x3AF464u;
    // 0x3af464: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3af464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3af468:
    // 0x3af468: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3af468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3af46c: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x3af46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x3af470: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3af470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3af474: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x3af474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
    // 0x3af478: 0x441006  srlv        $v0, $a0, $v0
    ctx->pc = 0x3af478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x3af47c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af480: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af484: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3af484u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3af488: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af48c: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3af48cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3af490: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3AF490u;
    {
        const bool branch_taken_0x3af490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF490u;
        // 0x3af494: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af490) {
            ctx->pc = 0x3AF548u;
            goto label_3af548;
        }
    }
    ctx->pc = 0x3AF498u;
label_3af498:
    // 0x3af498: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3af498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3af49c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AF49Cu;
    {
        const bool branch_taken_0x3af49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF49Cu;
        // 0x3af4a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af49c) {
            ctx->pc = 0x3AF4ACu;
            goto label_3af4ac;
        }
    }
    ctx->pc = 0x3AF4A4u;
    // 0x3af4a4: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x3af4a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3af4a8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x3af4a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3af4ac:
    // 0x3af4ac: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x3af4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x3af4b0: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3AF4B0u;
    {
        const bool branch_taken_0x3af4b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4B0u;
        // 0x3af4b4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4b0) {
            ctx->pc = 0x3AF518u;
            goto label_3af518;
        }
    }
    ctx->pc = 0x3AF4B8u;
    // 0x3af4b8: 0x3c053ff0  lui         $a1, 0x3FF0
    ctx->pc = 0x3af4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16368 << 16));
    // 0x3af4bc: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x3af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3af4c0: 0xd31804  sllv        $v1, $s3, $a2
    ctx->pc = 0x3af4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 6) & 0x1F));
    // 0x3af4c4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3af4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3af4c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af4cc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3af4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3af4d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af4d4: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3af4d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3af4d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af4dc: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x3af4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3af4e0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3af4e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3af4e4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3AF4E4u;
    {
        const bool branch_taken_0x3af4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF4E4u;
        // 0x3af4e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af4e4) {
            ctx->pc = 0x3AF4F0u;
            goto label_3af4f0;
        }
    }
    ctx->pc = 0x3AF4ECu;
    // 0x3af4ec: 0x8e53fffc  lw          $s3, -0x4($s2)
    ctx->pc = 0x3af4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3af4f0:
    // 0x3af4f0: 0x61023  negu        $v0, $a2
    ctx->pc = 0x3af4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x3af4f4: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x3af4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x3af4f8: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x3af4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x3af4fc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af500: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3af500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3af504: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3af504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3af508: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3af508u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x3af50c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3af50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3af510: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3AF510u;
    {
        const bool branch_taken_0x3af510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AF514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF510u;
        // 0x3af514: 0x3183e  dsrl32      $v1, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af510) {
            ctx->pc = 0x3AF548u;
            goto label_3af548;
        }
    }
    ctx->pc = 0x3AF518u;
label_3af518:
    // 0x3af518: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x3af518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x3af51c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3af51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af520: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3af520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3af524: 0x2621025  or          $v0, $s3, $v0
    ctx->pc = 0x3af524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x3af528: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x3af528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3af52c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3af52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3af530: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3af530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3af534: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3af534u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3af538: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3af538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3af53c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3af53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3af540: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3af540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3af544: 0x2248824  and         $s1, $s1, $a0
    ctx->pc = 0x3af544u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_3af548:
    // 0x3af548: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3af548u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3af54c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3af54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af550: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3af550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3af554: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3af554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3af558: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3af558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3af55c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3af55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3af560: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3af560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3af564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3af564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3af568: 0x3e00008  jr          $ra
    ctx->pc = 0x3AF568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF568u;
        // 0x3af56c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AF568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AF570u;
}

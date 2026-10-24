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

// Function: strlen
// Address: 0x3a58dc - 0x3a5a20
void strlen_0x3a58dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strlen_0x3a58dc");
#endif

    switch (ctx->pc) {
        case 0x3a595cu: goto label_3a595c;
        case 0x3a59e0u: goto label_3a59e0;
        case 0x3a5a00u: goto label_3a5a00;
        default: break;
    }

    ctx->pc = 0x3a58dcu;

    // 0x3a58dc: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3a58dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x3a58e0: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A58E0u;
    {
        const bool branch_taken_0x3a58e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A58E0u;
        // 0x3a58e4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a58e0) {
            ctx->pc = 0x3A5A00u;
            goto label_3a5a00;
        }
    }
    ctx->pc = 0x3A58E8u;
    // 0x3a58e8: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3a58e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3a58ec: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x3a58ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a58f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a58f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a58f4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3a58f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3a58f8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a58f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a58fc: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3a58fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3a5900: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3a5900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3a5904: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x3a5904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x3a5908: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A5908u;
    {
        const bool branch_taken_0x3a5908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5908u;
        // 0x3a590c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5908) {
            ctx->pc = 0x3A5988u;
            goto label_3a5988;
        }
    }
    ctx->pc = 0x3A5910u;
    // 0x3a5910: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a5910u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5914: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x3a5914u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x3a5918: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3a5918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a591c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a591cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5920: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5924: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5928: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a592c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a592cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5930: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5934: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x3a5934u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x3a5938: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x3a5938u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x3a593c: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x3a593cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3a5940: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5940u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5944: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x3a5944u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5948: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x3a5948u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a594c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a594cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a5950: 0x54c0002b  bnel        $a2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A5950u;
    {
        const bool branch_taken_0x3a5950 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5950) {
            ctx->pc = 0x3A5954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5950u;
            // 0x3a5954: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A00u;
            goto label_3a5a00;
        }
    }
    ctx->pc = 0x3A5958u;
    // 0x3a5958: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a5958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_3a595c:
    // 0x3a595c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a595cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5960: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3a5960u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5964: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x3a5964u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a5968: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5968u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a596c: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x3a596cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5970: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x3a5970u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x3a5974: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3a5974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3a5978: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A5978u;
    {
        const bool branch_taken_0x3a5978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5978) {
            ctx->pc = 0x3A597Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5978u;
            // 0x3a597c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A595Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a595c;
        }
    }
    ctx->pc = 0x3A5980u;
    // 0x3a5980: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3A5980u;
    {
        const bool branch_taken_0x3a5980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5980u;
        // 0x3a5984: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5980) {
            ctx->pc = 0x3A5A00u;
            goto label_3a5a00;
        }
    }
    ctx->pc = 0x3A5988u;
label_3a5988:
    // 0x3a5988: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3a5988u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a598c: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x3a598cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5990: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a5994: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a5994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a5998: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a5998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a599c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a599cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a59a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3a59a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3a59a4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x3a59a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x3a59a8: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x3a59a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x3a59ac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x3a59acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x3a59b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a59b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a59b8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A59B8u;
    {
        const bool branch_taken_0x3a59b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a59b8) {
            ctx->pc = 0x3A59BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A59B8u;
            // 0x3a59bc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A00u;
            goto label_3a5a00;
        }
    }
    ctx->pc = 0x3A59C0u;
    // 0x3a59c0: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3a59c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a59c4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a59c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a59c8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a59c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a59cc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a59ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a59d0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a59d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a59d4: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3a59d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3a59d8: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3a59d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3a59dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a59dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_3a59e0:
    // 0x3a59e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x3a59e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a59e4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3a59e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a59e8: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x3a59e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x3a59ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a59ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a59f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3a59f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a59f4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A59F4u;
    {
        const bool branch_taken_0x3a59f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a59f4) {
            ctx->pc = 0x3A59F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A59F4u;
            // 0x3a59f8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A59E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a59e0;
        }
    }
    ctx->pc = 0x3A59FCu;
    // 0x3a59fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a59fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a5a00:
    // 0x3a5a00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a5a00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5a04: 0x0  nop
    ctx->pc = 0x3a5a04u;
    // NOP
    // 0x3a5a08: 0x0  nop
    ctx->pc = 0x3a5a08u;
    // NOP
    // 0x3a5a0c: 0x0  nop
    ctx->pc = 0x3a5a0cu;
    // NOP
    // 0x3a5a10: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A5A10u;
    {
        const bool branch_taken_0x3a5a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5a10) {
            ctx->pc = 0x3A5A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5A10u;
            // 0x3a5a14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5a00;
        }
    }
    ctx->pc = 0x3A5A18u;
    // 0x3a5a18: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5A18u;
        // 0x3a5a1c: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5A20u;
}

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

// Function: func_003A54D8
// Address: 0x3a54d8 - 0x3a5678
void func_003A54D8_0x3a54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A54D8_0x3a54d8");
#endif

    switch (ctx->pc) {
        case 0x3a553cu: goto label_3a553c;
        case 0x3a5610u: goto label_3a5610;
        case 0x3a564cu: goto label_3a564c;
        default: break;
    }

    ctx->pc = 0x3a54d8u;

    // 0x3a54d8: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3a54d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x3a54dc: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3A54DCu;
    {
        const bool branch_taken_0x3a54dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54DCu;
        // 0x3a54e0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54dc) {
            ctx->pc = 0x3A5658u;
            goto label_3a5658;
        }
    }
    ctx->pc = 0x3A54E4u;
    // 0x3a54e4: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x3a54e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x3a54e8: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3a54e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a54ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a54ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a54f0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a54f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a54f4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a54f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a54f8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a54f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a54fc: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3a54fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3a5500: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3a5500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3a5504: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x3a5504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3a5508: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x3a5508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3a550c: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x3a550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x3a5510: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x3a5510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5514: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3a5514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5518: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3a5518u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a551c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3a551cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5520: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3a5520u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a5524: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3a5524u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5528: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3a5528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a552c: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x3a552cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x3a5530: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x3a5530u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a5534: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3A5534u;
    {
        const bool branch_taken_0x3a5534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5534u;
        // 0x3a5538: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5534) {
            ctx->pc = 0x3A55D0u;
            goto label_3a55d0;
        }
    }
    ctx->pc = 0x3A553Cu;
label_3a553c:
    // 0x3a553c: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x3a553cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5540: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x3a5540u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x3a5544: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x3a5544u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x3a5548: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x3a5548u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x3a554c: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x3a554cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3a5550: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5550u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5554: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x3a5554u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3a5558: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x3a5558u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x3a555c: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x3a555cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3a5560: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3a5560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5564: 0x5460003d  bnel        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x3A5564u;
    {
        const bool branch_taken_0x3a5564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5564) {
            ctx->pc = 0x3A5568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5564u;
            // 0x3a5568: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A556Cu;
    // 0x3a556c: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x3a556cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3a5570: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x3a5570u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5574: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x3a5574u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5578: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x3a5578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a557c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3a557cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5580: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3a5580u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a5584: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3a5584u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5588: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3a5588u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a558c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3a558cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3a5590: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3a5590u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3a5594: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x3a5594u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x3a5598: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x3a5598u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x3a559c: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3a559cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a55a0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a55a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a55a4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a55a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a55a8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a55a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a55ac: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a55acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a55b0: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3a55b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3a55b4: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3a55b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3a55b8: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x3a55b8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x3a55bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3a55bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a55c0: 0x5060ffde  beql        $v1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3A55C0u;
    {
        const bool branch_taken_0x3a55c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a55c0) {
            ctx->pc = 0x3A55C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A55C0u;
            // 0x3a55c4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A553Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a553c;
        }
    }
    ctx->pc = 0x3A55C8u;
    // 0x3a55c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3A55C8u;
    {
        const bool branch_taken_0x3a55c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A55C8u;
        // 0x3a55cc: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a55c8) {
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A55D0u;
label_3a55d0:
    // 0x3a55d0: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x3a55d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a55d4: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x3a55d4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x3a55d8: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x3a55d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x3a55dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a55dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a55e0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3a55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3a55e4: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A55E4u;
    {
        const bool branch_taken_0x3a55e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a55e4) {
            ctx->pc = 0x3A55E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A55E4u;
            // 0x3a55e8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A55ECu;
    // 0x3a55ec: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x3a55ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x3a55f0: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x3a55f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x3a55f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3a55f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a55f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a55f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3a55fc: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x3a55fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x3a5600: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A5600u;
    {
        const bool branch_taken_0x3a5600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5600) {
            ctx->pc = 0x3A5604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5600u;
            // 0x3a5604: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A5608u;
    // 0x3a5608: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a5608u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a560c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3a560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3a5610:
    // 0x3a5610: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x3a5610u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5614: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x3a5614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x3a5618: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x3a5618u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x3a561c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5620: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3a5620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3a5624: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A5624u;
    {
        const bool branch_taken_0x3a5624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5624u;
        // 0x3a5628: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5624) {
            ctx->pc = 0x3A5658u;
            goto label_3a5658;
        }
    }
    ctx->pc = 0x3A562Cu;
    // 0x3a562c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3a562cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3a5630: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x3a5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x3a5634: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a5634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a5638: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3a5638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3a563c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A563Cu;
    {
        const bool branch_taken_0x3a563c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a563c) {
            ctx->pc = 0x3A5640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A563Cu;
            // 0x3a5640: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5610;
        }
    }
    ctx->pc = 0x3A5644u;
    // 0x3a5644: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5644u;
    {
        const bool branch_taken_0x3a5644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5644u;
        // 0x3a5648: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5644) {
            ctx->pc = 0x3A565Cu;
            goto label_3a565c;
        }
    }
    ctx->pc = 0x3A564Cu;
label_3a564c:
    // 0x3a564c: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A564Cu;
    {
        const bool branch_taken_0x3a564c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3a564c) {
            ctx->pc = 0x3A5650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A564Cu;
            // 0x3a5650: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5668u;
            goto label_3a5668;
        }
    }
    ctx->pc = 0x3A5654u;
    // 0x3a5654: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a5654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a5658:
    // 0x3a5658: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a5658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a565c:
    // 0x3a565c: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A565Cu;
    {
        const bool branch_taken_0x3a565c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a565c) {
            ctx->pc = 0x3A564Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a564c;
        }
    }
    ctx->pc = 0x3A5664u;
    // 0x3a5664: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3a5664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a5668:
    // 0x3a5668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a5668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a566c: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x3a566cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x3a5670: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5670u;
        // 0x3a5674: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5678u;
}

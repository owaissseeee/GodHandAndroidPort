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

// Function: strcmp
// Address: 0x3a5678 - 0x3a57c4
void strcmp_0x3a5678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strcmp_0x3a5678");
#endif

    switch (ctx->pc) {
        case 0x3a56f8u: goto label_3a56f8;
        case 0x3a5758u: goto label_3a5758;
        case 0x3a5790u: goto label_3a5790;
        default: break;
    }

    ctx->pc = 0x3a5678u;

    // 0x3a5678: 0x854025  or          $t0, $a0, $a1
    ctx->pc = 0x3a5678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3a567c: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x3a567cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3a5680: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x3A5680u;
    {
        const bool branch_taken_0x3a5680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5680) {
            ctx->pc = 0x3A5684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5680u;
            // 0x3a5684: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A57B0u;
            goto label_3a57b0;
        }
    }
    ctx->pc = 0x3A5688u;
    // 0x3a5688: 0x3109000f  andi        $t1, $t0, 0xF
    ctx->pc = 0x3a5688u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3a568c: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x3a568cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5690: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5690u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a5694: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a5694u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a5698: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3a5698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3a569c: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x3a569cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x3a56a0: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x3a56a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x3a56a4: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x3a56a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x3a56a8: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3a56a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a56ac: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a56acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a56b0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a56b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a56b4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a56b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a56b8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a56b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a56bc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3a56bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3a56c0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3a56c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3a56c4: 0x1520001f  bnez        $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A56C4u;
    {
        const bool branch_taken_0x3a56c4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56C4u;
        // 0x3a56c8: 0xdca20000  ld          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56c4) {
            ctx->pc = 0x3A5744u;
            goto label_3a5744;
        }
    }
    ctx->pc = 0x3A56CCu;
    // 0x3a56cc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3a56ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a56d0: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x3a56d0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x3a56d4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a56d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a56d8: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x3a56d8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x3a56dc: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x3a56dcu;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a56e0: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x3a56e0u;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x3a56e4: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x3a56e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3a56e8: 0x54600031  bnel        $v1, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x3A56E8u;
    {
        const bool branch_taken_0x3a56e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a56e8) {
            ctx->pc = 0x3A56ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A56E8u;
            // 0x3a56ec: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A57B0u;
            goto label_3a57b0;
        }
    }
    ctx->pc = 0x3A56F0u;
    // 0x3a56f0: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a56f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a56f4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3a56f4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_3a56f8:
    // 0x3a56f8: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x3a56f8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a56fc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a56fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5700: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x3a5700u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5704: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x3a5704u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3a5708: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x3a5708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a570c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A570Cu;
    {
        const bool branch_taken_0x3a570c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A570Cu;
        // 0x3a5710: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a570c) {
            ctx->pc = 0x3A571Cu;
            goto label_3a571c;
        }
    }
    ctx->pc = 0x3A5714u;
    // 0x3a5714: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5714u;
        // 0x3a5718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A571Cu;
label_3a571c:
    // 0x3a571c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a5720: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3a5720u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5724: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a5724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5728: 0x70433848  psubw       $a3, $v0, $v1
    ctx->pc = 0x3a5728u;
    SET_GPR_VEC(ctx, 7, PS2_PSUBW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a572c: 0x70e433a9  pcpyud      $a2, $a3, $a0
    ctx->pc = 0x3a572cu;
    SET_GPR_VEC(ctx, 6, _mm_unpackhi_epi64(GPR_VEC(ctx, 7), GPR_VEC(ctx, 4)));
    // 0x3a5730: 0xc74825  or          $t1, $a2, $a3
    ctx->pc = 0x3a5730u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3a5734: 0x5120fff0  beql        $t1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3A5734u;
    {
        const bool branch_taken_0x3a5734 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a5734) {
            ctx->pc = 0x3A5738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5734u;
            // 0x3a5738: 0x70021ce9  pnor        $v1, $zero, $v0 (Delay Slot)
            SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A56F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a56f8;
        }
    }
    ctx->pc = 0x3A573Cu;
    // 0x3a573c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A573Cu;
    {
        const bool branch_taken_0x3a573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A573Cu;
        // 0x3a5740: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a573c) {
            ctx->pc = 0x3A57B0u;
            goto label_3a57b0;
        }
    }
    ctx->pc = 0x3A5744u;
label_3a5744:
    // 0x3a5744: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3a5744u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5748: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A5748u;
    {
        const bool branch_taken_0x3a5748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a5748) {
            ctx->pc = 0x3A574Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5748u;
            // 0x3a574c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A57B0u;
            goto label_3a57b0;
        }
    }
    ctx->pc = 0x3A5750u;
    // 0x3a5750: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3a5750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5754: 0x24027  nor         $t0, $zero, $v0
    ctx->pc = 0x3a5754u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_3a5758:
    // 0x3a5758: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x3a5758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x3a575c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3a575cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3a5760: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3a5760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3a5764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A5764u;
    {
        const bool branch_taken_0x3a5764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5764u;
        // 0x3a5768: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5764) {
            ctx->pc = 0x3A5774u;
            goto label_3a5774;
        }
    }
    ctx->pc = 0x3A576Cu;
    // 0x3a576c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A576Cu;
        // 0x3a5770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A576Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5774u;
label_3a5774:
    // 0x3a5774: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a5774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a5778: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x3a5778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a577c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3a577cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5780: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A5780u;
    {
        const bool branch_taken_0x3a5780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a5780) {
            ctx->pc = 0x3A5784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5780u;
            // 0x3a5784: 0x24027  nor         $t0, $zero, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5758;
        }
    }
    ctx->pc = 0x3A5788u;
    // 0x3a5788: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5788u;
    {
        const bool branch_taken_0x3a5788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5788u;
        // 0x3a578c: 0x80820000  lb          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5788) {
            ctx->pc = 0x3A57B0u;
            goto label_3a57b0;
        }
    }
    ctx->pc = 0x3A5790u;
label_3a5790:
    // 0x3a5790: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x3a5790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a5794: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3a5794u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5798: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a5798u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a579c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A579Cu;
    {
        const bool branch_taken_0x3a579c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a579c) {
            ctx->pc = 0x3A57A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A579Cu;
            // 0x3a57a0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A57B8u;
            goto label_3a57b8;
        }
    }
    ctx->pc = 0x3A57A4u;
    // 0x3a57a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a57a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a57a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a57a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a57ac: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3a57acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a57b0:
    // 0x3a57b0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A57B0u;
    {
        const bool branch_taken_0x3a57b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57B0u;
        // 0x3a57b4: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a57b0) {
            ctx->pc = 0x3A5790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5790;
        }
    }
    ctx->pc = 0x3A57B8u;
label_3a57b8:
    // 0x3a57b8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a57b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a57bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A57BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57BCu;
        // 0x3a57c0: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A57C4u;
}

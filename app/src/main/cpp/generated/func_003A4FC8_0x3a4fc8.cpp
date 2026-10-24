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

// Function: func_003A4FC8
// Address: 0x3a4fc8 - 0x3a50b4
void func_003A4FC8_0x3a4fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A4FC8_0x3a4fc8");
#endif

    switch (ctx->pc) {
        case 0x3a5030u: goto label_3a5030;
        case 0x3a508cu: goto label_3a508c;
        default: break;
    }

    ctx->pc = 0x3a4fc8u;

    // 0x3a4fc8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3a4fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a4fcc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3A4FCCu;
    {
        const bool branch_taken_0x3a4fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FCCu;
        // 0x3a4fd0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fcc) {
            ctx->pc = 0x3A5070u;
            goto label_3a5070;
        }
    }
    ctx->pc = 0x3A4FD4u;
    // 0x3a4fd4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x3a4fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3a4fd8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A4FD8u;
    {
        const bool branch_taken_0x3a4fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4FD8u;
        // 0x3a4fdc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4fd8) {
            ctx->pc = 0x3A5070u;
            goto label_3a5070;
        }
    }
    ctx->pc = 0x3A4FE0u;
    // 0x3a4fe0: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x3a4fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x3a4fe4: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x3a4fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a4fe8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a4fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a4fec: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3a4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3a4ff0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a4ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a4ff4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3a4ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3a4ff8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3a4ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3a4ffc: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x3a4ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x3a5000: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x3a5000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3a5004: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3a5004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3a5008: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3a5008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3a500c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3a500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3a5010: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3a5010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3a5014: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3a5014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3a5018: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3a5018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3a501c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3a501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3a5020: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x3a5020u;
    { __m128i src = GPR_VEC(ctx, 10); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x3a5024: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x3a5024u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3a5028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a502c: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x3a502cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_3a5030:
    // 0x3a5030: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3a5030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a5034: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x3a5034u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5038: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x3a5038u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3a503c: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3a503cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3a5040: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x3a5040u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3a5044: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3a5044u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3a5048: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3a5048u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3a504c: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x3a504cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3a5050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3a5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a5054: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5054u;
    {
        const bool branch_taken_0x3a5054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a5054) {
            ctx->pc = 0x3A5058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A5054u;
            // 0x3a5058: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A5070u;
            goto label_3a5070;
        }
    }
    ctx->pc = 0x3A505Cu;
    // 0x3a505c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x3a505cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x3a5060: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x3a5060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a5064: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A5064u;
    {
        const bool branch_taken_0x3a5064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5064u;
        // 0x3a5068: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5064) {
            ctx->pc = 0x3A5030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5030;
        }
    }
    ctx->pc = 0x3A506Cu;
    // 0x3a506c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x3a506cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a5070:
    // 0x3a5070: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a5070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5074: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5078: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a5078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a507c: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A507Cu;
    {
        const bool branch_taken_0x3a507c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a507c) {
            ctx->pc = 0x3A50A4u;
            goto label_3a50a4;
        }
    }
    ctx->pc = 0x3A5084u;
    // 0x3a5084: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3a5084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3a5088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a5088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3a508c:
    // 0x3a508c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a508cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a5090: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5090u;
    {
        const bool branch_taken_0x3a5090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3A5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5090u;
        // 0x3a5094: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5090) {
            ctx->pc = 0x3A50ACu;
            goto label_3a50ac;
        }
    }
    ctx->pc = 0x3A5098u;
    // 0x3a5098: 0x0  nop
    ctx->pc = 0x3a5098u;
    // NOP
    // 0x3a509c: 0x14c3fffb  bne         $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A509Cu;
    {
        const bool branch_taken_0x3a509c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A509Cu;
        // 0x3a50a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a509c) {
            ctx->pc = 0x3A508Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a508c;
        }
    }
    ctx->pc = 0x3A50A4u;
label_3a50a4:
    // 0x3a50a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A50A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50A4u;
        // 0x3a50a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A50A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A50ACu;
label_3a50ac:
    // 0x3a50ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3A50ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A50ACu;
        // 0x3a50b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A50ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A50B4u;
}

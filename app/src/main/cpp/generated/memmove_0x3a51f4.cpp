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

// Function: memmove
// Address: 0x3a51f4 - 0x3a52f0
void memmove_0x3a51f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("memmove_0x3a51f4");
#endif

    switch (ctx->pc) {
        case 0x3a5228u: goto label_3a5228;
        case 0x3a5268u: goto label_3a5268;
        case 0x3a52a0u: goto label_3a52a0;
        case 0x3a52d0u: goto label_3a52d0;
        default: break;
    }

    ctx->pc = 0x3a51f4u;

    // 0x3a51f4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3a51f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a51f8: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x3a51f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3a51fc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A51FCu;
    {
        const bool branch_taken_0x3a51fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A51FCu;
        // 0x3a5200: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a51fc) {
            ctx->pc = 0x3A5248u;
            goto label_3a5248;
        }
    }
    ctx->pc = 0x3A5204u;
    // 0x3a5204: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x3a5204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3a5208: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x3a5208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3a520c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A520Cu;
    {
        const bool branch_taken_0x3a520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A520Cu;
        // 0x3a5210: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a520c) {
            ctx->pc = 0x3A5248u;
            goto label_3a5248;
        }
    }
    ctx->pc = 0x3A5214u;
    // 0x3a5214: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x3a5214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3a5218: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a521c: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3A521Cu;
    {
        const bool branch_taken_0x3a521c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A5220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A521Cu;
        // 0x3a5220: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a521c) {
            ctx->pc = 0x3A52E8u;
            goto label_3a52e8;
        }
    }
    ctx->pc = 0x3A5224u;
    // 0x3a5224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a5224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a5228:
    // 0x3a5228: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3a5228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3a522c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a5230: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a5230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5234: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a5234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a5238: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A5238u;
    {
        const bool branch_taken_0x3a5238 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5238u;
        // 0x3a523c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5238) {
            ctx->pc = 0x3A5228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5228;
        }
    }
    ctx->pc = 0x3A5240u;
    // 0x3a5240: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5240u;
        // 0x3a5244: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5248u;
label_3a5248:
    // 0x3a5248: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x3a5248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a524c: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A524Cu;
    {
        const bool branch_taken_0x3a524c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a524c) {
            ctx->pc = 0x3A5250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A524Cu;
            // 0x3a5250: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A52C4u;
            goto label_3a52c4;
        }
    }
    ctx->pc = 0x3A5254u;
    // 0x3a5254: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x3a5254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3a5258: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3a5258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3a525c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A525Cu;
    {
        const bool branch_taken_0x3a525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a525c) {
            ctx->pc = 0x3A5260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A525Cu;
            // 0x3a5260: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A52C4u;
            goto label_3a52c4;
        }
    }
    ctx->pc = 0x3A5264u;
    // 0x3a5264: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3a5264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a5268:
    // 0x3a5268: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3a5268u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a526c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x3a526cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x3a5270: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a5270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a5274: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x3a5274u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a5278: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x3a5278u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x3a527c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3a527cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3a5280: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3a5280u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a5284: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3a5284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3a5288: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3a5288u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3a528c: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3A528Cu;
    {
        const bool branch_taken_0x3a528c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A528Cu;
        // 0x3a5290: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a528c) {
            ctx->pc = 0x3A5268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a5268;
        }
    }
    ctx->pc = 0x3A5294u;
    // 0x3a5294: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a5294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a5298: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A5298u;
    {
        const bool branch_taken_0x3a5298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5298u;
        // 0x3a529c: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5298) {
            ctx->pc = 0x3A52C0u;
            goto label_3a52c0;
        }
    }
    ctx->pc = 0x3A52A0u;
label_3a52a0:
    // 0x3a52a0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3a52a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a52a4: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x3a52a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x3a52a8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3a52a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3a52ac: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x3a52acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3a52b0: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3a52b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3a52b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A52B4u;
    {
        const bool branch_taken_0x3a52b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A52B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52B4u;
        // 0x3a52b8: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52b4) {
            ctx->pc = 0x3A52A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a52a0;
        }
    }
    ctx->pc = 0x3A52BCu;
    // 0x3a52bc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3a52bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3a52c0:
    // 0x3a52c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a52c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_3a52c4:
    // 0x3a52c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a52c8: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A52C8u;
    {
        const bool branch_taken_0x3a52c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A52CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52C8u;
        // 0x3a52cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52c8) {
            ctx->pc = 0x3A52E8u;
            goto label_3a52e8;
        }
    }
    ctx->pc = 0x3A52D0u;
label_3a52d0:
    // 0x3a52d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a52d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a52d4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3a52d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a52d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a52d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a52dc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3a52dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a52e0: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A52E0u;
    {
        const bool branch_taken_0x3a52e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A52E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E0u;
        // 0x3a52e4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a52e0) {
            ctx->pc = 0x3A52D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a52d0;
        }
    }
    ctx->pc = 0x3A52E8u;
label_3a52e8:
    // 0x3a52e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A52E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A52ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A52E8u;
        // 0x3a52ec: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A52E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A52F0u;
}

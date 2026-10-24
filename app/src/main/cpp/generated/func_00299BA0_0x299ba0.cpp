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

// Function: func_00299BA0
// Address: 0x299ba0 - 0x299de0
void func_00299BA0_0x299ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00299BA0_0x299ba0");
#endif

    switch (ctx->pc) {
        case 0x299bd0u: goto label_299bd0;
        case 0x299c18u: goto label_299c18;
        case 0x299c58u: goto label_299c58;
        case 0x299ca0u: goto label_299ca0;
        case 0x299cd4u: goto label_299cd4;
        case 0x299ce4u: goto label_299ce4;
        case 0x299cfcu: goto label_299cfc;
        case 0x299d0cu: goto label_299d0c;
        case 0x299d24u: goto label_299d24;
        case 0x299d34u: goto label_299d34;
        case 0x299d3cu: goto label_299d3c;
        case 0x299d80u: goto label_299d80;
        case 0x299db4u: goto label_299db4;
        case 0x299dc4u: goto label_299dc4;
        case 0x299dccu: goto label_299dcc;
        default: break;
    }

    ctx->pc = 0x299ba0u;

    // 0x299ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299ba4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x299ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x299ba8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x299ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x299bac: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x299bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x299bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x299bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x299bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299bbc: 0x244ad758  addiu       $t2, $v0, -0x28A8
    ctx->pc = 0x299bbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956888));
    // 0x299bc0: 0x24696980  addiu       $t1, $v1, 0x6980
    ctx->pc = 0x299bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 27008));
    // 0x299bc4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x299bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x299bc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299bcc: 0x0  nop
    ctx->pc = 0x299bccu;
    // NOP
label_299bd0:
    // 0x299bd0: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x299bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x299bd4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x299bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x299bd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x299bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299bdc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x299bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x299be0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x299be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x299be4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x299be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x299be8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299bec: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x299becu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x299bf0: 0x1500fff7  bnez        $t0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x299BF0u;
    {
        const bool branch_taken_0x299bf0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x299BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BF0u;
        // 0x299bf4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bf0) {
            ctx->pc = 0x299BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299bd0;
        }
    }
    ctx->pc = 0x299BF8u;
    // 0x299bf8: 0x14e0000f  bnez        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x299BF8u;
    {
        const bool branch_taken_0x299bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x299BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299BF8u;
        // 0x299bfc: 0x5883c  dsll32      $s1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299bf8) {
            ctx->pc = 0x299C38u;
            goto label_299c38;
        }
    }
    ctx->pc = 0x299C00u;
    // 0x299c00: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x299c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x299c04: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x299c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x299c08: 0x24446980  addiu       $a0, $v0, 0x6980
    ctx->pc = 0x299c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x299c0c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x299c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x299c10: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x299c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x299c14: 0x0  nop
    ctx->pc = 0x299c14u;
    // NOP
label_299c18:
    // 0x299c18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299c1c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x299c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x299c20: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x299c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x299c24: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x299c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x299c28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299c2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x299c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x299c30: 0x1500fff9  bnez        $t0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x299C30u;
    {
        const bool branch_taken_0x299c30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x299C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C30u;
        // 0x299c34: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c30) {
            ctx->pc = 0x299C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299c18;
        }
    }
    ctx->pc = 0x299C38u;
label_299c38:
    // 0x299c38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299c3c: 0x14e20010  bne         $a3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x299C3Cu;
    {
        const bool branch_taken_0x299c3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x299C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C3Cu;
        // 0x299c40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c3c) {
            ctx->pc = 0x299C80u;
            goto label_299c80;
        }
    }
    ctx->pc = 0x299C44u;
    // 0x299c44: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x299c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x299c48: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x299c48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x299c4c: 0x24446980  addiu       $a0, $v0, 0x6980
    ctx->pc = 0x299c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x299c50: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x299c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x299c54: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x299c54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_299c58:
    // 0x299c58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299c5c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x299c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x299c60: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x299c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x299c64: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x299c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x299c68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x299c6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x299c70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x299c74: 0x1500fff8  bnez        $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299C74u;
    {
        const bool branch_taken_0x299c74 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x299C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299C74u;
        // 0x299c78: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299c74) {
            ctx->pc = 0x299C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299c58;
        }
    }
    ctx->pc = 0x299C7Cu;
    // 0x299c7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x299c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_299c80:
    // 0x299c80: 0x54e20011  bnel        $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x299C80u;
    {
        const bool branch_taken_0x299c80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x299c80) {
            ctx->pc = 0x299C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299C80u;
            // 0x299c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299CC8u;
            goto label_299cc8;
        }
    }
    ctx->pc = 0x299C88u;
    // 0x299c88: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x299c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x299c8c: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x299c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x299c90: 0x24446980  addiu       $a0, $v0, 0x6980
    ctx->pc = 0x299c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x299c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x299c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x299c98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x299c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x299c9c: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x299c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
label_299ca0:
    // 0x299ca0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299ca4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x299ca4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x299ca8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x299ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x299cac: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x299cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x299cb0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x299cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x299cb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x299cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x299cb8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x299cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x299cbc: 0x1500fff8  bnez        $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299CBCu;
    {
        const bool branch_taken_0x299cbc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x299CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299CBCu;
        // 0x299cc0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299cbc) {
            ctx->pc = 0x299CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299ca0;
        }
    }
    ctx->pc = 0x299CC4u;
    // 0x299cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_299cc8:
    // 0x299cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ccc: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x299CCCu;
    SET_GPR_U32(ctx, 31, 0x299CD4u);
    ctx->pc = 0x299CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CCCu;
    // 0x299cd0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x299CCCu, 0x299CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CD4u;
label_299cd4:
    // 0x299cd4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x299cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299cdc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299CDCu;
    SET_GPR_U32(ctx, 31, 0x299CE4u);
    ctx->pc = 0x299CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CDCu;
    // 0x299ce0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299CDCu, 0x299CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CE4u;
label_299ce4:
    // 0x299ce4: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299ce8: 0x6307c  dsll32      $a2, $a2, 1
    ctx->pc = 0x299ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 1));
    // 0x299cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299cf0: 0x2263025  or          $a2, $s1, $a2
    ctx->pc = 0x299cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x299cf4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299CF4u;
    SET_GPR_U32(ctx, 31, 0x299CFCu);
    ctx->pc = 0x299CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299CF4u;
    // 0x299cf8: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299CF4u, 0x299CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299CFCu;
label_299cfc:
    // 0x299cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d00: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x299d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x299d04: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299D04u;
    SET_GPR_U32(ctx, 31, 0x299D0Cu);
    ctx->pc = 0x299D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D04u;
    // 0x299d08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299D04u, 0x299D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D0Cu;
label_299d0c:
    // 0x299d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d10: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299d14: 0x63578  dsll        $a2, $a2, 21
    ctx->pc = 0x299d14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 21);
    // 0x299d18: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x299d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x299d1c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299D1Cu;
    SET_GPR_U32(ctx, 31, 0x299D24u);
    ctx->pc = 0x299D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D1Cu;
    // 0x299d20: 0x24050052  addiu       $a1, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299D1Cu, 0x299D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D24u;
label_299d24:
    // 0x299d24: 0x24050053  addiu       $a1, $zero, 0x53
    ctx->pc = 0x299d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x299d28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d2c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299D2Cu;
    SET_GPR_U32(ctx, 31, 0x299D34u);
    ctx->pc = 0x299D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D2Cu;
    // 0x299d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299D2Cu, 0x299D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D34u;
label_299d34:
    // 0x299d34: 0xc0a6642  jal         func_299908
    ctx->pc = 0x299D34u;
    SET_GPR_U32(ctx, 31, 0x299D3Cu);
    ctx->pc = 0x299D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299D34u;
    // 0x299d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x299D34u, 0x299D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299D3Cu;
label_299d3c:
    // 0x299d3c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x299d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x299d40: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299d40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299d44: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x299d44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x299d48: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x299d48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
    // 0x299d4c: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x299d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x299d50: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x299d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x299d54: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x299d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299d58: 0x24496980  addiu       $t1, $v0, 0x6980
    ctx->pc = 0x299d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x299d5c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x299d5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299d60: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x299d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x299d64: 0xfca60000  sd          $a2, 0x0($a1)
    ctx->pc = 0x299d64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 6));
    // 0x299d68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x299d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299d6c: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x299d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x299d70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x299d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299d74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x299d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x299d78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x299d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x299d7c: 0x0  nop
    ctx->pc = 0x299d7cu;
    // NOP
label_299d80:
    // 0x299d80: 0xdd240000  ld          $a0, 0x0($t1)
    ctx->pc = 0x299d80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x299d84: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x299d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x299d88: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x299d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x299d8c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x299d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x299d90: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x299d90u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x299d94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x299d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x299d98: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x299d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x299d9c: 0x1500fff8  bnez        $t0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299D9Cu;
    {
        const bool branch_taken_0x299d9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x299DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299D9Cu;
        // 0x299da0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299d9c) {
            ctx->pc = 0x299D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299d80;
        }
    }
    ctx->pc = 0x299DA4u;
    // 0x299da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299dac: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x299DACu;
    SET_GPR_U32(ctx, 31, 0x299DB4u);
    ctx->pc = 0x299DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DACu;
    // 0x299db0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x299DACu, 0x299DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DB4u;
label_299db4:
    // 0x299db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299db8: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x299db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x299dbc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299DBCu;
    SET_GPR_U32(ctx, 31, 0x299DC4u);
    ctx->pc = 0x299DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DBCu;
    // 0x299dc0: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299DBCu, 0x299DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DC4u;
label_299dc4:
    // 0x299dc4: 0xc0a6642  jal         func_299908
    ctx->pc = 0x299DC4u;
    SET_GPR_U32(ctx, 31, 0x299DCCu);
    ctx->pc = 0x299DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299DC4u;
    // 0x299dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x299DC4u, 0x299DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299DCCu;
label_299dcc:
    // 0x299dcc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x299dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299dd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299dd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x299DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299DD8u;
        // 0x299ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299DE0u;
}

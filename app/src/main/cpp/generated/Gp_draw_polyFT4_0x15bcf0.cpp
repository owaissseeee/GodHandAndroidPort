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

// Function: Gp_draw_polyFT4
// Address: 0x15bcf0 - 0x15c410
void Gp_draw_polyFT4_0x15bcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_draw_polyFT4_0x15bcf0");
#endif

    switch (ctx->pc) {
        case 0x15bd44u: goto label_15bd44;
        case 0x15bd50u: goto label_15bd50;
        case 0x15bd60u: goto label_15bd60;
        case 0x15bdb8u: goto label_15bdb8;
        case 0x15bdd8u: goto label_15bdd8;
        case 0x15bdf8u: goto label_15bdf8;
        case 0x15bf1cu: goto label_15bf1c;
        case 0x15bf38u: goto label_15bf38;
        case 0x15bf50u: goto label_15bf50;
        case 0x15bf88u: goto label_15bf88;
        case 0x15bf9cu: goto label_15bf9c;
        case 0x15c3b8u: goto label_15c3b8;
        case 0x15c3d8u: goto label_15c3d8;
        default: break;
    }

    ctx->pc = 0x15bcf0u;

    // 0x15bcf0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x15bcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x15bcf4: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x15bcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x15bcf8: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x15bcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x15bcfc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15bcfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd00: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x15bd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x15bd04: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x15bd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd08: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x15bd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x15bd0c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x15bd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd10: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x15bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x15bd14: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x15bd14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd18: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x15bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
    // 0x15bd1c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x15bd1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd20: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x15bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x15bd24: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15bd24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd28: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x15bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
    // 0x15bd2c: 0x24040290  addiu       $a0, $zero, 0x290
    ctx->pc = 0x15bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 656));
    // 0x15bd30: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x15bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x15bd34: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15bd38: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x15bd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
    // 0x15bd3c: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15BD3Cu;
    SET_GPR_U32(ctx, 31, 0x15BD44u);
    ctx->pc = 0x15BD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD3Cu;
    // 0x15bd40: 0xafab008c  sw          $t3, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15BD3Cu, 0x15BD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD44u;
label_15bd44:
    // 0x15bd44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15bd44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd48: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BD48u;
    {
        const bool branch_taken_0x15bd48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15bd48) {
            ctx->pc = 0x15BD58u;
            goto label_15bd58;
        }
    }
    ctx->pc = 0x15BD50u;
label_15bd50:
    // 0x15bd50: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x15BD50u;
    {
        const bool branch_taken_0x15bd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD50u;
        // 0x15bd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd50) {
            ctx->pc = 0x15C3DCu;
            goto label_15c3dc;
        }
    }
    ctx->pc = 0x15BD58u;
label_15bd58:
    // 0x15bd58: 0xc05458c  jal         func_151630
    ctx->pc = 0x15BD58u;
    SET_GPR_U32(ctx, 31, 0x15BD60u);
    ctx->pc = 0x15BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BD58u;
    // 0x15bd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151630u, 0x15BD58u, 0x15BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BD60u;
label_15bd60:
    // 0x15bd60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15bd60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bd64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15bd68: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15BD68u;
    {
        const bool branch_taken_0x15bd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD68u;
        // 0x15bd6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd68) {
            ctx->pc = 0x15BDC0u;
            goto label_15bdc0;
        }
    }
    ctx->pc = 0x15BD70u;
    // 0x15bd70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BD70u;
    {
        const bool branch_taken_0x15bd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD70u;
        // 0x15bd74: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd70) {
            ctx->pc = 0x15BD88u;
            goto label_15bd88;
        }
    }
    ctx->pc = 0x15BD78u;
    // 0x15bd78: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BD78u;
    {
        const bool branch_taken_0x15bd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD78u;
        // 0x15bd7c: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd78) {
            ctx->pc = 0x15BDA0u;
            goto label_15bda0;
        }
    }
    ctx->pc = 0x15BD80u;
    // 0x15bd80: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x15BD80u;
    {
        const bool branch_taken_0x15bd80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd80) {
            ctx->pc = 0x15BE5Cu;
            goto label_15be5c;
        }
    }
    ctx->pc = 0x15BD88u;
label_15bd88:
    // 0x15bd88: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x15BD88u;
    {
        const bool branch_taken_0x15bd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD88u;
        // 0x15bd8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd88) {
            ctx->pc = 0x15BDE0u;
            goto label_15bde0;
        }
    }
    ctx->pc = 0x15BD90u;
    // 0x15bd90: 0x1062ffef  beq         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x15BD90u;
    {
        const bool branch_taken_0x15bd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD90u;
        // 0x15bd94: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd90) {
            ctx->pc = 0x15BD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bd50;
        }
    }
    ctx->pc = 0x15BD98u;
    // 0x15bd98: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x15BD98u;
    {
        const bool branch_taken_0x15bd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd98) {
            ctx->pc = 0x15BE5Cu;
            goto label_15be5c;
        }
    }
    ctx->pc = 0x15BDA0u;
label_15bda0:
    // 0x15bda0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15bda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bda4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15bda4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bda8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15bda8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bdacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdb0: 0xc057828  jal         func_15E0A0
    ctx->pc = 0x15BDB0u;
    SET_GPR_U32(ctx, 31, 0x15BDB8u);
    ctx->pc = 0x15BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BDB0u;
    // 0x15bdb4: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E0A0u, 0x15BDB0u, 0x15BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDB8u;
label_15bdb8:
    // 0x15bdb8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x15BDB8u;
    {
        const bool branch_taken_0x15bdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDB8u;
        // 0x15bdbc: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdb8) {
            ctx->pc = 0x15BE5Cu;
            goto label_15be5c;
        }
    }
    ctx->pc = 0x15BDC0u;
label_15bdc0:
    // 0x15bdc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15bdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15bdc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15bdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdd0: 0xc0578b8  jal         func_15E2E0
    ctx->pc = 0x15BDD0u;
    SET_GPR_U32(ctx, 31, 0x15BDD8u);
    ctx->pc = 0x15BDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BDD0u;
    // 0x15bdd4: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E2E0u, 0x15BDD0u, 0x15BDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDD8u;
label_15bdd8:
    // 0x15bdd8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15BDD8u;
    {
        const bool branch_taken_0x15bdd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDD8u;
        // 0x15bddc: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdd8) {
            ctx->pc = 0x15BE5Cu;
            goto label_15be5c;
        }
    }
    ctx->pc = 0x15BDE0u;
label_15bde0:
    // 0x15bde0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bde8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15bde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x15bdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bdf0: 0xc05777e  jal         func_15DDF8
    ctx->pc = 0x15BDF0u;
    SET_GPR_U32(ctx, 31, 0x15BDF8u);
    ctx->pc = 0x15BDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BDF0u;
    // 0x15bdf4: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15DDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DDF8u, 0x15BDF0u, 0x15BDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BDF8u;
label_15bdf8:
    // 0x15bdf8: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x15bdf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15bdfc: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x15bdfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x15be00: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15be00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15be04: 0x2405c000  addiu       $a1, $zero, -0x4000
    ctx->pc = 0x15be04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x15be08: 0x30433fff  andi        $v1, $v0, 0x3FFF
    ctx->pc = 0x15be08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x15be0c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x15be0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x15be10: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x15be10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x15be14: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x15be14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x15be18: 0x32853fff  andi        $a1, $s4, 0x3FFF
    ctx->pc = 0x15be18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16383);
    // 0x15be1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15be1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15be20: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x15be20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15be24: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x15be24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x15be28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15be28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15be2c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15be2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15be30: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x15be30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15be34: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x15be34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x15be38: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x15be38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x15be3c: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x15be3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x15be40: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x15be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x15be44: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x15be44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15be48: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x15be48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x15be4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15be50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15be50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15be54: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x15be54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x15be58: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_15be5c:
    // 0x15be5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15be60: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x15be60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x15be64: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15be64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15be68: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x15be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x15be6c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x15be6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15be70: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x15be70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x15be74: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x15be74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x15be78: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x15be78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15be7c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15be7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15be80: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15be84: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15be84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15be88: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x15be88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x15be8c: 0x35290044  ori         $t1, $t1, 0x44
    ctx->pc = 0x15be8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)68);
    // 0x15be90: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15be94: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x15be94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x15be98: 0x240c0047  addiu       $t4, $zero, 0x47
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15be9c: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x15be9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15bea0: 0xfe230160  sd          $v1, 0x160($s1)
    ctx->pc = 0x15bea0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 352), GPR_U64(ctx, 3));
    // 0x15bea4: 0xae240168  sw          $a0, 0x168($s1)
    ctx->pc = 0x15bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 4));
    // 0x15bea8: 0x240e0006  addiu       $t6, $zero, 0x6
    ctx->pc = 0x15bea8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15beac: 0xae22016c  sw          $v0, 0x16C($s1)
    ctx->pc = 0x15beacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 2));
    // 0x15beb0: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x15beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15beb4: 0xfe250170  sd          $a1, 0x170($s1)
    ctx->pc = 0x15beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 5));
    // 0x15beb8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x15beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15bebc: 0xfe260178  sd          $a2, 0x178($s1)
    ctx->pc = 0x15bebcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 6));
    // 0x15bec0: 0xfe270180  sd          $a3, 0x180($s1)
    ctx->pc = 0x15bec0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 7));
    // 0x15bec4: 0xfe280188  sd          $t0, 0x188($s1)
    ctx->pc = 0x15bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 8));
    // 0x15bec8: 0xfe290190  sd          $t1, 0x190($s1)
    ctx->pc = 0x15bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 400), GPR_U64(ctx, 9));
    // 0x15becc: 0xfe2a0198  sd          $t2, 0x198($s1)
    ctx->pc = 0x15beccu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 408), GPR_U64(ctx, 10));
    // 0x15bed0: 0xfe2b01a0  sd          $t3, 0x1A0($s1)
    ctx->pc = 0x15bed0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 11));
    // 0x15bed4: 0xfe2c01a8  sd          $t4, 0x1A8($s1)
    ctx->pc = 0x15bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 424), GPR_U64(ctx, 12));
    // 0x15bed8: 0xfe2d01b8  sd          $t5, 0x1B8($s1)
    ctx->pc = 0x15bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 440), GPR_U64(ctx, 13));
    // 0x15bedc: 0xfe2001b0  sd          $zero, 0x1B0($s1)
    ctx->pc = 0x15bedcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 0));
    // 0x15bee0: 0xdfa20080  ld          $v0, 0x80($sp)
    ctx->pc = 0x15bee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15bee4: 0xfe2e01c8  sd          $t6, 0x1C8($s1)
    ctx->pc = 0x15bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 456), GPR_U64(ctx, 14));
    // 0x15bee8: 0xfe2401d0  sd          $a0, 0x1D0($s1)
    ctx->pc = 0x15bee8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 464), GPR_U64(ctx, 4));
    // 0x15beec: 0xfe2301d8  sd          $v1, 0x1D8($s1)
    ctx->pc = 0x15beecu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 472), GPR_U64(ctx, 3));
    // 0x15bef0: 0xfe2201c0  sd          $v0, 0x1C0($s1)
    ctx->pc = 0x15bef0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 448), GPR_U64(ctx, 2));
    // 0x15bef4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x15bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15bef8: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x15BEF8u;
    {
        const bool branch_taken_0x15bef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEF8u;
        // 0x15befc: 0x162e02  srl         $a1, $s6, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bef8) {
            ctx->pc = 0x15BF64u;
            goto label_15bf64;
        }
    }
    ctx->pc = 0x15BF00u;
    // 0x15bf00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15bf04: 0x161e02  srl         $v1, $s6, 24
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 24));
    // 0x15bf08: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x15bf0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15bf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf10: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x15bf10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x15bf14: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x15BF14u;
    SET_GPR_U32(ctx, 31, 0x15BF1Cu);
    ctx->pc = 0x15BF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF14u;
    // 0x15bf18: 0x26b20030  addiu       $s2, $s5, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x15BF14u, 0x15BF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF1Cu;
label_15bf1c:
    // 0x15bf1c: 0x32de00ff  andi        $fp, $s6, 0xFF
    ctx->pc = 0x15bf1cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15bf20: 0x16ba02  srl         $s7, $s6, 8
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 22), 8));
    // 0x15bf24: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x15bf24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15bf28: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x15bf28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bf2c: 0x16b402  srl         $s6, $s6, 16
    ctx->pc = 0x15bf2cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x15bf30: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15bf34: 0x0  nop
    ctx->pc = 0x15bf34u;
    // NOP
label_15bf38:
    // 0x15bf38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15bf38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf3c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x15bf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x15bf40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15bf40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15bf44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf48: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15BF48u;
    SET_GPR_U32(ctx, 31, 0x15BF50u);
    ctx->pc = 0x15BF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF48u;
    // 0x15bf4c: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15BF48u, 0x15BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF50u;
label_15bf50:
    // 0x15bf50: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15bf50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15bf54: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15BF54u;
    {
        const bool branch_taken_0x15bf54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BF54u;
        // 0x15bf58: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bf54) {
            ctx->pc = 0x15BF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bf38;
        }
    }
    ctx->pc = 0x15BF5Cu;
    // 0x15bf5c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15BF5Cu;
    {
        const bool branch_taken_0x15bf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bf5c) {
            ctx->pc = 0x15BFECu;
            goto label_15bfec;
        }
    }
    ctx->pc = 0x15BF64u;
label_15bf64:
    // 0x15bf64: 0x26b20030  addiu       $s2, $s5, 0x30
    ctx->pc = 0x15bf64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x15bf68: 0x32de00ff  andi        $fp, $s6, 0xFF
    ctx->pc = 0x15bf68u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15bf6c: 0x16ba02  srl         $s7, $s6, 8
    ctx->pc = 0x15bf6cu;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 22), 8));
    // 0x15bf70: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x15bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x15bf74: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x15bf74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15bf78: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x15bf78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bf7c: 0x16b402  srl         $s6, $s6, 16
    ctx->pc = 0x15bf7cu;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 16));
    // 0x15bf80: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x15bf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15bf84: 0x0  nop
    ctx->pc = 0x15bf84u;
    // NOP
label_15bf88:
    // 0x15bf88: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x15bf88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x15bf8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15bf8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bf90: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x15bf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x15bf94: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15BF94u;
    SET_GPR_U32(ctx, 31, 0x15BF9Cu);
    ctx->pc = 0x15BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BF94u;
    // 0x15bf98: 0x2652fff0  addiu       $s2, $s2, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15BF94u, 0x15BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BF9Cu;
label_15bf9c:
    // 0x15bf9c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x15bfa0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x15bfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x15bfa4: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x15bfa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x15bfa8: 0x8cc21180  lw          $v0, 0x1180($a2)
    ctx->pc = 0x15bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x15bfac: 0x8ce56b80  lw          $a1, 0x6B80($a3)
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x586B80u));
    // 0x15bfb0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15bfb4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15bfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15bfb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15bfbc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15bfc0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15bfc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15bfc4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x15bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15bfc8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15bfcc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15bfccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15bfd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15bfd4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15bfd8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15bfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15bfdc: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15bfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15bfe0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15bfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15bfe4: 0x1680ffe8  bnez        $s4, . + 4 + (-0x18 << 2)
    ctx->pc = 0x15BFE4u;
    {
        const bool branch_taken_0x15bfe4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFE4u;
        // 0x15bfe8: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bfe4) {
            ctx->pc = 0x15BF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bf88;
        }
    }
    ctx->pc = 0x15BFECu;
label_15bfec:
    // 0x15bfec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15bfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15bff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15bff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bff4: 0x32e400ff  andi        $a0, $s7, 0xFF
    ctx->pc = 0x15bff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x15bff8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x15bff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15bffc: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x15bffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x15c000: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15c000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15c004: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15c004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15c008: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x15c008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15c00c: 0x3c42025  or          $a0, $fp, $a0
    ctx->pc = 0x15c00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
    // 0x15c010: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x15c010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15c014: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15c014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15c018: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15c018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15c01c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15c01cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c020: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15c020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15c024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c028: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15c028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15c02c: 0x34038152  ori         $v1, $zero, 0x8152
    ctx->pc = 0x15c02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33106);
    // 0x15c030: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x15c030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x15c034: 0x34638009  ori         $v1, $v1, 0x8009
    ctx->pc = 0x15c034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32777);
    // 0x15c038: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15c038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15c03c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15c040: 0xfe2301e0  sd          $v1, 0x1E0($s1)
    ctx->pc = 0x15c040u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 480), GPR_U64(ctx, 3));
    // 0x15c044: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x15c044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15c048: 0xfe2201e8  sd          $v0, 0x1E8($s1)
    ctx->pc = 0x15c048u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 488), GPR_U64(ctx, 2));
    // 0x15c04c: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x15c04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15c050: 0xfe2401f0  sd          $a0, 0x1F0($s1)
    ctx->pc = 0x15c050u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 496), GPR_U64(ctx, 4));
    // 0x15c054: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x15c054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15c058: 0xfe2501f8  sd          $a1, 0x1F8($s1)
    ctx->pc = 0x15c058u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 504), GPR_U64(ctx, 5));
    // 0x15c05c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c060: 0x240a03ff  addiu       $t2, $zero, 0x3FF
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x15c064: 0x3c0c7000  lui         $t4, 0x7000
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)28672 << 16));
    // 0x15c068: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15c068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c06c: 0x3c0b1100  lui         $t3, 0x1100
    ctx->pc = 0x15c06cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4352 << 16));
    // 0x15c070: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15c074: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15c074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c078: 0x5193b  dsra        $v1, $a1, 4
    ctx->pc = 0x15c078u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> 4);
    // 0x15c07c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15c080: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15c080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15c084: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15c084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15c088: 0xfe290218  sd          $t1, 0x218($s1)
    ctx->pc = 0x15c088u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 536), GPR_U64(ctx, 9));
    // 0x15c08c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15c08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15c090: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x15c094: 0xfe240210  sd          $a0, 0x210($s1)
    ctx->pc = 0x15c094u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 4));
    // 0x15c098: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15c09c: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x15c09cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x15c0a0: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x15c0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15c0a4: 0x24c90032  addiu       $t1, $a2, 0x32
    ctx->pc = 0x15c0a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 50));
    // 0x15c0a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c0ac: 0x29250400  slti        $a1, $t1, 0x400
    ctx->pc = 0x15c0acu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15c0b0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c0b4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15c0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15c0b8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c0bc: 0xfe280238  sd          $t0, 0x238($s1)
    ctx->pc = 0x15c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 568), GPR_U64(ctx, 8));
    // 0x15c0c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c0c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15c0c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c0cc: 0x145480a  movz        $t1, $t2, $a1
    ctx->pc = 0x15c0ccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x15c0d0: 0xfe230230  sd          $v1, 0x230($s1)
    ctx->pc = 0x15c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 3));
    // 0x15c0d4: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15c0d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15c0dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15c0e0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15c0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15c0e4: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c0e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c0e8: 0xfe280258  sd          $t0, 0x258($s1)
    ctx->pc = 0x15c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 600), GPR_U64(ctx, 8));
    // 0x15c0ec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c0f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c0f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15c0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c0f8: 0xfe230250  sd          $v1, 0x250($s1)
    ctx->pc = 0x15c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 592), GPR_U64(ctx, 3));
    // 0x15c0fc: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x15c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15c100: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x15c100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15c104: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x15c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15c108: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15c108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15c10c: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c10cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c110: 0xfe280278  sd          $t0, 0x278($s1)
    ctx->pc = 0x15c110u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 632), GPR_U64(ctx, 8));
    // 0x15c114: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15c114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15c118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c11c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15c11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c120: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x15c120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
    // 0x15c124: 0xfe230270  sd          $v1, 0x270($s1)
    ctx->pc = 0x15c124u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 624), GPR_U64(ctx, 3));
    // 0x15c128: 0xae200204  sw          $zero, 0x204($s1)
    ctx->pc = 0x15c128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 0));
    // 0x15c12c: 0xfe270208  sd          $a3, 0x208($s1)
    ctx->pc = 0x15c12cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 520), GPR_U64(ctx, 7));
    // 0x15c130: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15c130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15c134: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x15c134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x15c138: 0xfe270228  sd          $a3, 0x228($s1)
    ctx->pc = 0x15c138u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 552), GPR_U64(ctx, 7));
    // 0x15c13c: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x15c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x15c140: 0xe6200244  swc1        $f0, 0x244($s1)
    ctx->pc = 0x15c140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x15c144: 0xfe270248  sd          $a3, 0x248($s1)
    ctx->pc = 0x15c144u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 584), GPR_U64(ctx, 7));
    // 0x15c148: 0xe6200260  swc1        $f0, 0x260($s1)
    ctx->pc = 0x15c148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x15c14c: 0xe6200264  swc1        $f0, 0x264($s1)
    ctx->pc = 0x15c14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    // 0x15c150: 0xfe270268  sd          $a3, 0x268($s1)
    ctx->pc = 0x15c150u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 616), GPR_U64(ctx, 7));
    // 0x15c154: 0xfe2c0280  sd          $t4, 0x280($s1)
    ctx->pc = 0x15c154u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 640), GPR_U64(ctx, 12));
    // 0x15c158: 0xae2b0288  sw          $t3, 0x288($s1)
    ctx->pc = 0x15c158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 11));
    // 0x15c15c: 0x12600084  beqz        $s3, . + 4 + (0x84 << 2)
    ctx->pc = 0x15C15Cu;
    {
        const bool branch_taken_0x15c15c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C15Cu;
        // 0x15c160: 0xae20028c  sw          $zero, 0x28C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c15c) {
            ctx->pc = 0x15C370u;
            goto label_15c370;
        }
    }
    ctx->pc = 0x15C164u;
    // 0x15c164: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15c168: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15c168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15c16c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15C16Cu;
    {
        const bool branch_taken_0x15c16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c16c) {
            ctx->pc = 0x15C170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C16Cu;
            // 0x15c170: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C1B8u;
            goto label_15c1b8;
        }
    }
    ctx->pc = 0x15C174u;
    // 0x15c174: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c178: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x15c178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x15c17c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c180: 0xe6210204  swc1        $f1, 0x204($s1)
    ctx->pc = 0x15c180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x15c184: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x15c184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c188: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15c18c: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c190: 0xe6210224  swc1        $f1, 0x224($s1)
    ctx->pc = 0x15c190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15c194: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c198: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x15c198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    // 0x15c19c: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x15c19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1a0: 0xe6210244  swc1        $f1, 0x244($s1)
    ctx->pc = 0x15c1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x15c1a4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x15c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1a8: 0xe6200260  swc1        $f0, 0x260($s1)
    ctx->pc = 0x15c1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x15c1ac: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x15c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1b0: 0xe6210264  swc1        $f1, 0x264($s1)
    ctx->pc = 0x15c1b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    // 0x15c1b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15c1b8:
    // 0x15c1b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x15c1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x15c1bc: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15C1BCu;
    {
        const bool branch_taken_0x15c1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c1bc) {
            ctx->pc = 0x15C1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C1BCu;
            // 0x15c1c0: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C208u;
            goto label_15c208;
        }
    }
    ctx->pc = 0x15C1C4u;
    // 0x15c1c4: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x15c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1c8: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x15c1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
    // 0x15c1cc: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x15c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1d0: 0xe6210204  swc1        $f1, 0x204($s1)
    ctx->pc = 0x15c1d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 516), bits); }
    // 0x15c1d4: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x15c1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1d8: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x15c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15c1dc: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x15c1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1e0: 0xe6210224  swc1        $f1, 0x224($s1)
    ctx->pc = 0x15c1e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x15c1e4: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x15c1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1e8: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x15c1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
    // 0x15c1ec: 0xc6610018  lwc1        $f1, 0x18($s3)
    ctx->pc = 0x15c1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c1f0: 0xe6210244  swc1        $f1, 0x244($s1)
    ctx->pc = 0x15c1f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 580), bits); }
    // 0x15c1f4: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x15c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c1f8: 0xe6200260  swc1        $f0, 0x260($s1)
    ctx->pc = 0x15c1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 608), bits); }
    // 0x15c1fc: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x15c1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c200: 0xe6210264  swc1        $f1, 0x264($s1)
    ctx->pc = 0x15c200u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 612), bits); }
    // 0x15c204: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15c208:
    // 0x15c208: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15c20c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15C20Cu;
    {
        const bool branch_taken_0x15c20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C20Cu;
        // 0x15c210: 0x8fa50044  lw          $a1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c20c) {
            ctx->pc = 0x15C2BCu;
            goto label_15c2bc;
        }
    }
    ctx->pc = 0x15C214u;
    // 0x15c214: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x15c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15c218: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15c218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c21c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c220: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c220u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15c224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c228: 0x0  nop
    ctx->pc = 0x15c228u;
    // NOP
    // 0x15c22c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15c230: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x15c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15c234: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15c234u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15c238: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x15c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15c23c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15c23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c240: 0x0  nop
    ctx->pc = 0x15c240u;
    // NOP
    // 0x15c244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15c248: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c24c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15c24cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15c250: 0xc6240220  lwc1        $f4, 0x220($s1)
    ctx->pc = 0x15c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15c254: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c258: 0xc6250200  lwc1        $f5, 0x200($s1)
    ctx->pc = 0x15c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15c25c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15c25cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15c260: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c264: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15c268: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x15c268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15c26c: 0xc6230204  lwc1        $f3, 0x204($s1)
    ctx->pc = 0x15c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15c270: 0xc6220224  lwc1        $f2, 0x224($s1)
    ctx->pc = 0x15c270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15c274: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x15c274u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x15c278: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15c27c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15c280: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15c280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15c284: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x15c284u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x15c288: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15c288u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15c28c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x15c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c290: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x15c290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15c294: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15c294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15c298: 0xfe240230  sd          $a0, 0x230($s1)
    ctx->pc = 0x15c298u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 560), GPR_U64(ctx, 4));
    // 0x15c29c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x15c29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c2a0: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x15c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c2a4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x15c2a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x15c2a8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15c2a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x15c2ac: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x15c2acu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x15c2b0: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x15c2b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15c2b4: 0xe6250220  swc1        $f5, 0x220($s1)
    ctx->pc = 0x15c2b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
    // 0x15c2b8: 0xe6230224  swc1        $f3, 0x224($s1)
    ctx->pc = 0x15c2b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
label_15c2bc:
    // 0x15c2bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15c2c0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x15c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x15c2c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15C2C4u;
    {
        const bool branch_taken_0x15c2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C2C4u;
        // 0x15c2c8: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c2c4) {
            ctx->pc = 0x15C33Cu;
            goto label_15c33c;
        }
    }
    ctx->pc = 0x15C2CCu;
    // 0x15c2cc: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15c2d0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15c2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15c2d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15c2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15c2d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x15c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x15c2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15c2e0: 0x0  nop
    ctx->pc = 0x15c2e0u;
    // NOP
    // 0x15c2e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15c2e8: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x15c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15c2ec: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x15c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15c2f0: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x15c2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15c2f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15c2f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15c2f8: 0x0  nop
    ctx->pc = 0x15c2f8u;
    // NOP
    // 0x15c2fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c2fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15c300: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x15c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15c304: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15c304u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15c308: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15c308u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15c30c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15c30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15c310: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15c314: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c314u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x15c318: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c318u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15c31c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15c31cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x15c320: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x15c320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x15c324: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x15c324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x15c328: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15c328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15c32c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15c330: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15c330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15c334: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15c334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15c338: 0xfe230210  sd          $v1, 0x210($s1)
    ctx->pc = 0x15c338u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 528), GPR_U64(ctx, 3));
label_15c33c:
    // 0x15c33c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x15c340: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x15c340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x15c344: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C344u;
    {
        const bool branch_taken_0x15c344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c344) {
            ctx->pc = 0x15C348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C344u;
            // 0x15c348: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C358u;
            goto label_15c358;
        }
    }
    ctx->pc = 0x15C34Cu;
    // 0x15c34c: 0xde620030  ld          $v0, 0x30($s3)
    ctx->pc = 0x15c34cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x15c350: 0xfe2201a0  sd          $v0, 0x1A0($s1)
    ctx->pc = 0x15c350u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 416), GPR_U64(ctx, 2));
    // 0x15c354: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x15c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15c358:
    // 0x15c358: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x15c35c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C35Cu;
    {
        const bool branch_taken_0x15c35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C35Cu;
        // 0x15c360: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c35c) {
            ctx->pc = 0x15C370u;
            goto label_15c370;
        }
    }
    ctx->pc = 0x15C364u;
    // 0x15c364: 0xde630040  ld          $v1, 0x40($s3)
    ctx->pc = 0x15c364u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x15c368: 0xfe2201b8  sd          $v0, 0x1B8($s1)
    ctx->pc = 0x15c368u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 440), GPR_U64(ctx, 2));
    // 0x15c36c: 0xfe2301b0  sd          $v1, 0x1B0($s1)
    ctx->pc = 0x15c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 432), GPR_U64(ctx, 3));
label_15c370:
    // 0x15c370: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x15c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15c374: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15C374u;
    {
        const bool branch_taken_0x15c374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C374u;
        // 0x15c378: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c374) {
            ctx->pc = 0x15C3C0u;
            goto label_15c3c0;
        }
    }
    ctx->pc = 0x15C37Cu;
    // 0x15c37c: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x15C37Cu;
    {
        const bool branch_taken_0x15c37c = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x15C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C37Cu;
        // 0x15c380: 0x8fa3008c  lw          $v1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c37c) {
            ctx->pc = 0x15C3D8u;
            goto label_15c3d8;
        }
    }
    ctx->pc = 0x15C384u;
    // 0x15c384: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15c384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c388: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C388u;
    {
        const bool branch_taken_0x15c388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C388u;
        // 0x15c38c: 0x8fa5008c  lw          $a1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c388) {
            ctx->pc = 0x15C3A4u;
            goto label_15c3a4;
        }
    }
    ctx->pc = 0x15C390u;
    // 0x15c390: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15c390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x15c394: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x15c394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c398: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15c398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15c39c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15C39Cu;
    {
        const bool branch_taken_0x15c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C39Cu;
        // 0x15c3a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c39c) {
            ctx->pc = 0x15C3ACu;
            goto label_15c3ac;
        }
    }
    ctx->pc = 0x15C3A4u;
label_15c3a4:
    // 0x15c3a4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x15c3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15c3a8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
label_15c3ac:
    // 0x15c3ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15c3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3b0: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15C3B0u;
    SET_GPR_U32(ctx, 31, 0x15C3B8u);
    ctx->pc = 0x15C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3B0u;
    // 0x15c3b4: 0x26280280  addiu       $t0, $s1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15C3B0u, 0x15C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3B8u;
label_15c3b8:
    // 0x15c3b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15C3B8u;
    {
        const bool branch_taken_0x15c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C3B8u;
        // 0x15c3bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c3b8) {
            ctx->pc = 0x15C3DCu;
            goto label_15c3dc;
        }
    }
    ctx->pc = 0x15C3C0u;
label_15c3c0:
    // 0x15c3c0: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x15c3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x15c3c4: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x15c3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15c3c8: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15c3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15c3cc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15c3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c3d0: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x15C3D0u;
    SET_GPR_U32(ctx, 31, 0x15C3D8u);
    ctx->pc = 0x15C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C3D0u;
    // 0x15c3d4: 0x26280280  addiu       $t0, $s1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x15C3D0u, 0x15C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C3D8u;
label_15c3d8:
    // 0x15c3d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15c3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c3dc:
    // 0x15c3dc: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x15c3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15c3e0: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x15c3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15c3e4: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x15c3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15c3e8: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x15c3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15c3ec: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x15c3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15c3f0: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x15c3f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15c3f4: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x15c3f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15c3f8: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x15c3f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15c3fc: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x15c3fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15c400: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15c400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15c404: 0x3e00008  jr          $ra
    ctx->pc = 0x15C404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C404u;
        // 0x15c408: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C40Cu;
    // 0x15c40c: 0x0  nop
    ctx->pc = 0x15c40cu;
    // NOP
    ctx->pc = 0x15c410u;
}

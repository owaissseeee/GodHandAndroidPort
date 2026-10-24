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

// Function: Gp_draw_polyG4
// Address: 0x15cd20 - 0x15d168
void Gp_draw_polyG4_0x15cd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_draw_polyG4_0x15cd20");
#endif

    switch (ctx->pc) {
        case 0x15cd68u: goto label_15cd68;
        case 0x15ce0cu: goto label_15ce0c;
        case 0x15ce18u: goto label_15ce18;
        case 0x15ce30u: goto label_15ce30;
        case 0x15ce68u: goto label_15ce68;
        case 0x15ce7cu: goto label_15ce7c;
        case 0x15d118u: goto label_15d118;
        case 0x15d134u: goto label_15d134;
        default: break;
    }

    ctx->pc = 0x15cd20u;

    // 0x15cd20: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x15cd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x15cd24: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x15cd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x15cd28: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x15cd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x15cd2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15cd2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd30: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x15cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x15cd34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x15cd34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd38: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x15cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x15cd3c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x15cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x15cd40: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x15cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x15cd44: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x15cd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x15cd48: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x15cd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x15cd4c: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x15cd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x15cd50: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x15cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x15cd54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15cd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15cd58: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x15cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x15cd5c: 0xafa70084  sw          $a3, 0x84($sp)
    ctx->pc = 0x15cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 7));
    // 0x15cd60: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x15CD60u;
    SET_GPR_U32(ctx, 31, 0x15CD68u);
    ctx->pc = 0x15CD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CD60u;
    // 0x15cd64: 0xafa80088  sw          $t0, 0x88($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x15CD60u, 0x15CD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CD68u;
label_15cd68:
    // 0x15cd68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15cd68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd6c: 0x124000f2  beqz        $s2, . + 4 + (0xF2 << 2)
    ctx->pc = 0x15CD6Cu;
    {
        const bool branch_taken_0x15cd6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CD6Cu;
        // 0x15cd70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd6c) {
            ctx->pc = 0x15D138u;
            goto label_15d138;
        }
    }
    ctx->pc = 0x15CD74u;
    // 0x15cd74: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x15cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x15cd78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x15cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x15cd7c: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x15cd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x15cd80: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15cd84: 0x3405c000  ori         $a1, $zero, 0xC000
    ctx->pc = 0x15cd84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x15cd88: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x15cd88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x15cd8c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x15cd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x15cd90: 0x24060eee  addiu       $a2, $zero, 0xEEE
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3822));
    // 0x15cd94: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x15cd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x15cd98: 0x2408003f  addiu       $t0, $zero, 0x3F
    ctx->pc = 0x15cd98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x15cd9c: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x15cd9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15cda0: 0x94e38  dsll        $t1, $t1, 24
    ctx->pc = 0x15cda0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x15cda4: 0x35290044  ori         $t1, $t1, 0x44
    ctx->pc = 0x15cda4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)68);
    // 0x15cda8: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x15cda8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15cdac: 0x3c0b0005  lui         $t3, 0x5
    ctx->pc = 0x15cdacu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)5 << 16));
    // 0x15cdb0: 0x240c0047  addiu       $t4, $zero, 0x47
    ctx->pc = 0x15cdb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15cdb4: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x15cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x15cdb8: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x15cdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x15cdbc: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x15cdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x15cdc0: 0xfe450010  sd          $a1, 0x10($s2)
    ctx->pc = 0x15cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 5));
    // 0x15cdc4: 0xfe460018  sd          $a2, 0x18($s2)
    ctx->pc = 0x15cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 24), GPR_U64(ctx, 6));
    // 0x15cdc8: 0xfe470020  sd          $a3, 0x20($s2)
    ctx->pc = 0x15cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 7));
    // 0x15cdcc: 0xfe480028  sd          $t0, 0x28($s2)
    ctx->pc = 0x15cdccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 40), GPR_U64(ctx, 8));
    // 0x15cdd0: 0xfe490030  sd          $t1, 0x30($s2)
    ctx->pc = 0x15cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 48), GPR_U64(ctx, 9));
    // 0x15cdd4: 0xfe4a0038  sd          $t2, 0x38($s2)
    ctx->pc = 0x15cdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 10));
    // 0x15cdd8: 0xfe4b0040  sd          $t3, 0x40($s2)
    ctx->pc = 0x15cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 11));
    // 0x15cddc: 0xfe4c0048  sd          $t4, 0x48($s2)
    ctx->pc = 0x15cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 72), GPR_U64(ctx, 12));
    // 0x15cde0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x15cde4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15cde8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15CDE8u;
    {
        const bool branch_taken_0x15cde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CDE8u;
        // 0x15cdec: 0x26a20004  addiu       $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cde8) {
            ctx->pc = 0x15CE44u;
            goto label_15ce44;
        }
    }
    ctx->pc = 0x15CDF0u;
    // 0x15cdf0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15cdf4: 0x26a30004  addiu       $v1, $s5, 0x4
    ctx->pc = 0x15cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x15cdf8: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x15cdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x15cdfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce00: 0xafa3008c  sw          $v1, 0x8C($sp)
    ctx->pc = 0x15ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 3));
    // 0x15ce04: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x15CE04u;
    SET_GPR_U32(ctx, 31, 0x15CE0Cu);
    ctx->pc = 0x15CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE04u;
    // 0x15ce08: 0x26110030  addiu       $s1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x15CE04u, 0x15CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE0Cu;
label_15ce0c:
    // 0x15ce0c: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x15ce0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ce10: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ce14: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_15ce18:
    // 0x15ce18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15ce18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce1c: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x15ce1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15ce20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15ce20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15ce24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce28: 0xc0c2ad2  jal         func_30AB48
    ctx->pc = 0x15CE28u;
    SET_GPR_U32(ctx, 31, 0x15CE30u);
    ctx->pc = 0x15CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE28u;
    // 0x15ce2c: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AB48u, 0x15CE28u, 0x15CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE30u;
label_15ce30:
    // 0x15ce30: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15ce30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x15ce34: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15CE34u;
    {
        const bool branch_taken_0x15ce34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE34u;
        // 0x15ce38: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce34) {
            ctx->pc = 0x15CE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce18;
        }
    }
    ctx->pc = 0x15CE3Cu;
    // 0x15ce3c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15CE3Cu;
    {
        const bool branch_taken_0x15ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce3c) {
            ctx->pc = 0x15CEC0u;
            goto label_15cec0;
        }
    }
    ctx->pc = 0x15CE44u;
label_15ce44:
    // 0x15ce44: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x15ce44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x15ce48: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x15ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x15ce4c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ce50: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x15ce50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ce54: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x15ce54u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x15ce58: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x15ce58u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x15ce5c: 0x24160800  addiu       $s6, $zero, 0x800
    ctx->pc = 0x15ce5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15ce60: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x15ce60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ce64: 0x0  nop
    ctx->pc = 0x15ce64u;
    // NOP
label_15ce68:
    // 0x15ce68: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x15ce6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ce6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce70: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x15ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15ce74: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x15CE74u;
    SET_GPR_U32(ctx, 31, 0x15CE7Cu);
    ctx->pc = 0x15CE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CE74u;
    // 0x15ce78: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x15CE74u, 0x15CE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CE7Cu;
label_15ce7c:
    // 0x15ce7c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x15ce7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x15ce80: 0x8fc21180  lw          $v0, 0x1180($fp)
    ctx->pc = 0x15ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4480)));
    // 0x15ce84: 0x8ee56b80  lw          $a1, 0x6B80($s7)
    ctx->pc = 0x15ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x15ce88: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x15ce8c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x15ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15ce90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ce90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ce94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15ce94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ce98: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15ce98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x15ce9c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15cea0: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x15cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x15cea4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15cea8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ceac: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x15ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x15ceb0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x15ceb4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x15ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x15ceb8: 0x1660ffeb  bnez        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15CEB8u;
    {
        const bool branch_taken_0x15ceb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEB8u;
        // 0x15cebc: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ceb8) {
            ctx->pc = 0x15CE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ce68;
        }
    }
    ctx->pc = 0x15CEC0u;
label_15cec0:
    // 0x15cec0: 0x34028132  ori         $v0, $zero, 0x8132
    ctx->pc = 0x15cec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33074);
    // 0x15cec4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x15cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x15cec8: 0x34428008  ori         $v0, $v0, 0x8008
    ctx->pc = 0x15cec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
    // 0x15cecc: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15ced0: 0xfe430058  sd          $v1, 0x58($s2)
    ctx->pc = 0x15ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 3));
    // 0x15ced4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15ced4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ced8: 0xfe420050  sd          $v0, 0x50($s2)
    ctx->pc = 0x15ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 2));
    // 0x15cedc: 0x240b000d  addiu       $t3, $zero, 0xD
    ctx->pc = 0x15cedcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15cee0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15cee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15cee4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15cee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15cee8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x15cee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ceec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15cef0: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x15cef4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15cef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x15cef8: 0x240a03ff  addiu       $t2, $zero, 0x3FF
    ctx->pc = 0x15cef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x15cefc: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x15cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15cf00: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x15cf04: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x15cf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cf08: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15cf08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cf0c: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x15cf10: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15cf10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15cf14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15cf14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cf18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15cf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cf1c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15cf1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15cf20: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15cf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15cf24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15cf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15cf28: 0xfe470068  sd          $a3, 0x68($s2)
    ctx->pc = 0x15cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 104), GPR_U64(ctx, 7));
    // 0x15cf2c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15cf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15cf30: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15cf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15cf34: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x15cf34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15cf38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15cf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15cf3c: 0x8fb5008c  lw          $s5, 0x8C($sp)
    ctx->pc = 0x15cf3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x15cf40: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x15cf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x15cf44: 0xfe420060  sd          $v0, 0x60($s2)
    ctx->pc = 0x15cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 2));
    // 0x15cf48: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x15cf48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15cf4c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x15cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15cf50: 0xfe470088  sd          $a3, 0x88($s2)
    ctx->pc = 0x15cf50u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 7));
    // 0x15cf54: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x15cf54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x15cf58: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x15cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15cf5c: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x15cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x15cf60: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x15cf64: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15cf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cf68: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15cf68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15cf6c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15cf6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cf70: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15cf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15cf74: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15cf74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15cf78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15cf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15cf7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cf80: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15cf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15cf84: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x15cf84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x15cf88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15cf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15cf8c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x15cf8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x15cf90: 0xfe430080  sd          $v1, 0x80($s2)
    ctx->pc = 0x15cf90u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 128), GPR_U64(ctx, 3));
    // 0x15cf94: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x15cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x15cf98: 0xfe4700a8  sd          $a3, 0xA8($s2)
    ctx->pc = 0x15cf98u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 168), GPR_U64(ctx, 7));
    // 0x15cf9c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x15cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x15cfa0: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x15cfa4: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x15cfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x15cfa8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15cfa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cfac: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15cfacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15cfb0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15cfb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cfb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15cfb8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15cfb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15cfbc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x15cfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x15cfc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15cfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15cfc4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x15cfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x15cfc8: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x15cfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x15cfcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15cfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15cfd0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x15cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x15cfd4: 0xfe4200a0  sd          $v0, 0xA0($s2)
    ctx->pc = 0x15cfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 2));
    // 0x15cfd8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x15cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15cfdc: 0xfe4700c8  sd          $a3, 0xC8($s2)
    ctx->pc = 0x15cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 200), GPR_U64(ctx, 7));
    // 0x15cfe0: 0x32202  srl         $a0, $v1, 8
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x15cfe4: 0x32c02  srl         $a1, $v1, 16
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x15cfe8: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x15cfec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15cfecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15cff0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x15cff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x15cff4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15cff4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15cff8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15cff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15cffc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x15cffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x15d000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d004: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d008: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x15d008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x15d00c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x15d00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x15d010: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d014: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x15d014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x15d018: 0xfe4300c0  sd          $v1, 0xC0($s2)
    ctx->pc = 0x15d018u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 192), GPR_U64(ctx, 3));
    // 0x15d01c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x15d01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d020: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x15d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x15d024: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d028: 0x5193b  dsra        $v1, $a1, 4
    ctx->pc = 0x15d028u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 5) >> 4);
    // 0x15d02c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15d02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15d030: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15d030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15d034: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x15d034u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x15d038: 0xfe4b0078  sd          $t3, 0x78($s2)
    ctx->pc = 0x15d038u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 11));
    // 0x15d03c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x15d03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15d040: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x15d044: 0xfe440070  sd          $a0, 0x70($s2)
    ctx->pc = 0x15d044u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 112), GPR_U64(ctx, 4));
    // 0x15d048: 0x1054023  subu        $t0, $t0, $a1
    ctx->pc = 0x15d048u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x15d04c: 0x31080fff  andi        $t0, $t0, 0xFFF
    ctx->pc = 0x15d04cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    // 0x15d050: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x15d050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x15d054: 0x25060032  addiu       $a2, $t0, 0x32
    ctx->pc = 0x15d054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 50));
    // 0x15d058: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15d058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15d05c: 0x28c50400  slti        $a1, $a2, 0x400
    ctx->pc = 0x15d05cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x15d060: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15d060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d064: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15d064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15d068: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d068u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d06c: 0xfe490098  sd          $t1, 0x98($s2)
    ctx->pc = 0x15d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 152), GPR_U64(ctx, 9));
    // 0x15d070: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d074: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d078: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d07c: 0xfe430090  sd          $v1, 0x90($s2)
    ctx->pc = 0x15d07cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 144), GPR_U64(ctx, 3));
    // 0x15d080: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x15d080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x15d084: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x15d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15d088: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x15d088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d08c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15d08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15d090: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d090u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d094: 0xfe4900b8  sd          $t1, 0xB8($s2)
    ctx->pc = 0x15d094u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 184), GPR_U64(ctx, 9));
    // 0x15d098: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d09c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d0a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d0a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d0a4: 0xfe4300b0  sd          $v1, 0xB0($s2)
    ctx->pc = 0x15d0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 176), GPR_U64(ctx, 3));
    // 0x15d0a8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x15d0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15d0ac: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x15d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x15d0b0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x15d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d0b4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15d0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x15d0b8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x15d0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x15d0bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15d0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15d0c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x15d0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x15d0c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15d0c8: 0xfe4300d0  sd          $v1, 0xD0($s2)
    ctx->pc = 0x15d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 208), GPR_U64(ctx, 3));
    // 0x15d0cc: 0xfe4900d8  sd          $t1, 0xD8($s2)
    ctx->pc = 0x15d0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 216), GPR_U64(ctx, 9));
    // 0x15d0d0: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x15d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15d0d4: 0x104c0005  beq         $v0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D0D4u;
    {
        const bool branch_taken_0x15d0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x15D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0D4u;
        // 0x15d0d8: 0x145300a  movz        $a2, $t2, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0d4) {
            ctx->pc = 0x15D0ECu;
            goto label_15d0ec;
        }
    }
    ctx->pc = 0x15D0DCu;
    // 0x15d0dc: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x15d0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15d0e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x15d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15d0e4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D0E4u;
    {
        const bool branch_taken_0x15d0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0E4u;
        // 0x15d0e8: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0e4) {
            ctx->pc = 0x15D0FCu;
            goto label_15d0fc;
        }
    }
    ctx->pc = 0x15D0ECu;
label_15d0ec:
    // 0x15d0ec: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x15d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x15d0f0: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x15d0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15d0f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D0F4u;
    {
        const bool branch_taken_0x15d0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0F4u;
        // 0x15d0f8: 0x8fa60088  lw          $a2, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0f4) {
            ctx->pc = 0x15D10Cu;
            goto label_15d10c;
        }
    }
    ctx->pc = 0x15D0FCu;
label_15d0fc:
    // 0x15d0fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D0FCu;
    {
        const bool branch_taken_0x15d0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D0FCu;
        // 0x15d100: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0fc) {
            ctx->pc = 0x15D120u;
            goto label_15d120;
        }
    }
    ctx->pc = 0x15D104u;
    // 0x15d104: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x15D104u;
    {
        const bool branch_taken_0x15d104 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x15D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D104u;
        // 0x15d108: 0x8fa50084  lw          $a1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d104) {
            ctx->pc = 0x15D134u;
            goto label_15d134;
        }
    }
    ctx->pc = 0x15D10Cu;
label_15d10c:
    // 0x15d10c: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15d110: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15D110u;
    SET_GPR_U32(ctx, 31, 0x15D118u);
    ctx->pc = 0x15D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D110u;
    // 0x15d114: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15D110u, 0x15D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D118u;
label_15d118:
    // 0x15d118: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15D118u;
    {
        const bool branch_taken_0x15d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D118u;
        // 0x15d11c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d118) {
            ctx->pc = 0x15D138u;
            goto label_15d138;
        }
    }
    ctx->pc = 0x15D120u;
label_15d120:
    // 0x15d120: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x15d120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15d124: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x15d124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15d128: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x15d12c: 0xc0c6980  jal         func_31A600
    ctx->pc = 0x15D12Cu;
    SET_GPR_U32(ctx, 31, 0x15D134u);
    ctx->pc = 0x15D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D12Cu;
    // 0x15d130: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A600u, 0x15D12Cu, 0x15D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D134u;
label_15d134:
    // 0x15d134: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15d134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d138:
    // 0x15d138: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x15d138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15d13c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x15d13cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15d140: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x15d140u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15d144: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x15d144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15d148: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x15d148u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15d14c: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x15d14cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15d150: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x15d150u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15d154: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x15d154u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15d158: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x15d158u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15d15c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15d15cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15d160: 0x3e00008  jr          $ra
    ctx->pc = 0x15D160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D160u;
        // 0x15d164: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D168u;
}

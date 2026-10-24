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

// Function: __floatdisf
// Address: 0x31dd30 - 0x31de10
void ps2___floatdisf_0x31dd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___floatdisf_0x31dd30");
#endif

    switch (ctx->pc) {
        case 0x31dd94u: goto label_31dd94;
        case 0x31dda0u: goto label_31dda0;
        case 0x31ddacu: goto label_31ddac;
        case 0x31ddccu: goto label_31ddcc;
        case 0x31dde4u: goto label_31dde4;
        case 0x31ddf0u: goto label_31ddf0;
        case 0x31ddf8u: goto label_31ddf8;
        default: break;
    }

    ctx->pc = 0x31dd30u;

    // 0x31dd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31dd34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31dd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31dd38: 0x31afa  dsrl        $v1, $v1, 11
    ctx->pc = 0x31dd38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 11);
    // 0x31dd3c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31dd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x31dd40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31dd44: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x31dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x31dd48: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x31dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x31dd4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31dd4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31dd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31dd54: 0x223182d  daddu       $v1, $s1, $v1
    ctx->pc = 0x31dd54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 3));
    // 0x31dd58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31dd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31dd5c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x31dd5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31dd60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31DD60u;
    {
        const bool branch_taken_0x31dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD60u;
        // 0x31dd64: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd60) {
            ctx->pc = 0x31DD80u;
            goto label_31dd80;
        }
    }
    ctx->pc = 0x31DD68u;
    // 0x31dd68: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x31dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x31dd6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31dd6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31dd70: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x31dd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x31dd74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x31DD74u;
    {
        const bool branch_taken_0x31dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD74u;
        // 0x31dd78: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd74) {
            ctx->pc = 0x31DD80u;
            goto label_31dd80;
        }
    }
    ctx->pc = 0x31DD7Cu;
    // 0x31dd7c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x31dd7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_31dd80:
    // 0x31dd80: 0x341081e0  ori         $s0, $zero, 0x81E0
    ctx->pc = 0x31dd80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x31dd84: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x31dd84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x31dd88: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x31dd88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x31dd8c: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x31DD8Cu;
    SET_GPR_U32(ctx, 31, 0x31DD94u);
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x31DD8Cu, 0x31DD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD94u;
label_31dd94:
    // 0x31dd94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31dd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd98: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x31DD98u;
    SET_GPR_U32(ctx, 31, 0x31DDA0u);
    ctx->pc = 0x31DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD98u;
    // 0x31dd9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x31DD98u, 0x31DDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDA0u;
label_31dda0:
    // 0x31dda0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dda4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x31DDA4u;
    SET_GPR_U32(ctx, 31, 0x31DDACu);
    ctx->pc = 0x31DDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DDA4u;
    // 0x31dda8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x31DDA4u, 0x31DDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDACu;
label_31ddac:
    // 0x31ddac: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x31ddacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x31ddb0: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x31ddb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x31ddb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31ddb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ddb8: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x31ddb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x31ddbc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x31ddbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x31ddc0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x31ddc0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x31ddc4: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x31DDC4u;
    SET_GPR_U32(ctx, 31, 0x31DDCCu);
    ctx->pc = 0x31DDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DDC4u;
    // 0x31ddc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x31DDC4u, 0x31DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDCCu;
label_31ddcc:
    // 0x31ddcc: 0x6030006  bgezl       $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31DDCCu;
    {
        const bool branch_taken_0x31ddcc = (GPR_S64(ctx, 16) >= 0);
        if (branch_taken_0x31ddcc) {
            ctx->pc = 0x31DDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DDCCu;
            // 0x31ddd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DDE8u;
            goto label_31dde8;
        }
    }
    ctx->pc = 0x31DDD4u;
    // 0x31ddd4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x31ddd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x31ddd8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x31ddd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x31dddc: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x31DDDCu;
    SET_GPR_U32(ctx, 31, 0x31DDE4u);
    ctx->pc = 0x31DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DDDCu;
    // 0x31dde0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x31DDDCu, 0x31DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDE4u;
label_31dde4:
    // 0x31dde4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31dde8:
    // 0x31dde8: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x31DDE8u;
    SET_GPR_U32(ctx, 31, 0x31DDF0u);
    ctx->pc = 0x31DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DDE8u;
    // 0x31ddec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x31DDE8u, 0x31DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDF0u;
label_31ddf0:
    // 0x31ddf0: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x31DDF0u;
    SET_GPR_U32(ctx, 31, 0x31DDF8u);
    ctx->pc = 0x31DDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DDF0u;
    // 0x31ddf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x31DDF0u, 0x31DDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DDF8u;
label_31ddf8:
    // 0x31ddf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31ddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ddfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31ddfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31de00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x31de00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31de04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31de04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31de08: 0x3e00008  jr          $ra
    ctx->pc = 0x31DE08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DE08u;
        // 0x31de0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DE08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DE10u;
}

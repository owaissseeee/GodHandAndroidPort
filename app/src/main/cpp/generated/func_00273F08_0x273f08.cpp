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

// Function: func_00273F08
// Address: 0x273f08 - 0x273f98
void func_00273F08_0x273f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00273F08_0x273f08");
#endif

    switch (ctx->pc) {
        case 0x273f5cu: goto label_273f5c;
        case 0x273f6cu: goto label_273f6c;
        default: break;
    }

    ctx->pc = 0x273f08u;

    // 0x273f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x273f0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x273f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x273f10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f18: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x273f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x273f1c: 0x38420251  xori        $v0, $v0, 0x251
    ctx->pc = 0x273f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)593);
    // 0x273f20: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x273F20u;
    {
        const bool branch_taken_0x273f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f20) {
            ctx->pc = 0x273F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x273F20u;
            // 0x273f24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x273F8Cu;
            goto label_273f8c;
        }
    }
    ctx->pc = 0x273F28u;
    // 0x273f28: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x273f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x273f2c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x273f30: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x273f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x273f34: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x273f38: 0x8e080304  lw          $t0, 0x304($s0)
    ctx->pc = 0x273f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x273f3c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x273f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x273f40: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x273f40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x273f44: 0xae020254  sw          $v0, 0x254($s0)
    ctx->pc = 0x273f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    // 0x273f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f4c: 0x8e050284  lw          $a1, 0x284($s0)
    ctx->pc = 0x273f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 644)));
    // 0x273f50: 0x8d060060  lw          $a2, 0x60($t0)
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x273f54: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x273F54u;
    SET_GPR_U32(ctx, 31, 0x273F5Cu);
    ctx->pc = 0x273F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F54u;
    // 0x273f58: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x273F54u, 0x273F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F5Cu;
label_273f5c:
    // 0x273f5c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x273f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x273f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x273f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f64: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x273F64u;
    SET_GPR_U32(ctx, 31, 0x273F6Cu);
    ctx->pc = 0x273F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F64u;
    // 0x273f68: 0x24a5cac8  addiu       $a1, $a1, -0x3538 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x273F64u, 0x273F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273F6Cu;
label_273f6c:
    // 0x273f6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x273f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273f70: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x273F70u;
    {
        const bool branch_taken_0x273f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F70u;
        // 0x273f74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f70) {
            ctx->pc = 0x273F8Cu;
            goto label_273f8c;
        }
    }
    ctx->pc = 0x273F78u;
    // 0x273f78: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x273f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x273f7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x273f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x273f80: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x273f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x273f84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x273f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x273f88: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x273f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_273f8c:
    // 0x273f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273f90: 0x3e00008  jr          $ra
    ctx->pc = 0x273F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273F98u;
}

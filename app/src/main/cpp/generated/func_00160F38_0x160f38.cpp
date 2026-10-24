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

// Function: func_00160F38
// Address: 0x160f38 - 0x160ff0
void func_00160F38_0x160f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00160F38_0x160f38");
#endif

    switch (ctx->pc) {
        case 0x160fa0u: goto label_160fa0;
        default: break;
    }

    ctx->pc = 0x160f38u;

    // 0x160f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x160f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x160f3c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x160f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x160f40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160f44: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x160f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x160f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x160f4c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x160f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x160f50: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x160f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x160f54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160F54u;
    {
        const bool branch_taken_0x160f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F54u;
        // 0x160f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f54) {
            ctx->pc = 0x160F74u;
            goto label_160f74;
        }
    }
    ctx->pc = 0x160F5Cu;
    // 0x160f5c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x160f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x160f60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x160F60u;
    {
        const bool branch_taken_0x160f60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x160F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F60u;
        // 0x160f64: 0x211ba  dsrl        $v0, $v0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f60) {
            ctx->pc = 0x160F74u;
            goto label_160f74;
        }
    }
    ctx->pc = 0x160F68u;
    // 0x160f68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x160f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x160f6c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x160F6Cu;
    {
        const bool branch_taken_0x160f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160f6c) {
            ctx->pc = 0x160F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160F6Cu;
            // 0x160f70: 0x86030052  lh          $v1, 0x52($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160F7Cu;
            goto label_160f7c;
        }
    }
    ctx->pc = 0x160F74u;
label_160f74:
    // 0x160f74: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x160F74u;
    {
        const bool branch_taken_0x160f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F74u;
        // 0x160f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f74) {
            ctx->pc = 0x160FE0u;
            goto label_160fe0;
        }
    }
    ctx->pc = 0x160F7Cu;
label_160f7c:
    // 0x160f7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x160F7Cu;
    {
        const bool branch_taken_0x160f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F7Cu;
        // 0x160f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f7c) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F84u;
    // 0x160f84: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160F84u;
    {
        const bool branch_taken_0x160f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x160F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F84u;
        // 0x160f88: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f84) {
            ctx->pc = 0x160FACu;
            goto label_160fac;
        }
    }
    ctx->pc = 0x160F8Cu;
    // 0x160f8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x160F8Cu;
    {
        const bool branch_taken_0x160f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F8Cu;
        // 0x160f90: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f8c) {
            ctx->pc = 0x160FCCu;
            goto label_160fcc;
        }
    }
    ctx->pc = 0x160F94u;
label_160f94:
    // 0x160f94: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x160f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x160f98: 0xc0afc9a  jal         func_2BF268
    ctx->pc = 0x160F98u;
    SET_GPR_U32(ctx, 31, 0x160FA0u);
    ctx->pc = 0x160F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F98u;
    // 0x160f9c: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF268u, 0x160F98u, 0x160FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FA0u;
label_160fa0:
    // 0x160fa0: 0x96030052  lhu         $v1, 0x52($s0)
    ctx->pc = 0x160fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 82)));
    // 0x160fa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x160fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x160fa8: 0xa6030052  sh          $v1, 0x52($s0)
    ctx->pc = 0x160fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 3));
label_160fac:
    // 0x160fac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x160fb0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x160fb4: 0x8c437a88  lw          $v1, 0x7A88($v0)
    ctx->pc = 0x160fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x160fb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160fbc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x160FBCu;
    {
        const bool branch_taken_0x160fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x160FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FBCu;
        // 0x160fc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fbc) {
            ctx->pc = 0x160FE0u;
            goto label_160fe0;
        }
    }
    ctx->pc = 0x160FC4u;
    // 0x160fc4: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x160fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x160fc8: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x160fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_160fcc:
    // 0x160fcc: 0x8ca37a24  lw          $v1, 0x7A24($a1)
    ctx->pc = 0x160fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31268)));
    // 0x160fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160fd4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x160fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x160fd8: 0xaca37a24  sw          $v1, 0x7A24($a1)
    ctx->pc = 0x160fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31268), GPR_U32(ctx, 3));
    // 0x160fdc: 0xa6000052  sh          $zero, 0x52($s0)
    ctx->pc = 0x160fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 0));
label_160fe0:
    // 0x160fe0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x160fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x160FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FE8u;
        // 0x160fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160FF0u;
}

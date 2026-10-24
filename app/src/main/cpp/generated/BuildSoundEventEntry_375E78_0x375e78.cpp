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

// Function: BuildSoundEventEntry_375E78
// Address: 0x375e78 - 0x375ef8
void BuildSoundEventEntry_375E78_0x375e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildSoundEventEntry_375E78_0x375e78");
#endif

    switch (ctx->pc) {
        case 0x375ea4u: goto label_375ea4;
        default: break;
    }

    ctx->pc = 0x375e78u;

    // 0x375e78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375e7c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x375e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x375e80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x375e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x375e84: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x375e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x375e88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x375e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x375e8c: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x375e8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x375e90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x375e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x375e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375e9c: 0xc0dda5e  jal         func_376978
    ctx->pc = 0x375E9Cu;
    SET_GPR_U32(ctx, 31, 0x375EA4u);
    ctx->pc = 0x375EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375E9Cu;
    // 0x375ea0: 0x59403  sra         $s2, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376978u, 0x375E9Cu, 0x375EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375EA4u;
label_375ea4:
    // 0x375ea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x375ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ea8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x375EA8u;
    {
        const bool branch_taken_0x375ea8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x375EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375EA8u;
        // 0x375eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ea8) {
            ctx->pc = 0x375EDCu;
            goto label_375edc;
        }
    }
    ctx->pc = 0x375EB0u;
    // 0x375eb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x375eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x375eb4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x375eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x375eb8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x375eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x375ebc: 0xa4b00026  sh          $s0, 0x26($a1)
    ctx->pc = 0x375ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 38), (uint16_t)GPR_U32(ctx, 16));
    // 0x375ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375ec4: 0xacb10004  sw          $s1, 0x4($a1)
    ctx->pc = 0x375ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 17));
    // 0x375ec8: 0xa0a30008  sb          $v1, 0x8($a1)
    ctx->pc = 0x375ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x375ecc: 0xa0a40009  sb          $a0, 0x9($a1)
    ctx->pc = 0x375eccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x375ed0: 0xa4b20022  sh          $s2, 0x22($a1)
    ctx->pc = 0x375ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 34), (uint16_t)GPR_U32(ctx, 18));
    // 0x375ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x375ED4u;
    {
        const bool branch_taken_0x375ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375ED4u;
        // 0x375ed8: 0xa4a0000a  sh          $zero, 0xA($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ed4) {
            ctx->pc = 0x375EE0u;
            goto label_375ee0;
        }
    }
    ctx->pc = 0x375EDCu;
label_375edc:
    // 0x375edc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x375edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_375ee0:
    // 0x375ee0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x375ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x375ee4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x375ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375ee8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x375ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x375EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375EF0u;
        // 0x375ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375EF8u;
}

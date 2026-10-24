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

// Function: ForwardInitObj28B0Buffer_313900
// Address: 0x313900 - 0x313970
void ForwardInitObj28B0Buffer_313900_0x313900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObj28B0Buffer_313900_0x313900");
#endif

    switch (ctx->pc) {
        case 0x313934u: goto label_313934;
        case 0x31394cu: goto label_31394c;
        case 0x313954u: goto label_313954;
        default: break;
    }

    ctx->pc = 0x313900u;

    // 0x313900: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313904: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313908: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313908u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31390c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x31390cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313914: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313918: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313918u;
    {
        const bool branch_taken_0x313918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313918u;
        // 0x31391c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313918) {
            ctx->pc = 0x31395Cu;
            goto label_31395c;
        }
    }
    ctx->pc = 0x313920u;
    // 0x313920: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313924: 0x24041660  addiu       $a0, $zero, 0x1660
    ctx->pc = 0x313924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5728));
    // 0x313928: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x313928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31392c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31392Cu;
    SET_GPR_U32(ctx, 31, 0x313934u);
    ctx->pc = 0x313930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31392Cu;
    // 0x313930: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31392Cu, 0x313934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313934u;
label_313934:
    // 0x313934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313938: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313938u;
    {
        const bool branch_taken_0x313938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313938u;
        // 0x31393c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313938) {
            ctx->pc = 0x31395Cu;
            goto label_31395c;
        }
    }
    ctx->pc = 0x313940u;
    // 0x313940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313944: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313944u;
    SET_GPR_U32(ctx, 31, 0x31394Cu);
    ctx->pc = 0x313948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313944u;
    // 0x313948: 0x24061660  addiu       $a2, $zero, 0x1660 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313944u, 0x31394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31394Cu;
label_31394c:
    // 0x31394c: 0xc0a2c3c  jal         func_28B0F0
    ctx->pc = 0x31394Cu;
    SET_GPR_U32(ctx, 31, 0x313954u);
    ctx->pc = 0x313950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31394Cu;
    // 0x313950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B0F0u, 0x31394Cu, 0x313954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313954u;
label_313954:
    // 0x313954: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313954u;
    {
        const bool branch_taken_0x313954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313954u;
        // 0x313958: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313954) {
            ctx->pc = 0x313964u;
            goto label_313964;
        }
    }
    ctx->pc = 0x31395Cu;
label_31395c:
    // 0x31395c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31395cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313960: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313964:
    // 0x313964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313968: 0x3e00008  jr          $ra
    ctx->pc = 0x313968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313968u;
        // 0x31396c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313970u;
}

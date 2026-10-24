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

// Function: func_0035E238
// Address: 0x35e238 - 0x35e2a8
void func_0035E238_0x35e238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E238_0x35e238");
#endif

    switch (ctx->pc) {
        case 0x35e260u: goto label_35e260;
        case 0x35e274u: goto label_35e274;
        default: break;
    }

    ctx->pc = 0x35e238u;

    // 0x35e238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e23c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e240: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e248: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e248u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e24c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e250: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e254: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e258: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E258u;
    SET_GPR_U32(ctx, 31, 0x35E260u);
    ctx->pc = 0x35E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E258u;
    // 0x35e25c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E258u, 0x35E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E260u;
label_35e260:
    // 0x35e260: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e264: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E264u;
    {
        const bool branch_taken_0x35e264 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E264u;
        // 0x35e268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e264) {
            ctx->pc = 0x35E28Cu;
            goto label_35e28c;
        }
    }
    ctx->pc = 0x35E26Cu;
    // 0x35e26c: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35E26Cu;
    SET_GPR_U32(ctx, 31, 0x35E274u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35E26Cu, 0x35E274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E274u;
label_35e274:
    // 0x35e274: 0x240300c0  addiu       $v1, $zero, 0xC0
    ctx->pc = 0x35e274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35e278: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35E278u;
    {
        const bool branch_taken_0x35e278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E278u;
        // 0x35e27c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e278) {
            ctx->pc = 0x35E28Cu;
            goto label_35e28c;
        }
    }
    ctx->pc = 0x35E280u;
    // 0x35e280: 0x9223001b  lbu         $v1, 0x1B($s1)
    ctx->pc = 0x35e280u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 27)));
    // 0x35e284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e288: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e288u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e28c:
    // 0x35e28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e290: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e294: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e298: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e29c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E29Cu;
        // 0x35e2a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E2A4u;
    // 0x35e2a4: 0x0  nop
    ctx->pc = 0x35e2a4u;
    // NOP
    ctx->pc = 0x35e2a8u;
}

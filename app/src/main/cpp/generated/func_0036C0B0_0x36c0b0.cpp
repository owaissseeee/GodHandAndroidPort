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

// Function: func_0036C0B0
// Address: 0x36c0b0 - 0x36c170
void func_0036C0B0_0x36c0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C0B0_0x36c0b0");
#endif

    switch (ctx->pc) {
        case 0x36c118u: goto label_36c118;
        case 0x36c124u: goto label_36c124;
        case 0x36c13cu: goto label_36c13c;
        default: break;
    }

    ctx->pc = 0x36c0b0u;

    // 0x36c0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36c0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36c0b4: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x36c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x36c0b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36c0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36c0bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36c0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c0c0: 0x1230c0  sll         $a2, $s2, 3
    ctx->pc = 0x36c0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x36c0c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c0c8: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x36c0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36c0cc: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x36c0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x36c0d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36c0d4: 0x24b3003f  addiu       $s3, $a1, 0x3F
    ctx->pc = 0x36c0d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x36c0d8: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x36c0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x36c0dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x36c0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36c0e0: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x36c0e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x36c0e4: 0xd23023  subu        $a2, $a2, $s2
    ctx->pc = 0x36c0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x36c0e8: 0x118980  sll         $s1, $s1, 6
    ctx->pc = 0x36c0e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x36c0ec: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x36c0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x36c0f0: 0x2718821  addu        $s1, $s3, $s1
    ctx->pc = 0x36c0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x36c0f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36c0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36c0f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36c0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c0fc: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x36c0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x36c100: 0x26340420  addiu       $s4, $s1, 0x420
    ctx->pc = 0x36c100u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
    // 0x36c104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36c104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c108: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c10c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x36c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x36c110: 0xc0d9b14  jal         func_366C50
    ctx->pc = 0x36C110u;
    SET_GPR_U32(ctx, 31, 0x36C118u);
    ctx->pc = 0x36C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C110u;
    // 0x36c114: 0x3c100076  lui         $s0, 0x76 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366C50u, 0x36C110u, 0x36C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C118u;
label_36c118:
    // 0x36c118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c11c: 0xc0db10e  jal         func_36C438
    ctx->pc = 0x36C11Cu;
    SET_GPR_U32(ctx, 31, 0x36C124u);
    ctx->pc = 0x36C120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C11Cu;
    // 0x36c120: 0x24051be0  addiu       $a1, $zero, 0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C438u, 0x36C11Cu, 0x36C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C124u;
label_36c124:
    // 0x36c124: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x36c124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x36c128: 0x26106ce8  addiu       $s0, $s0, 0x6CE8
    ctx->pc = 0x36c128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27880));
    // 0x36c12c: 0x24a5a420  addiu       $a1, $a1, -0x5BE0
    ctx->pc = 0x36c12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943776));
    // 0x36c130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c134: 0xc0db5ac  jal         func_36D6B0
    ctx->pc = 0x36C134u;
    SET_GPR_U32(ctx, 31, 0x36C13Cu);
    ctx->pc = 0x36C138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C134u;
    // 0x36c138: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D6B0u, 0x36C134u, 0x36C13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C13Cu;
label_36c13c:
    // 0x36c13c: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x36c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x36c140: 0xae130058  sw          $s3, 0x58($s0)
    ctx->pc = 0x36c140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
    // 0x36c144: 0xae140050  sw          $s4, 0x50($s0)
    ctx->pc = 0x36c144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 20));
    // 0x36c148: 0xae120054  sw          $s2, 0x54($s0)
    ctx->pc = 0x36c148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 18));
    // 0x36c14c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36c154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c158: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36c158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36c15c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36c15cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c160: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x36c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36c164: 0x3e00008  jr          $ra
    ctx->pc = 0x36C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C164u;
        // 0x36c168: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C16Cu;
    // 0x36c16c: 0x0  nop
    ctx->pc = 0x36c16cu;
    // NOP
    ctx->pc = 0x36c170u;
}

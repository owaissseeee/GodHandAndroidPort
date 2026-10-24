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

// Function: func_00325988
// Address: 0x325988 - 0x325a58
void func_00325988_0x325988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325988_0x325988");
#endif

    switch (ctx->pc) {
        case 0x3259d8u: goto label_3259d8;
        case 0x3259e8u: goto label_3259e8;
        case 0x3259f0u: goto label_3259f0;
        case 0x3259f8u: goto label_3259f8;
        default: break;
    }

    ctx->pc = 0x325988u;

    // 0x325988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32598c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x32598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x325990: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x325990u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
    // 0x325994: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325998: 0x26c38180  addiu       $v1, $s6, -0x7E80
    ctx->pc = 0x325998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934912));
    // 0x32599c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3259a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3259a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3259a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3259a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3259a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3259a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3259ac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3259acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3259b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3259b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3259b4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3259b4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3C8180u));
    // 0x3259b8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3259B8u;
    {
        const bool branch_taken_0x3259b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3259BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259B8u;
        // 0x3259bc: 0x3c15003d  lui         $s5, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259b8) {
            ctx->pc = 0x325A10u;
            goto label_325a10;
        }
    }
    ctx->pc = 0x3259C0u;
    // 0x3259c0: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x3259c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x3259c4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3259c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3259c8: 0x26b28178  addiu       $s2, $s5, -0x7E88
    ctx->pc = 0x3259c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934904));
    // 0x3259cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3259ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3259d0: 0x26908140  addiu       $s0, $s4, -0x7EC0
    ctx->pc = 0x3259d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934848));
    // 0x3259d4: 0x0  nop
    ctx->pc = 0x3259d4u;
    // NOP
label_3259d8:
    // 0x3259d8: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x3259d8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x3259dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3259dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3259e0: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x3259E0u;
    SET_GPR_U32(ctx, 31, 0x3259E8u);
    ctx->pc = 0x3259E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259E0u;
    // 0x3259e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x3259E0u, 0x3259E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259E8u;
label_3259e8:
    // 0x3259e8: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x3259E8u;
    SET_GPR_U32(ctx, 31, 0x3259F0u);
    ctx->pc = 0x3259ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259E8u;
    // 0x3259ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x3259E8u, 0x3259F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259F0u;
label_3259f0:
    // 0x3259f0: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x3259F0u;
    SET_GPR_U32(ctx, 31, 0x3259F8u);
    ctx->pc = 0x3259F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3259F0u;
    // 0x3259f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x3259F0u, 0x3259F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3259F8u;
label_3259f8:
    // 0x3259f8: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x3259f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3259fc: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3259FCu;
    {
        const bool branch_taken_0x3259fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3259FCu;
        // 0x325a00: 0x26c28180  addiu       $v0, $s6, -0x7E80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3259fc) {
            ctx->pc = 0x3259D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3259d8;
        }
    }
    ctx->pc = 0x325A04u;
    // 0x325a04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x325A04u;
    {
        const bool branch_taken_0x325a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A04u;
        // 0x325a08: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a04) {
            ctx->pc = 0x325A1Cu;
            goto label_325a1c;
        }
    }
    ctx->pc = 0x325A0Cu;
    // 0x325a0c: 0x0  nop
    ctx->pc = 0x325a0cu;
    // NOP
label_325a10:
    // 0x325a10: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x325a10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x325a14: 0x26c28180  addiu       $v0, $s6, -0x7E80
    ctx->pc = 0x325a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934912));
    // 0x325a18: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x325a18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_325a1c:
    // 0x325a1c: 0x26a38178  addiu       $v1, $s5, -0x7E88
    ctx->pc = 0x325a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934904));
    // 0x325a20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x325a20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325a24: 0x26848140  addiu       $a0, $s4, -0x7EC0
    ctx->pc = 0x325a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934848));
    // 0x325a28: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325a28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325a38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325a3c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x325a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325a40: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x325a40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x325a44: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x325a44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x325a48: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x325a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x325a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x325A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A4Cu;
        // 0x325a50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325A54u;
    // 0x325a54: 0x0  nop
    ctx->pc = 0x325a54u;
    // NOP
    ctx->pc = 0x325a58u;
}

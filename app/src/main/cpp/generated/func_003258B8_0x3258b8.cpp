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

// Function: func_003258B8
// Address: 0x3258b8 - 0x325988
void func_003258B8_0x3258b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003258B8_0x3258b8");
#endif

    switch (ctx->pc) {
        case 0x325908u: goto label_325908;
        case 0x325918u: goto label_325918;
        case 0x325920u: goto label_325920;
        case 0x325928u: goto label_325928;
        default: break;
    }

    ctx->pc = 0x3258b8u;

    // 0x3258b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3258b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3258bc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3258bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3258c0: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x3258c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
    // 0x3258c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3258c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3258c8: 0x26c381a0  addiu       $v1, $s6, -0x7E60
    ctx->pc = 0x3258c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934944));
    // 0x3258cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3258ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3258d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3258d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3258d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3258d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3258d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3258d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3258dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3258dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3258e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3258e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3258e4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3258e4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3C81A0u));
    // 0x3258e8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3258E8u;
    {
        const bool branch_taken_0x3258e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3258ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3258E8u;
        // 0x3258ec: 0x3c15003d  lui         $s5, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3258e8) {
            ctx->pc = 0x325940u;
            goto label_325940;
        }
    }
    ctx->pc = 0x3258F0u;
    // 0x3258f0: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x3258f0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x3258f4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3258f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3258f8: 0x26b28198  addiu       $s2, $s5, -0x7E68
    ctx->pc = 0x3258f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934936));
    // 0x3258fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3258fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325900: 0x2690814c  addiu       $s0, $s4, -0x7EB4
    ctx->pc = 0x325900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934860));
    // 0x325904: 0x0  nop
    ctx->pc = 0x325904u;
    // NOP
label_325908:
    // 0x325908: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x325908u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x32590c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32590cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325910: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x325910u;
    SET_GPR_U32(ctx, 31, 0x325918u);
    ctx->pc = 0x325914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325910u;
    // 0x325914: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x325910u, 0x325918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325918u;
label_325918:
    // 0x325918: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x325918u;
    SET_GPR_U32(ctx, 31, 0x325920u);
    ctx->pc = 0x32591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325918u;
    // 0x32591c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x325918u, 0x325920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325920u;
label_325920:
    // 0x325920: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x325920u;
    SET_GPR_U32(ctx, 31, 0x325928u);
    ctx->pc = 0x325924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325920u;
    // 0x325924: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x325920u, 0x325928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325928u;
label_325928:
    // 0x325928: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x325928u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32592c: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x32592Cu;
    {
        const bool branch_taken_0x32592c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32592Cu;
        // 0x325930: 0x26c281a0  addiu       $v0, $s6, -0x7E60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32592c) {
            ctx->pc = 0x325908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325908;
        }
    }
    ctx->pc = 0x325934u;
    // 0x325934: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x325934u;
    {
        const bool branch_taken_0x325934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325934u;
        // 0x325938: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325934) {
            ctx->pc = 0x32594Cu;
            goto label_32594c;
        }
    }
    ctx->pc = 0x32593Cu;
    // 0x32593c: 0x0  nop
    ctx->pc = 0x32593cu;
    // NOP
label_325940:
    // 0x325940: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x325940u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x325944: 0x26c281a0  addiu       $v0, $s6, -0x7E60
    ctx->pc = 0x325944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934944));
    // 0x325948: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x325948u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_32594c:
    // 0x32594c: 0x26a38198  addiu       $v1, $s5, -0x7E68
    ctx->pc = 0x32594cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934936));
    // 0x325950: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x325950u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x325954: 0x2684814c  addiu       $a0, $s4, -0x7EB4
    ctx->pc = 0x325954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294934860));
    // 0x325958: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325958u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32595c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32595cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32596c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x32596cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325970: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x325970u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x325974: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x325974u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x325978: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x325978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32597c: 0x3e00008  jr          $ra
    ctx->pc = 0x32597Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32597Cu;
        // 0x325980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32597Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325984u;
    // 0x325984: 0x0  nop
    ctx->pc = 0x325984u;
    // NOP
    ctx->pc = 0x325988u;
}

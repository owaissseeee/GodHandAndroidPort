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

// Function: func_00329C68
// Address: 0x329c68 - 0x329d38
void func_00329C68_0x329c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329C68_0x329c68");
#endif

    switch (ctx->pc) {
        case 0x329cb0u: goto label_329cb0;
        case 0x329cc0u: goto label_329cc0;
        case 0x329cd0u: goto label_329cd0;
        case 0x329cdcu: goto label_329cdc;
        case 0x329ce4u: goto label_329ce4;
        case 0x329cecu: goto label_329cec;
        case 0x329d04u: goto label_329d04;
        case 0x329d0cu: goto label_329d0c;
        default: break;
    }

    ctx->pc = 0x329c68u;

    // 0x329c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x329c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x329c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329c78: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x329c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x329c80: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x329c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x329c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x329c88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x329c88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x329c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x329c90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x329c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329c94: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x329c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x329c98: 0x8605003e  lh          $a1, 0x3E($s0)
    ctx->pc = 0x329c98u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x329c9c: 0x8606003c  lh          $a2, 0x3C($s0)
    ctx->pc = 0x329c9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x329ca0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x329ca4: 0x52ac0  sll         $a1, $a1, 11
    ctx->pc = 0x329ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x329ca8: 0xc0ca320  jal         func_328C80
    ctx->pc = 0x329CA8u;
    SET_GPR_U32(ctx, 31, 0x329CB0u);
    ctx->pc = 0x329CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CA8u;
    // 0x329cac: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328C80u, 0x329CA8u, 0x329CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CB0u;
label_329cb0:
    // 0x329cb0: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x329cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x329cb4: 0x8c651404  lw          $a1, 0x1404($v1)
    ctx->pc = 0x329cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3D1404u));
    // 0x329cb8: 0xc0ca112  jal         func_328448
    ctx->pc = 0x329CB8u;
    SET_GPR_U32(ctx, 31, 0x329CC0u);
    ctx->pc = 0x329CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CB8u;
    // 0x329cbc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328448u, 0x329CB8u, 0x329CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CC0u;
label_329cc0:
    // 0x329cc0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x329cc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x329cc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cc8: 0xc0ca0fa  jal         func_3283E8
    ctx->pc = 0x329CC8u;
    SET_GPR_U32(ctx, 31, 0x329CD0u);
    ctx->pc = 0x329CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CC8u;
    // 0x329ccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3283E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3283E8u, 0x329CC8u, 0x329CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CD0u;
label_329cd0:
    // 0x329cd0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x329cd4: 0xc0ca036  jal         func_3280D8
    ctx->pc = 0x329CD4u;
    SET_GPR_U32(ctx, 31, 0x329CDCu);
    ctx->pc = 0x329CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CD4u;
    // 0x329cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3280D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3280D8u, 0x329CD4u, 0x329CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CDCu;
label_329cdc:
    // 0x329cdc: 0xc0ca0b4  jal         func_3282D0
    ctx->pc = 0x329CDCu;
    SET_GPR_U32(ctx, 31, 0x329CE4u);
    ctx->pc = 0x329CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CDCu;
    // 0x329ce0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282D0u, 0x329CDCu, 0x329CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CE4u;
label_329ce4:
    // 0x329ce4: 0xc0c9fea  jal         func_327FA8
    ctx->pc = 0x329CE4u;
    SET_GPR_U32(ctx, 31, 0x329CECu);
    ctx->pc = 0x329CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CE4u;
    // 0x329ce8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327FA8u, 0x329CE4u, 0x329CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329CECu;
label_329cec:
    // 0x329cec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x329cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x329cf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x329cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cf4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x329cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cf8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x329cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329cfc: 0xc0c9f86  jal         func_327E18
    ctx->pc = 0x329CFCu;
    SET_GPR_U32(ctx, 31, 0x329D04u);
    ctx->pc = 0x329D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329CFCu;
    // 0x329d00: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327E18u, 0x329CFCu, 0x329D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D04u;
label_329d04:
    // 0x329d04: 0xc0ca072  jal         func_3281C8
    ctx->pc = 0x329D04u;
    SET_GPR_U32(ctx, 31, 0x329D0Cu);
    ctx->pc = 0x329D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D04u;
    // 0x329d08: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x329D04u, 0x329D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329D0Cu;
label_329d0c:
    // 0x329d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x329d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329d10: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x329d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x329d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329d18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329d18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329d1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329d1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329d20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x329d20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x329d24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x329d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329d28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x329d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x329d2c: 0x80ca6d8  j           func_329B60
    ctx->pc = 0x329D2Cu;
    ctx->pc = 0x329D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329D2Cu;
    // 0x329d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329B60u, 0x329D2Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x329D34u;
    // 0x329d34: 0x0  nop
    ctx->pc = 0x329d34u;
    // NOP
    ctx->pc = 0x329d38u;
}

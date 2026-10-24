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

// Function: func_00324F08
// Address: 0x324f08 - 0x325010
void func_00324F08_0x324f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324F08_0x324f08");
#endif

    switch (ctx->pc) {
        case 0x324f70u: goto label_324f70;
        case 0x324f84u: goto label_324f84;
        case 0x324f98u: goto label_324f98;
        case 0x324fa4u: goto label_324fa4;
        case 0x324fb4u: goto label_324fb4;
        case 0x324fbcu: goto label_324fbc;
        case 0x324fc4u: goto label_324fc4;
        case 0x324fccu: goto label_324fcc;
        default: break;
    }

    ctx->pc = 0x324f08u;

    // 0x324f08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324f0c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324f14: 0x24478178  addiu       $a3, $v0, -0x7E88
    ctx->pc = 0x324f14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934904));
    // 0x324f18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324f1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324f20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x324f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x324f24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x324f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x324f28: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x324f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x324f2c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x324f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x324f30: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x324f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x324f34: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x324f34u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3C8178u));
    // 0x324f38: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x324F38u;
    {
        const bool branch_taken_0x324f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324F38u;
        // 0x324f3c: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324f38) {
            ctx->pc = 0x324FD8u;
            goto label_324fd8;
        }
    }
    ctx->pc = 0x324F40u;
    // 0x324f40: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324f44: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x324f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x324f48: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x324f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x324f4c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x324f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x324f50: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x324f50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x324f54: 0x24538110  addiu       $s3, $v0, -0x7EF0
    ctx->pc = 0x324f54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x324f58: 0x2476814c  addiu       $s6, $v1, -0x7EB4
    ctx->pc = 0x324f58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934860));
    // 0x324f5c: 0x249281c8  addiu       $s2, $a0, -0x7E38
    ctx->pc = 0x324f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934984));
    // 0x324f60: 0x24b58150  addiu       $s5, $a1, -0x7EB0
    ctx->pc = 0x324f60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934864));
    // 0x324f64: 0x24d180e8  addiu       $s1, $a2, -0x7F18
    ctx->pc = 0x324f64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934760));
    // 0x324f68: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x324f68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324f6c: 0x0  nop
    ctx->pc = 0x324f6cu;
    // NOP
label_324f70:
    // 0x324f70: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x324f70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x324f74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x324f74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x324f78: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x324f78u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
    // 0x324f7c: 0xc0c94d8  jal         func_325360
    ctx->pc = 0x324F7Cu;
    SET_GPR_U32(ctx, 31, 0x324F84u);
    ctx->pc = 0x324F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F7Cu;
    // 0x324f80: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325360u, 0x324F7Cu, 0x324F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F84u;
label_324f84:
    // 0x324f84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x324f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x324f88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x324F88u;
    {
        const bool branch_taken_0x324f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x324f88) {
            ctx->pc = 0x324F98u;
            goto label_324f98;
        }
    }
    ctx->pc = 0x324F90u;
    // 0x324f90: 0xc0c97f6  jal         func_325FD8
    ctx->pc = 0x324F90u;
    SET_GPR_U32(ctx, 31, 0x324F98u);
    ctx->pc = 0x325FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325FD8u, 0x324F90u, 0x324F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324F98u;
label_324f98:
    // 0x324f98: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x324f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x324f9c: 0xc0c9584  jal         func_325610
    ctx->pc = 0x324F9Cu;
    SET_GPR_U32(ctx, 31, 0x324FA4u);
    ctx->pc = 0x324FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324F9Cu;
    // 0x324fa0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325610u, 0x324F9Cu, 0x324FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FA4u;
label_324fa4:
    // 0x324fa4: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x324FA4u;
    {
        const bool branch_taken_0x324fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x324fa4) {
            ctx->pc = 0x324FB4u;
            goto label_324fb4;
        }
    }
    ctx->pc = 0x324FACu;
    // 0x324fac: 0xc0c94d8  jal         func_325360
    ctx->pc = 0x324FACu;
    SET_GPR_U32(ctx, 31, 0x324FB4u);
    ctx->pc = 0x324FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FACu;
    // 0x324fb0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325360u, 0x324FACu, 0x324FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FB4u;
label_324fb4:
    // 0x324fb4: 0xc0c979e  jal         func_325E78
    ctx->pc = 0x324FB4u;
    SET_GPR_U32(ctx, 31, 0x324FBCu);
    ctx->pc = 0x325E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325E78u, 0x324FB4u, 0x324FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FBCu;
label_324fbc:
    // 0x324fbc: 0xc0cef52  jal         func_33BD48
    ctx->pc = 0x324FBCu;
    SET_GPR_U32(ctx, 31, 0x324FC4u);
    ctx->pc = 0x324FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FBCu;
    // 0x324fc0: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD48u, 0x324FBCu, 0x324FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FC4u;
label_324fc4:
    // 0x324fc4: 0xc0c94b8  jal         func_3252E0
    ctx->pc = 0x324FC4u;
    SET_GPR_U32(ctx, 31, 0x324FCCu);
    ctx->pc = 0x324FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324FC4u;
    // 0x324fc8: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252E0u, 0x324FC4u, 0x324FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324FCCu;
label_324fcc:
    // 0x324fcc: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x324fccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x324fd0: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x324FD0u;
    {
        const bool branch_taken_0x324fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324FD0u;
        // 0x324fd4: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324fd0) {
            ctx->pc = 0x324F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324f70;
        }
    }
    ctx->pc = 0x324FD8u;
label_324fd8:
    // 0x324fd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324fd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324fdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x324fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324fe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324fe8: 0x24428180  addiu       $v0, $v0, -0x7E80
    ctx->pc = 0x324fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934912));
    // 0x324fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x324ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324ff4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x324ff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x324ff8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x324ff8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324ffc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x324ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325000: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x325000u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x325004: 0x80ebeb8  j           func_3AFAE0
    ctx->pc = 0x325004u;
    ctx->pc = 0x325008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325004u;
    // 0x325008: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x325004u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32500Cu;
    // 0x32500c: 0x0  nop
    ctx->pc = 0x32500cu;
    // NOP
    ctx->pc = 0x325010u;
}

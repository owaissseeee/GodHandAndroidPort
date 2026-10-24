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

// Function: func_0035C3A0
// Address: 0x35c3a0 - 0x35c480
void func_0035C3A0_0x35c3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035C3A0_0x35c3a0");
#endif

    switch (ctx->pc) {
        case 0x35c3bcu: goto label_35c3bc;
        case 0x35c3e0u: goto label_35c3e0;
        default: break;
    }

    ctx->pc = 0x35c3a0u;

    // 0x35c3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35c3a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c3a8: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x35c3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x35c3ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c3acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c3b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35c3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35c3b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x35C3B4u;
    SET_GPR_U32(ctx, 31, 0x35C3BCu);
    ctx->pc = 0x35C3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C3B4u;
    // 0x35c3b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x35C3B4u, 0x35C3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C3BCu;
label_35c3bc:
    // 0x35c3bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35c3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c3c0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x35c3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x35c3c4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x35c3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x35c3c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x35c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x35c3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c3d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35c3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x35c3d4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35c3d8: 0xc0d7120  jal         func_35C480
    ctx->pc = 0x35C3D8u;
    SET_GPR_U32(ctx, 31, 0x35C3E0u);
    ctx->pc = 0x35C3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C3D8u;
    // 0x35c3dc: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C480u, 0x35C3D8u, 0x35C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C3E0u;
label_35c3e0:
    // 0x35c3e0: 0xfe000108  sd          $zero, 0x108($s0)
    ctx->pc = 0x35c3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 264), GPR_U64(ctx, 0));
    // 0x35c3e4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x35c3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x35c3e8: 0x34634240  ori         $v1, $v1, 0x4240
    ctx->pc = 0x35c3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16960);
    // 0x35c3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c3f0: 0x2404412b  addiu       $a0, $zero, 0x412B
    ctx->pc = 0x35c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16683));
    // 0x35c3f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x35c3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x35c3f8: 0x34a50d40  ori         $a1, $a1, 0xD40
    ctx->pc = 0x35c3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3392);
    // 0x35c3fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x35c3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c400: 0xfe020130  sd          $v0, 0x130($s0)
    ctx->pc = 0x35c400u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 304), GPR_U64(ctx, 2));
    // 0x35c404: 0xfe040138  sd          $a0, 0x138($s0)
    ctx->pc = 0x35c404u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 312), GPR_U64(ctx, 4));
    // 0x35c408: 0xfe050148  sd          $a1, 0x148($s0)
    ctx->pc = 0x35c408u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 328), GPR_U64(ctx, 5));
    // 0x35c40c: 0xfe030170  sd          $v1, 0x170($s0)
    ctx->pc = 0x35c40cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 368), GPR_U64(ctx, 3));
    // 0x35c410: 0xfe060178  sd          $a2, 0x178($s0)
    ctx->pc = 0x35c410u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 376), GPR_U64(ctx, 6));
    // 0x35c414: 0xae0001b8  sw          $zero, 0x1B8($s0)
    ctx->pc = 0x35c414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
    // 0x35c418: 0xfe020110  sd          $v0, 0x110($s0)
    ctx->pc = 0x35c418u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 272), GPR_U64(ctx, 2));
    // 0x35c41c: 0xfe000118  sd          $zero, 0x118($s0)
    ctx->pc = 0x35c41cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 280), GPR_U64(ctx, 0));
    // 0x35c420: 0xfe020120  sd          $v0, 0x120($s0)
    ctx->pc = 0x35c420u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 288), GPR_U64(ctx, 2));
    // 0x35c424: 0xfe000128  sd          $zero, 0x128($s0)
    ctx->pc = 0x35c424u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 296), GPR_U64(ctx, 0));
    // 0x35c428: 0xfe030140  sd          $v1, 0x140($s0)
    ctx->pc = 0x35c428u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 320), GPR_U64(ctx, 3));
    // 0x35c42c: 0xfe030150  sd          $v1, 0x150($s0)
    ctx->pc = 0x35c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 336), GPR_U64(ctx, 3));
    // 0x35c430: 0xfe000158  sd          $zero, 0x158($s0)
    ctx->pc = 0x35c430u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 344), GPR_U64(ctx, 0));
    // 0x35c434: 0xfe030160  sd          $v1, 0x160($s0)
    ctx->pc = 0x35c434u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 352), GPR_U64(ctx, 3));
    // 0x35c438: 0xfe000168  sd          $zero, 0x168($s0)
    ctx->pc = 0x35c438u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 360), GPR_U64(ctx, 0));
    // 0x35c43c: 0xfe000180  sd          $zero, 0x180($s0)
    ctx->pc = 0x35c43cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 384), GPR_U64(ctx, 0));
    // 0x35c440: 0xfe000188  sd          $zero, 0x188($s0)
    ctx->pc = 0x35c440u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 392), GPR_U64(ctx, 0));
    // 0x35c444: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x35c444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x35c448: 0xae000194  sw          $zero, 0x194($s0)
    ctx->pc = 0x35c448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 0));
    // 0x35c44c: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x35c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x35c450: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x35c450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x35c454: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x35c454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x35c458: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x35c458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x35c45c: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x35c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x35c460: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x35c460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
    // 0x35c464: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x35c464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
    // 0x35c468: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x35c468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
    // 0x35c46c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35c46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c474: 0x80d72c8  j           func_35CB20
    ctx->pc = 0x35C474u;
    ctx->pc = 0x35C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C474u;
    // 0x35c478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CB20u, 0x35C474u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35C47Cu;
    // 0x35c47c: 0x0  nop
    ctx->pc = 0x35c47cu;
    // NOP
    ctx->pc = 0x35c480u;
}

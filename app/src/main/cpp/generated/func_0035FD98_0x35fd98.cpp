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

// Function: func_0035FD98
// Address: 0x35fd98 - 0x35fe20
void func_0035FD98_0x35fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035FD98_0x35fd98");
#endif

    switch (ctx->pc) {
        case 0x35fde8u: goto label_35fde8;
        case 0x35fdf8u: goto label_35fdf8;
        default: break;
    }

    ctx->pc = 0x35fd98u;

    // 0x35fd98: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x35fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x35fd9c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x35fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x35fda0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x35fda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x35fda4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35fda8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35fda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35fdac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x35fdacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35fdb0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x35fdb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x35fdb4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x35fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x35fdb8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x35fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35fdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35fdc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35fdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35fdc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35fdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35fdcc: 0x39043  sra         $s2, $v1, 1
    ctx->pc = 0x35fdccu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 1));
    // 0x35fdd0: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x35fdd0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35fdd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35fdd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdd8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x35fdd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fddc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35fde0: 0xc0d7f88  jal         func_35FE20
    ctx->pc = 0x35FDE0u;
    SET_GPR_U32(ctx, 31, 0x35FDE8u);
    ctx->pc = 0x35FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDE0u;
    // 0x35fde4: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE20u, 0x35FDE0u, 0x35FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDE8u;
label_35fde8:
    // 0x35fde8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x35fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x35fdec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35fdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdf0: 0xc0d7f88  jal         func_35FE20
    ctx->pc = 0x35FDF0u;
    SET_GPR_U32(ctx, 31, 0x35FDF8u);
    ctx->pc = 0x35FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDF0u;
    // 0x35fdf4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE20u, 0x35FDF0u, 0x35FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDF8u;
label_35fdf8:
    // 0x35fdf8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x35fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x35fdfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35fdfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35fe00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35fe04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35fe04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35fe08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fe0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35fe0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fe10: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35fe10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35fe14: 0x80d7f88  j           func_35FE20
    ctx->pc = 0x35FE14u;
    ctx->pc = 0x35FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE14u;
    // 0x35fe18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FE20u, 0x35FE14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35FE1Cu;
    // 0x35fe1c: 0x0  nop
    ctx->pc = 0x35fe1cu;
    // NOP
    ctx->pc = 0x35fe20u;
}

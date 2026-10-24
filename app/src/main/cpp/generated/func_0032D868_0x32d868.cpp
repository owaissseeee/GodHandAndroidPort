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

// Function: func_0032D868
// Address: 0x32d868 - 0x32d9b8
void func_0032D868_0x32d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032D868_0x32d868");
#endif

    switch (ctx->pc) {
        case 0x32d948u: goto label_32d948;
        case 0x32d950u: goto label_32d950;
        case 0x32d95cu: goto label_32d95c;
        case 0x32d984u: goto label_32d984;
        default: break;
    }

    ctx->pc = 0x32d868u;

    // 0x32d868: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32d868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32d86c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x32d86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x32d870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d874: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d878: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d87c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32d87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d880: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32d880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32d884: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x32d884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d888: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32d888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32d88c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x32d88cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d890: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x32d890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x32d894: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x32d894u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d898: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x32d898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x32d89c: 0x24421ac0  addiu       $v0, $v0, 0x1AC0
    ctx->pc = 0x32d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x32d8a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32d8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x451AC0u));
    // 0x32d8a4: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x32D8A4u;
    {
        const bool branch_taken_0x32d8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x32d8a4) {
            ctx->pc = 0x32D8A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32D8A4u;
            // 0x32d8a8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32D8B8u;
            goto label_32d8b8;
        }
    }
    ctx->pc = 0x32D8ACu;
    // 0x32d8ac: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x32D8ACu;
    {
        const bool branch_taken_0x32d8ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x32d8ac) {
            ctx->pc = 0x32D8E0u;
            goto label_32d8e0;
        }
    }
    ctx->pc = 0x32D8B4u;
    // 0x32d8b4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32d8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_32d8b8:
    // 0x32d8b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d8bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d8bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d8c0: 0x24842a20  addiu       $a0, $a0, 0x2A20
    ctx->pc = 0x32d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10784));
    // 0x32d8c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d8c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d8c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d8c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d8cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32d8ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d8d0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32d8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32d8d4: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32D8D4u;
    ctx->pc = 0x32D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D8D4u;
    // 0x32d8d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32D8D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D8DCu;
    // 0x32d8dc: 0x0  nop
    ctx->pc = 0x32d8dcu;
    // NOP
label_32d8e0:
    // 0x32d8e0: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x32D8E0u;
    {
        const bool branch_taken_0x32d8e0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x32D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D8E0u;
        // 0x32d8e4: 0xdfbf0028  ld          $ra, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d8e0) {
            ctx->pc = 0x32D910u;
            goto label_32d910;
        }
    }
    ctx->pc = 0x32D8E8u;
    // 0x32d8e8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32d8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32d8ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d8ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d8f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d8f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d8f4: 0x24842a48  addiu       $a0, $a0, 0x2A48
    ctx->pc = 0x32d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10824));
    // 0x32d8f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d8fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d8fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d900: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32d900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d904: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32D904u;
    ctx->pc = 0x32D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D904u;
    // 0x32d908: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32D904u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D90Cu;
    // 0x32d90c: 0x0  nop
    ctx->pc = 0x32d90cu;
    // NOP
label_32d910:
    // 0x32d910: 0x1e60000b  bgtz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x32D910u;
    {
        const bool branch_taken_0x32d910 = (GPR_S64(ctx, 19) > 0);
        if (branch_taken_0x32d910) {
            ctx->pc = 0x32D940u;
            goto label_32d940;
        }
    }
    ctx->pc = 0x32D918u;
    // 0x32d918: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32d918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32d91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d924: 0x24842a78  addiu       $a0, $a0, 0x2A78
    ctx->pc = 0x32d924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10872));
    // 0x32d928: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d928u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d92c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d92cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d930: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32d930u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d934: 0x80cff2c  j           func_33FCB0
    ctx->pc = 0x32D934u;
    ctx->pc = 0x32D938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D934u;
    // 0x32d938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32D934u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D93Cu;
    // 0x32d93c: 0x0  nop
    ctx->pc = 0x32d93cu;
    // NOP
label_32d940:
    // 0x32d940: 0xc0cb6e8  jal         func_32DBA0
    ctx->pc = 0x32D940u;
    SET_GPR_U32(ctx, 31, 0x32D948u);
    ctx->pc = 0x32DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DBA0u, 0x32D940u, 0x32D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D948u;
label_32d948:
    // 0x32d948: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32D948u;
    SET_GPR_U32(ctx, 31, 0x32D950u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32D948u, 0x32D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D950u;
label_32d950:
    // 0x32d950: 0x8e0401cc  lw          $a0, 0x1CC($s0)
    ctx->pc = 0x32d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x32d954: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x32D954u;
    SET_GPR_U32(ctx, 31, 0x32D95Cu);
    ctx->pc = 0x32D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D954u;
    // 0x32d958: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x32D954u, 0x32D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D95Cu;
label_32d95c:
    // 0x32d95c: 0x8e0301cc  lw          $v1, 0x1CC($s0)
    ctx->pc = 0x32d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x32d960: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x32d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x32d964: 0xae0301d0  sw          $v1, 0x1D0($s0)
    ctx->pc = 0x32d964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x32d968: 0xae1401d4  sw          $s4, 0x1D4($s0)
    ctx->pc = 0x32d968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 20));
    // 0x32d96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32d96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d970: 0xae1201d8  sw          $s2, 0x1D8($s0)
    ctx->pc = 0x32d970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 18));
    // 0x32d974: 0xae1301dc  sw          $s3, 0x1DC($s0)
    ctx->pc = 0x32d974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 19));
    // 0x32d978: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x32d978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x32d97c: 0xc0cbd2c  jal         func_32F4B0
    ctx->pc = 0x32D97Cu;
    SET_GPR_U32(ctx, 31, 0x32D984u);
    ctx->pc = 0x32D980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D97Cu;
    // 0x32d980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4B0u, 0x32D97Cu, 0x32D984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D984u;
label_32d984:
    // 0x32d984: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x32d984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x32d988: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32d98c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d990: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x32d990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d994: 0xa20201b2  sb          $v0, 0x1B2($s0)
    ctx->pc = 0x32d994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 2));
    // 0x32d998: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32d998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d9a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32d9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32d9a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x32d9a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d9a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32d9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32d9ac: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32D9ACu;
    ctx->pc = 0x32D9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D9ACu;
    // 0x32d9b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32D9ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32D9B4u;
    // 0x32d9b4: 0x0  nop
    ctx->pc = 0x32d9b4u;
    // NOP
    ctx->pc = 0x32d9b8u;
}

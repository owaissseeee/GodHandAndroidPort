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

// Function: func_00336E88
// Address: 0x336e88 - 0x336f48
void func_00336E88_0x336e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336E88_0x336e88");
#endif

    ctx->pc = 0x336e88u;

    // 0x336e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336e8c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x336e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336e94: 0x5410008  bgez        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x336E94u;
    {
        const bool branch_taken_0x336e94 = (GPR_S64(ctx, 10) >= 0);
        ctx->pc = 0x336E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E94u;
        // 0x336e98: 0xa0582d  daddu       $t3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e94) {
            ctx->pc = 0x336EB8u;
            goto label_336eb8;
        }
    }
    ctx->pc = 0x336E9Cu;
    // 0x336e9c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ea4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x336ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336ea8: 0x24845398  addiu       $a0, $a0, 0x5398
    ctx->pc = 0x336ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21400));
    // 0x336eac: 0x80c9832  j           func_3260C8
    ctx->pc = 0x336EACu;
    ctx->pc = 0x336EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336EACu;
    // 0x336eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x336EACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336EB4u;
    // 0x336eb4: 0x0  nop
    ctx->pc = 0x336eb4u;
    // NOP
label_336eb8:
    // 0x336eb8: 0x5610007  bgez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x336EB8u;
    {
        const bool branch_taken_0x336eb8 = (GPR_S64(ctx, 11) >= 0);
        ctx->pc = 0x336EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EB8u;
        // 0x336ebc: 0xa1040  sll         $v0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336eb8) {
            ctx->pc = 0x336ED8u;
            goto label_336ed8;
        }
    }
    ctx->pc = 0x336EC0u;
    // 0x336ec0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ec8: 0x248453c8  addiu       $a0, $a0, 0x53C8
    ctx->pc = 0x336ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21448));
    // 0x336ecc: 0x80c9832  j           func_3260C8
    ctx->pc = 0x336ECCu;
    ctx->pc = 0x336ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336ECCu;
    // 0x336ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x336ECCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336ED4u;
    // 0x336ed4: 0x0  nop
    ctx->pc = 0x336ed4u;
    // NOP
label_336ed8:
    // 0x336ed8: 0x4b4821  addu        $t1, $v0, $t3
    ctx->pc = 0x336ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x336edc: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x336edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x336ee0: 0x29220021  slti        $v0, $t1, 0x21
    ctx->pc = 0x336ee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x336ee4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x336EE4u;
    {
        const bool branch_taken_0x336ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336EE4u;
        // 0x336ee8: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ee4) {
            ctx->pc = 0x336F08u;
            goto label_336f08;
        }
    }
    ctx->pc = 0x336EECu;
    // 0x336eec: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x336eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x336ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ef4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x336ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x336ef8: 0x248453f8  addiu       $a0, $a0, 0x53F8
    ctx->pc = 0x336ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21496));
    // 0x336efc: 0x80c9832  j           func_3260C8
    ctx->pc = 0x336EFCu;
    ctx->pc = 0x336F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336EFCu;
    // 0x336f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3260C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3260C8u, 0x336EFCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x336F04u;
    // 0x336f04: 0x0  nop
    ctx->pc = 0x336f04u;
    // NOP
label_336f08:
    // 0x336f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f0c: 0x33a00  sll         $a3, $v1, 8
    ctx->pc = 0x336f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x336f10: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x336f10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x336f14: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x336f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x336f18: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x336f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x336f1c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x336f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x336f20: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x336f20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x336f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336f28: 0xac6a0730  sw          $t2, 0x730($v1)
    ctx->pc = 0x336f28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x3E0730u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0730u, _value); } while (0);
    // 0x336f2c: 0xac8b0734  sw          $t3, 0x734($a0)
    ctx->pc = 0x336f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x3E0734u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0734u, _value); } while (0);
    // 0x336f30: 0xaca7070c  sw          $a3, 0x70C($a1)
    ctx->pc = 0x336f30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3E070Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E070Cu, _value); } while (0);
    // 0x336f34: 0xacc20710  sw          $v0, 0x710($a2)
    ctx->pc = 0x336f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E0710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0710u, _value); } while (0);
    // 0x336f38: 0xad090708  sw          $t1, 0x708($t0)
    ctx->pc = 0x336f38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3E0708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0708u, _value); } while (0);
    // 0x336f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x336F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F3Cu;
        // 0x336f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336F44u;
    // 0x336f44: 0x0  nop
    ctx->pc = 0x336f44u;
    // NOP
    ctx->pc = 0x336f48u;
}

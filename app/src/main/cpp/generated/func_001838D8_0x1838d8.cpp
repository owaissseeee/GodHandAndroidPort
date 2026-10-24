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

// Function: func_001838D8
// Address: 0x1838d8 - 0x183980
void func_001838D8_0x1838d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001838D8_0x1838d8");
#endif

    switch (ctx->pc) {
        case 0x183918u: goto label_183918;
        case 0x18392cu: goto label_18392c;
        case 0x183950u: goto label_183950;
        case 0x18395cu: goto label_18395c;
        default: break;
    }

    ctx->pc = 0x1838d8u;

    // 0x1838d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1838d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1838dc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1838dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1838e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1838e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1838e4: 0x24422eb8  addiu       $v0, $v0, 0x2EB8
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11960));
    // 0x1838e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1838e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1838ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1838ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838f0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1838f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1838f4: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x1838f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x1838f8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1838f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1838fc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1838fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183900: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x183900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x183904: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x183904u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x183908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18390c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18390cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183910: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x183910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x183914: 0x0  nop
    ctx->pc = 0x183914u;
    // NOP
label_183918:
    // 0x183918: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x183918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18391c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18391Cu;
    {
        const bool branch_taken_0x18391c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18391c) {
            ctx->pc = 0x183920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18391Cu;
            // 0x183920: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183934u;
            goto label_183934;
        }
    }
    ctx->pc = 0x183924u;
    // 0x183924: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x183924u;
    SET_GPR_U32(ctx, 31, 0x18392Cu);
    ctx->pc = 0x183928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183924u;
    // 0x183928: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x183924u, 0x18392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18392Cu;
label_18392c:
    // 0x18392c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18392cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x183930: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_183934:
    // 0x183934: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x183934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x183938: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x183938u;
    {
        const bool branch_taken_0x183938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183938u;
        // 0x18393c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183938) {
            ctx->pc = 0x183918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183918;
        }
    }
    ctx->pc = 0x183940u;
    // 0x183940: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x183940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x183944: 0x24050298  addiu       $a1, $zero, 0x298
    ctx->pc = 0x183944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x183948: 0xc0c15de  jal         func_305778
    ctx->pc = 0x183948u;
    SET_GPR_U32(ctx, 31, 0x183950u);
    ctx->pc = 0x18394Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183948u;
    // 0x18394c: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x183948u, 0x183950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183950u;
label_183950:
    // 0x183950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183954: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x183954u;
    SET_GPR_U32(ctx, 31, 0x18395Cu);
    ctx->pc = 0x183958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183954u;
    // 0x183958: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x183954u, 0x18395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18395Cu;
label_18395c:
    // 0x18395c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x18395cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183960: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x183960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183964: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x183964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183968: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x183968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18396c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x18396cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183974: 0x3e00008  jr          $ra
    ctx->pc = 0x183974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183974u;
        // 0x183978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18397Cu;
    // 0x18397c: 0x0  nop
    ctx->pc = 0x18397cu;
    // NOP
    ctx->pc = 0x183980u;
}

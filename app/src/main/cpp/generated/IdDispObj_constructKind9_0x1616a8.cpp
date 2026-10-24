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

// Function: IdDispObj_constructKind9
// Address: 0x1616a8 - 0x161780
void IdDispObj_constructKind9_0x1616a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IdDispObj_constructKind9_0x1616a8");
#endif

    switch (ctx->pc) {
        case 0x1616c4u: goto label_1616c4;
        case 0x1616d4u: goto label_1616d4;
        case 0x1616f0u: goto label_1616f0;
        case 0x161700u: goto label_161700;
        case 0x161708u: goto label_161708;
        case 0x161738u: goto label_161738;
        case 0x161740u: goto label_161740;
        default: break;
    }

    ctx->pc = 0x1616a8u;

    // 0x1616a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1616a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1616ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1616acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1616b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1616b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1616b4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1616b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1616b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1616b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1616bc: 0xc058574  jal         func_1615D0
    ctx->pc = 0x1616BCu;
    SET_GPR_U32(ctx, 31, 0x1616C4u);
    ctx->pc = 0x1616C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616BCu;
    // 0x1616c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1615D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1615D0u, 0x1616BCu, 0x1616C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616C4u;
label_1616c4:
    // 0x1616c4: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1616c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1616c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616cc: 0xc058540  jal         func_161500
    ctx->pc = 0x1616CCu;
    SET_GPR_U32(ctx, 31, 0x1616D4u);
    ctx->pc = 0x1616D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616CCu;
    // 0x1616d0: 0x24a5f1f0  addiu       $a1, $a1, -0xE10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161500u, 0x1616CCu, 0x1616D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616D4u;
label_1616d4:
    // 0x1616d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1616D4u;
    {
        const bool branch_taken_0x1616d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616D4u;
        // 0x1616d8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616d4) {
            ctx->pc = 0x161728u;
            goto label_161728;
        }
    }
    ctx->pc = 0x1616DCu;
    // 0x1616dc: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x1616dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1616e0: 0x8c432384  lw          $v1, 0x2384($v0)
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9092)));
    // 0x1616e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1616e8: 0xc0ab33e  jal         func_2ACCF8
    ctx->pc = 0x1616E8u;
    SET_GPR_U32(ctx, 31, 0x1616F0u);
    ctx->pc = 0x1616ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616E8u;
    // 0x1616ec: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCF8u, 0x1616E8u, 0x1616F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616F0u;
label_1616f0:
    // 0x1616f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1616f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1616f8: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1616F8u;
    SET_GPR_U32(ctx, 31, 0x161700u);
    ctx->pc = 0x1616FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616F8u;
    // 0x1616fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1616F8u, 0x161700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161700u;
label_161700:
    // 0x161700: 0xc0aae9e  jal         func_2ABA78
    ctx->pc = 0x161700u;
    SET_GPR_U32(ctx, 31, 0x161708u);
    ctx->pc = 0x161704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161700u;
    // 0x161704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA78u, 0x161700u, 0x161708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161708u;
label_161708:
    // 0x161708: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16170c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x161710: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x161710u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x161714: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x161714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x161718: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x161718u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x16171c: 0xa200005b  sb          $zero, 0x5B($s0)
    ctx->pc = 0x16171cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x161720: 0xa200005c  sb          $zero, 0x5C($s0)
    ctx->pc = 0x161720u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 0));
    // 0x161724: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x161724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
label_161728:
    // 0x161728: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x161728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16172c: 0x26120080  addiu       $s2, $s0, 0x80
    ctx->pc = 0x16172cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x161730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161734: 0x0  nop
    ctx->pc = 0x161734u;
    // NOP
label_161738:
    // 0x161738: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x161738u;
    SET_GPR_U32(ctx, 31, 0x161740u);
    ctx->pc = 0x16173Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161738u;
    // 0x16173c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x161738u, 0x161740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161740u;
label_161740:
    // 0x161740: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x161740u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x161744: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x161744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x161748: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x161748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x16174c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x16174cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x161750: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x161750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x161754: 0x2e22000f  sltiu       $v0, $s1, 0xF
    ctx->pc = 0x161754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x161758: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x161758u;
    {
        const bool branch_taken_0x161758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161758u;
        // 0x16175c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161758) {
            ctx->pc = 0x161738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161738;
        }
    }
    ctx->pc = 0x161760u;
    // 0x161760: 0xa20000bc  sb          $zero, 0xBC($s0)
    ctx->pc = 0x161760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x161764: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x161764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161768: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161768u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16176c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16176cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161774: 0x3e00008  jr          $ra
    ctx->pc = 0x161774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161774u;
        // 0x161778: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16177Cu;
    // 0x16177c: 0x0  nop
    ctx->pc = 0x16177cu;
    // NOP
    ctx->pc = 0x161780u;
}

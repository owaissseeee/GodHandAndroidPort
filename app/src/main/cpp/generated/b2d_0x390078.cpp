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

// Function: b2d
// Address: 0x390078 - 0x3901a8
void b2d_0x390078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("b2d_0x390078");
#endif

    switch (ctx->pc) {
        case 0x3900b8u: goto label_3900b8;
        default: break;
    }

    ctx->pc = 0x390078u;

    // 0x390078: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39007c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39007cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x390080: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x390080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x390084: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x390084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x390088: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x390088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39008c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x39008cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x390090: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x390090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390094: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x390094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x390098: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x390098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39009c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x39009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3900a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3900a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3900a4: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x3900a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3900a8: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x3900a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x3900ac: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x3900acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3900b0: 0xc0e3e0e  jal         func_38F838
    ctx->pc = 0x3900B0u;
    SET_GPR_U32(ctx, 31, 0x3900B8u);
    ctx->pc = 0x3900B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3900B0u;
    // 0x3900b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F838u, 0x3900B0u, 0x3900B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3900B8u;
label_3900b8:
    // 0x3900b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3900b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3900bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3900bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3900c0: 0x28c3000b  slti        $v1, $a2, 0xB
    ctx->pc = 0x3900c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x3900c4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3900c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3900c8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3900C8u;
    {
        const bool branch_taken_0x3900c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3900CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900C8u;
        // 0x3900cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3900c8) {
            ctx->pc = 0x390110u;
            goto label_390110;
        }
    }
    ctx->pc = 0x3900D0u;
    // 0x3900d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3900d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3900d4: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x3900d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x3900d8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3900d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3900dc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x3900dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3900e0: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x3900e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x3900e4: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3900e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3900e8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3900E8u;
    {
        const bool branch_taken_0x3900e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3900ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3900E8u;
        // 0x3900ec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3900e8) {
            ctx->pc = 0x3900F4u;
            goto label_3900f4;
        }
    }
    ctx->pc = 0x3900F0u;
    // 0x3900f0: 0x8e27fffc  lw          $a3, -0x4($s1)
    ctx->pc = 0x3900f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_3900f4:
    // 0x3900f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3900f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3900f8: 0x24c30015  addiu       $v1, $a2, 0x15
    ctx->pc = 0x3900f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21));
    // 0x3900fc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x3900fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x390100: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x390100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x390104: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x390104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x390108: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x390108u;
    {
        const bool branch_taken_0x390108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39010Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390108u;
        // 0x39010c: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390108) {
            ctx->pc = 0x390174u;
            goto label_390174;
        }
    }
    ctx->pc = 0x390110u;
label_390110:
    // 0x390110: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x390110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x390114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390114u;
    {
        const bool branch_taken_0x390114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390114u;
        // 0x390118: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390114) {
            ctx->pc = 0x390124u;
            goto label_390124;
        }
    }
    ctx->pc = 0x39011Cu;
    // 0x39011c: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x39011cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x390120: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x390120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_390124:
    // 0x390124: 0x24c6fff5  addiu       $a2, $a2, -0xB
    ctx->pc = 0x390124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967285));
    // 0x390128: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x390128u;
    {
        const bool branch_taken_0x390128 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x39012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390128u;
        // 0x39012c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390128) {
            ctx->pc = 0x390168u;
            goto label_390168;
        }
    }
    ctx->pc = 0x390130u;
    // 0x390130: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x390130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x390134: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x390134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x390138: 0xd22804  sllv        $a1, $s2, $a2
    ctx->pc = 0x390138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 6) & 0x1F));
    // 0x39013c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x39013cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x390140: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x390140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x390144: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x390144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x390148: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x390148u;
    {
        const bool branch_taken_0x390148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390148u;
        // 0x39014c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390148) {
            ctx->pc = 0x390154u;
            goto label_390154;
        }
    }
    ctx->pc = 0x390150u;
    // 0x390150: 0x8e32fffc  lw          $s2, -0x4($s1)
    ctx->pc = 0x390150u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
label_390154:
    // 0x390154: 0x61023  negu        $v0, $a2
    ctx->pc = 0x390154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x390158: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x390158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x39015c: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x39015cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x390160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x390160u;
    {
        const bool branch_taken_0x390160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390160u;
        // 0x390164: 0x621825  or          $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390160) {
            ctx->pc = 0x390174u;
            goto label_390174;
        }
    }
    ctx->pc = 0x390168u;
label_390168:
    // 0x390168: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x390168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x39016c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x39016cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390170: 0x2422025  or          $a0, $s2, $v0
    ctx->pc = 0x390170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_390174:
    // 0x390174: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x390174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x390178: 0x4a03c  dsll32      $s4, $a0, 0
    ctx->pc = 0x390178u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 4) << (32 + 0));
    // 0x39017c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x39017cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x390180: 0x2831025  or          $v0, $s4, $v1
    ctx->pc = 0x390180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x390184: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x390184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x390188: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x390188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39018c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x39018cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x390190: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x390190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x390194: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x390194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390198: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x390198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39019c: 0x3e00008  jr          $ra
    ctx->pc = 0x39019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3901A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39019Cu;
        // 0x3901a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3901A4u;
    // 0x3901a4: 0x0  nop
    ctx->pc = 0x3901a4u;
    // NOP
    ctx->pc = 0x3901a8u;
}

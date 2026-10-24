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

// Function: sceGszbufaddr
// Address: 0x3969a8 - 0x396a70
void sceGszbufaddr_0x3969a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGszbufaddr_0x3969a8");
#endif

    switch (ctx->pc) {
        case 0x3969d8u: goto label_3969d8;
        default: break;
    }

    ctx->pc = 0x3969a8u;

    // 0x3969a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3969a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3969ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3969acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3969b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3969b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3969b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3969b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3969b8: 0x48c00  sll         $s1, $a0, 16
    ctx->pc = 0x3969b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3969bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3969bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3969c0: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x3969c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3969c4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x3969c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x3969c8: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3969c8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3969cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3969ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3969d0: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x3969D0u;
    SET_GPR_U32(ctx, 31, 0x3969D8u);
    ctx->pc = 0x3969D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3969D0u;
    // 0x3969d4: 0x69403  sra         $s2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x3969D0u, 0x3969D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3969D8u;
label_3969d8:
    // 0x3969d8: 0x2603003f  addiu       $v1, $s0, 0x3F
    ctx->pc = 0x3969d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x3969dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3969dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3969e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3969e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3969e4: 0x2610007e  addiu       $s0, $s0, 0x7E
    ctx->pc = 0x3969e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 126));
    // 0x3969e8: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x3969e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3969ec: 0x32310002  andi        $s1, $s1, 0x2
    ctx->pc = 0x3969ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x3969f0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x3969f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3969f4: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3969F4u;
    {
        const bool branch_taken_0x3969f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3969F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3969F4u;
        // 0x3969f8: 0x108183  sra         $s0, $s0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3969f4) {
            ctx->pc = 0x396A14u;
            goto label_396a14;
        }
    }
    ctx->pc = 0x3969FCu;
    // 0x3969fc: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x3969fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x396a00: 0x2643007e  addiu       $v1, $s2, 0x7E
    ctx->pc = 0x396a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 126));
    // 0x396a04: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x396a04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x396a08: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x396a08u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x396a0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x396A0Cu;
    {
        const bool branch_taken_0x396a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A0Cu;
        // 0x396a10: 0x33183  sra         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a0c) {
            ctx->pc = 0x396A28u;
            goto label_396a28;
        }
    }
    ctx->pc = 0x396A14u;
label_396a14:
    // 0x396a14: 0x2642001f  addiu       $v0, $s2, 0x1F
    ctx->pc = 0x396a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 31));
    // 0x396a18: 0x2643003e  addiu       $v1, $s2, 0x3E
    ctx->pc = 0x396a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 62));
    // 0x396a1c: 0x82202a  slt         $a0, $a0, $v0
    ctx->pc = 0x396a1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x396a20: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x396a20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x396a24: 0x33143  sra         $a2, $v1, 5
    ctx->pc = 0x396a24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 5));
label_396a28:
    // 0x396a28: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x396a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x396a2c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x396a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x396a30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x396a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x396a34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x396a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x396a38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x396a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396a3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x396a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x396a40: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396A40u;
    {
        const bool branch_taken_0x396a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x396A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A40u;
        // 0x396a44: 0x2061018  mult        $v0, $s0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a40) {
            ctx->pc = 0x396A50u;
            goto label_396a50;
        }
    }
    ctx->pc = 0x396A48u;
    // 0x396a48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x396A48u;
    {
        const bool branch_taken_0x396a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A48u;
        // 0x396a4c: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396a48) {
            ctx->pc = 0x396A54u;
            goto label_396a54;
        }
    }
    ctx->pc = 0x396A50u;
label_396a50:
    // 0x396a50: 0x21440  sll         $v0, $v0, 17
    ctx->pc = 0x396a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_396a54:
    // 0x396a54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x396a54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x396a58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x396a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x396a5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x396a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396a60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x396a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396a68: 0x3e00008  jr          $ra
    ctx->pc = 0x396A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396A68u;
        // 0x396a6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396A70u;
}

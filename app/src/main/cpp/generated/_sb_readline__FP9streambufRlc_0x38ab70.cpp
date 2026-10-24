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

// Function: _sb_readline__FP9streambufRlc
// Address: 0x38ab70 - 0x38acb0
void _sb_readline__FP9streambufRlc_0x38ab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sb_readline__FP9streambufRlc_0x38ab70");
#endif

    switch (ctx->pc) {
        case 0x38abb8u: goto label_38abb8;
        case 0x38abd0u: goto label_38abd0;
        case 0x38ac0cu: goto label_38ac0c;
        case 0x38ac2cu: goto label_38ac2c;
        case 0x38ac58u: goto label_38ac58;
        case 0x38ac84u: goto label_38ac84;
        default: break;
    }

    ctx->pc = 0x38ab70u;

label_38ab70:
    // 0x38ab70: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x38ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x38ab74: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x38ab74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x38ab78: 0xffb30240  sd          $s3, 0x240($sp)
    ctx->pc = 0x38ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 19));
    // 0x38ab7c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x38ab7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38ab80: 0xffb10220  sd          $s1, 0x220($sp)
    ctx->pc = 0x38ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 17));
    // 0x38ab84: 0x69e03  sra         $s3, $a2, 24
    ctx->pc = 0x38ab84u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 24));
    // 0x38ab88: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x38ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x38ab8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38ab8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38ab90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab94: 0xffb50260  sd          $s5, 0x260($sp)
    ctx->pc = 0x38ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 21));
    // 0x38ab98: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x38ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x38ab9c: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x38ab9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
    // 0x38aba0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38aba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aba4: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x38aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x38aba8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x38aba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x38abac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x38abacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abb0: 0xc0e3896  jal         func_38E258
    ctx->pc = 0x38ABB0u;
    SET_GPR_U32(ctx, 31, 0x38ABB8u);
    ctx->pc = 0x38ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABB0u;
    // 0x38abb4: 0x27a90200  addiu       $t1, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E258u, 0x38ABB0u, 0x38ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABB8u;
label_38abb8:
    // 0x38abb8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x38abb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38abbc: 0x8fa30200  lw          $v1, 0x200($sp)
    ctx->pc = 0x38abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x38abc0: 0x10750005  beq         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x38ABC0u;
    {
        const bool branch_taken_0x38abc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x38ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABC0u;
        // 0x38abc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38abc0) {
            ctx->pc = 0x38ABD8u;
            goto label_38abd8;
        }
    }
    ctx->pc = 0x38ABC8u;
    // 0x38abc8: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x38ABC8u;
    SET_GPR_U32(ctx, 31, 0x38ABD0u);
    ctx->pc = 0x38ABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABC8u;
    // 0x38abcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x38ABC8u, 0x38ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABD0u;
label_38abd0:
    // 0x38abd0: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x38abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x38abd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38abd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38abd8:
    // 0x38abd8: 0xde140000  ld          $s4, 0x0($s0)
    ctx->pc = 0x38abd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38abdc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x38abdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x38abe0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x38abe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x38abe4: 0x282102d  daddu       $v0, $s4, $v0
    ctx->pc = 0x38abe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
    // 0x38abe8: 0x10750015  beq         $v1, $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x38ABE8u;
    {
        const bool branch_taken_0x38abe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x38ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABE8u;
        // 0x38abec: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38abe8) {
            ctx->pc = 0x38AC40u;
            goto label_38ac40;
        }
    }
    ctx->pc = 0x38ABF0u;
    // 0x38abf0: 0x10730013  beq         $v1, $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x38ABF0u;
    {
        const bool branch_taken_0x38abf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x38ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABF0u;
        // 0x38abf4: 0x64420001  daddiu      $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38abf0) {
            ctx->pc = 0x38AC40u;
            goto label_38ac40;
        }
    }
    ctx->pc = 0x38ABF8u;
    // 0x38abf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abfc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x38abfcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x38ac00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38ac00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac04: 0xc0e2adc  jal         func_38AB70
    ctx->pc = 0x38AC04u;
    SET_GPR_U32(ctx, 31, 0x38AC0Cu);
    ctx->pc = 0x38AC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC04u;
    // 0x38ac08: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AB70u;
    goto label_38ab70;
    ctx->pc = 0x38AC0Cu;
label_38ac0c:
    // 0x38ac0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38ac0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac10: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x38AC10u;
    {
        const bool branch_taken_0x38ac10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC10u;
        // 0x38ac14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac10) {
            ctx->pc = 0x38AC84u;
            goto label_38ac84;
        }
    }
    ctx->pc = 0x38AC18u;
    // 0x38ac18: 0x14803c  dsll32      $s0, $s4, 0
    ctx->pc = 0x38ac18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 0));
    // 0x38ac1c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x38ac1cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x38ac20: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x38ac20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x38ac24: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38AC24u;
    SET_GPR_U32(ctx, 31, 0x38AC2Cu);
    ctx->pc = 0x38AC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC24u;
    // 0x38ac28: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38AC24u, 0x38AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC2Cu;
label_38ac2c:
    // 0x38ac2c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x38ac2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x38ac30: 0x93a20200  lbu         $v0, 0x200($sp)
    ctx->pc = 0x38ac30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x38ac34: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x38ac34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x38ac38: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x38AC38u;
    {
        const bool branch_taken_0x38ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC38u;
        // 0x38ac3c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac38) {
            ctx->pc = 0x38AC84u;
            goto label_38ac84;
        }
    }
    ctx->pc = 0x38AC40u;
label_38ac40:
    // 0x38ac40: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x38ac40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ac44: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x38ac44u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x38ac48: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x38ac48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x38ac4c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x38ac4cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x38ac50: 0xc0c3d5e  jal         func_30F578
    ctx->pc = 0x38AC50u;
    SET_GPR_U32(ctx, 31, 0x38AC58u);
    ctx->pc = 0x30F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F578u, 0x38AC50u, 0x38AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC58u;
label_38ac58:
    // 0x38ac58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x38ac58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac5c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38AC5Cu;
    {
        const bool branch_taken_0x38ac5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC5Cu;
        // 0x38ac60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac5c) {
            ctx->pc = 0x38AC84u;
            goto label_38ac84;
        }
    }
    ctx->pc = 0x38AC64u;
    // 0x38ac64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ac68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x38ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x38ac70: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x38ac70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x38ac74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38ac78: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x38ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x38ac7c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x38AC7Cu;
    SET_GPR_U32(ctx, 31, 0x38AC84u);
    ctx->pc = 0x38AC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC7Cu;
    // 0x38ac80: 0x922023  subu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x38AC7Cu, 0x38AC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC84u;
label_38ac84:
    // 0x38ac84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38ac84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac88: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x38ac88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x38ac8c: 0xdfb50260  ld          $s5, 0x260($sp)
    ctx->pc = 0x38ac8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x38ac90: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x38ac90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x38ac94: 0xdfb30240  ld          $s3, 0x240($sp)
    ctx->pc = 0x38ac94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x38ac98: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x38ac98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x38ac9c: 0xdfb10220  ld          $s1, 0x220($sp)
    ctx->pc = 0x38ac9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x38aca0: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x38aca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x38aca4: 0x3e00008  jr          $ra
    ctx->pc = 0x38ACA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38ACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACA4u;
        // 0x38aca8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ACA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38ACACu;
    // 0x38acac: 0x0  nop
    ctx->pc = 0x38acacu;
    // NOP
    ctx->pc = 0x38acb0u;
}

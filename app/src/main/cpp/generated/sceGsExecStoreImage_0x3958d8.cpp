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

// Function: sceGsExecStoreImage
// Address: 0x3958d8 - 0x395f68
void sceGsExecStoreImage_0x3958d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsExecStoreImage_0x3958d8");
#endif

    switch (ctx->pc) {
        case 0x395b00u: goto label_395b00;
        case 0x395b24u: goto label_395b24;
        case 0x395b2cu: goto label_395b2c;
        case 0x395bc0u: goto label_395bc0;
        case 0x395c08u: goto label_395c08;
        case 0x395c8cu: goto label_395c8c;
        case 0x395ca0u: goto label_395ca0;
        case 0x395cc4u: goto label_395cc4;
        case 0x395cd0u: goto label_395cd0;
        case 0x395ce0u: goto label_395ce0;
        case 0x395d68u: goto label_395d68;
        case 0x395da8u: goto label_395da8;
        case 0x395dc8u: goto label_395dc8;
        case 0x395e28u: goto label_395e28;
        case 0x395e60u: goto label_395e60;
        case 0x395ea0u: goto label_395ea0;
        case 0x395ec0u: goto label_395ec0;
        case 0x395f10u: goto label_395f10;
        default: break;
    }

    ctx->pc = 0x3958d8u;

    // 0x3958d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3958d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3958dc: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x3958dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x3958e0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x3958e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x3958e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3958e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3958e8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x3958e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x3958ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3958ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3958f0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3958f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x3958f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3958f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3958f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3958f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3958fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3958fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395900: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x395900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x395904: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x395904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395908: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x395908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39590c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39590cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395910: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x395910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x395914: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x395914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395918: 0xde890040  ld          $t1, 0x40($s4)
    ctx->pc = 0x395918u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x39591c: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x39591cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x395920: 0x31240fff  andi        $a0, $t1, 0xFFF
    ctx->pc = 0x395920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x395924: 0x9183e  dsrl32      $v1, $t1, 0
    ctx->pc = 0x395924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x395928: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x395928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x39592c: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x39592cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x395930: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x395930u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x395934: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x395934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x395938: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x395938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x39593c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x39593cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x395940: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x395940u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x395944: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x395944u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x395948: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x395948u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x39594c: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x39594cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x395950: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x395950u;
    {
        const bool branch_taken_0x395950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395950u;
        // 0x395954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395950) {
            ctx->pc = 0x395AB4u;
            goto label_395ab4;
        }
    }
    ctx->pc = 0x395958u;
    // 0x395958: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x395958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x39595c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x39595cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x395960: 0x2442de60  addiu       $v0, $v0, -0x21A0
    ctx->pc = 0x395960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958688));
    // 0x395964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x395964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x395968: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x395968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39596c: 0x800008  jr          $a0
    ctx->pc = 0x39596Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x395974u: goto label_395974;
            case 0x3959ACu: goto label_3959ac;
            case 0x3959FCu: goto label_3959fc;
            case 0x395A34u: goto label_395a34;
            case 0x395A68u: goto label_395a68;
            case 0x395AB4u: goto label_395ab4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39596Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x395974u;
label_395974:
    // 0x395974: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x395974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x395978: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x395978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x39597c: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x39597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x395980: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x395980u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x395984: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x395984u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x395988: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x395988u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x39598c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x39598cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x395990: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x395990u;
    {
        const bool branch_taken_0x395990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x395994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395990u;
        // 0x395994: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395990) {
            ctx->pc = 0x395A8Cu;
            goto label_395a8c;
        }
    }
    ctx->pc = 0x395998u;
    // 0x395998: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x395998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x39599c: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x39599cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
    // 0x3959a0: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x3959a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3959a4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3959A4u;
    {
        const bool branch_taken_0x3959a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3959A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959A4u;
        // 0x3959a8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959a4) {
            ctx->pc = 0x395AA8u;
            goto label_395aa8;
        }
    }
    ctx->pc = 0x3959ACu;
label_3959ac:
    // 0x3959ac: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x3959acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3959b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3959b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3959b4: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x3959b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x3959b8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3959b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3959bc: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x3959bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3959c0: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x3959c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
    // 0x3959c4: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x3959c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3959c8: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3959c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3959cc: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x3959CCu;
    {
        const bool branch_taken_0x3959cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3959D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959CCu;
        // 0x3959d0: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959cc) {
            ctx->pc = 0x395A8Cu;
            goto label_395a8c;
        }
    }
    ctx->pc = 0x3959D4u;
    // 0x3959d4: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x3959d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x3959d8: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x3959d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
    // 0x3959dc: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x3959dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3959e0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3959e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x3959e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3959e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3959e8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3959e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3959ec: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x3959ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3959f0: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3959f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3959f4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3959F4u;
    {
        const bool branch_taken_0x3959f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3959F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3959F4u;
        // 0x3959f8: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959f4) {
            ctx->pc = 0x395AB4u;
            goto label_395ab4;
        }
    }
    ctx->pc = 0x3959FCu;
label_3959fc:
    // 0x3959fc: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x3959fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x395a00: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x395a00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x395a04: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x395a04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x395a08: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x395a08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x395a0c: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x395a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x395a10: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x395a10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x395a14: 0x459024  and         $s2, $v0, $a1
    ctx->pc = 0x395a14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x395a18: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x395A18u;
    {
        const bool branch_taken_0x395a18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A18u;
        // 0x395a1c: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a18) {
            ctx->pc = 0x395A8Cu;
            goto label_395a8c;
        }
    }
    ctx->pc = 0x395A20u;
    // 0x395a20: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x395a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x395a24: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x395a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x395a28: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x395a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x395a2c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x395A2Cu;
    {
        const bool branch_taken_0x395a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A2Cu;
        // 0x395a30: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a2c) {
            ctx->pc = 0x395AA8u;
            goto label_395aa8;
        }
    }
    ctx->pc = 0x395A34u;
label_395a34:
    // 0x395a34: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x395a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x395a38: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x395a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x395a3c: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x395a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x395a40: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x395a40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x395a44: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x395a44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x395a48: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x395a48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x395a4c: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x395A4Cu;
    {
        const bool branch_taken_0x395a4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A4Cu;
        // 0x395a50: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a4c) {
            ctx->pc = 0x395A8Cu;
            goto label_395a8c;
        }
    }
    ctx->pc = 0x395A54u;
    // 0x395a54: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x395a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x395a58: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x395a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x395a5c: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x395a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x395a60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x395A60u;
    {
        const bool branch_taken_0x395a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A60u;
        // 0x395a64: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a60) {
            ctx->pc = 0x395AA8u;
            goto label_395aa8;
        }
    }
    ctx->pc = 0x395A68u;
label_395a68:
    // 0x395a68: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x395a68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x395a6c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x395a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x395a70: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x395a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x395a74: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x395a74u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    // 0x395a78: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x395a78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x395a7c: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x395a7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x395a80: 0x659024  and         $s2, $v1, $a1
    ctx->pc = 0x395a80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x395a84: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x395A84u;
    {
        const bool branch_taken_0x395a84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x395A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A84u;
        // 0x395a88: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a84) {
            ctx->pc = 0x395A98u;
            goto label_395a98;
        }
    }
    ctx->pc = 0x395A8Cu;
label_395a8c:
    // 0x395a8c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x395a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395a90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x395A90u;
    {
        const bool branch_taken_0x395a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395A90u;
        // 0x395a94: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a90) {
            ctx->pc = 0x395AB4u;
            goto label_395ab4;
        }
    }
    ctx->pc = 0x395A98u;
label_395a98:
    // 0x395a98: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x395a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x395a9c: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x395a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x395aa0: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x395aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x395aa4: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x395aa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_395aa8:
    // 0x395aa8: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x395aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x395aac: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x395aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x395ab0: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x395ab0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_395ab4:
    // 0x395ab4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x395AB4u;
    {
        const bool branch_taken_0x395ab4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AB4u;
        // 0x395ab8: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ab4) {
            ctx->pc = 0x395ADCu;
            goto label_395adc;
        }
    }
    ctx->pc = 0x395ABCu;
    // 0x395abc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x395abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x395ac0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x395ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x395ac4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x395ac4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x395ac8: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x395ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x395acc: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x395accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x395ad0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x395ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x395ad4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x395ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x395ad8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x395ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_395adc:
    // 0x395adc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x395ae0: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x395ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x395ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x395ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x395ae8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x395ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x395aec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x395AECu;
    {
        const bool branch_taken_0x395aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AECu;
        // 0x395af0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395aec) {
            ctx->pc = 0x395B1Cu;
            goto label_395b1c;
        }
    }
    ctx->pc = 0x395AF4u;
    // 0x395af4: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x395af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x395af8: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x395af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x395afc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395b00:
    // 0x395b00: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x395b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395b04: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x395B04u;
    {
        const bool branch_taken_0x395b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B04u;
        // 0x395b08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b04) {
            ctx->pc = 0x395C80u;
            goto label_395c80;
        }
    }
    ctx->pc = 0x395B0Cu;
    // 0x395b0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395b10: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x395b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x395b14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395B14u;
    {
        const bool branch_taken_0x395b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B14u;
        // 0x395b18: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b14) {
            ctx->pc = 0x395B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395b00;
        }
    }
    ctx->pc = 0x395B1Cu;
label_395b1c:
    // 0x395b1c: 0xc0ebff0  jal         func_3AFFC0
    ctx->pc = 0x395B1Cu;
    SET_GPR_U32(ctx, 31, 0x395B24u);
    ctx->pc = 0x3AFFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFFC0u, 0x395B1Cu, 0x395B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B24u;
label_395b24:
    // 0x395b24: 0xc0ebff8  jal         func_3AFFE0
    ctx->pc = 0x395B24u;
    SET_GPR_U32(ctx, 31, 0x395B2Cu);
    ctx->pc = 0x395B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395B24u;
    // 0x395b28: 0x34440200  ori         $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFFE0u, 0x395B24u, 0x395B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395B2Cu;
label_395b2c:
    // 0x395b2c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x395b2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395b30: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x395b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395b34: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x395b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x395b38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395b3c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x395b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x395b40: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x395b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x395b44: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x395b44u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x395b48: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x395b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x395b4c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x395b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x395b50: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x395b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x395b54: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x395b54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x395b58: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x395B58u;
    {
        const bool branch_taken_0x395b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x395B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B58u;
        // 0x395b5c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b58) {
            ctx->pc = 0x395B7Cu;
            goto label_395b7c;
        }
    }
    ctx->pc = 0x395B60u;
    // 0x395b60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395b64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x395b68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x395b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x395b6c: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x395b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x395b70: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x395b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x395b74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x395B74u;
    {
        const bool branch_taken_0x395b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395B74u;
        // 0x395b78: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395b74) {
            ctx->pc = 0x395B8Cu;
            goto label_395b8c;
        }
    }
    ctx->pc = 0x395B7Cu;
label_395b7c:
    // 0x395b7c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395b80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x395b84: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x395b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x395b88: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x395b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_395b8c:
    // 0x395b8c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x395b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x395b90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x395b94: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x395b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x395b98: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x395b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x395b9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x395b9cu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x395ba0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x395ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x395ba4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x395ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x395ba8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x395BA8u;
    {
        const bool branch_taken_0x395ba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BA8u;
        // 0x395bac: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ba8) {
            ctx->pc = 0x395BDCu;
            goto label_395bdc;
        }
    }
    ctx->pc = 0x395BB0u;
    // 0x395bb0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x395bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x395bb4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x395bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x395bb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395bbc: 0x0  nop
    ctx->pc = 0x395bbcu;
    // NOP
label_395bc0:
    // 0x395bc0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x395bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395bc4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x395BC4u;
    {
        const bool branch_taken_0x395bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BC4u;
        // 0x395bc8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bc4) {
            ctx->pc = 0x395C80u;
            goto label_395c80;
        }
    }
    ctx->pc = 0x395BCCu;
    // 0x395bcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395bd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x395bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x395bd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395BD4u;
    {
        const bool branch_taken_0x395bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BD4u;
        // 0x395bd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bd4) {
            ctx->pc = 0x395BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395bc0;
        }
    }
    ctx->pc = 0x395BDCu;
label_395bdc:
    // 0x395bdc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x395bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x395be0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x395be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x395be4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x395be4u;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x395be8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x395be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x395bec: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x395BECu;
    {
        const bool branch_taken_0x395bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395BECu;
        // 0x395bf0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bec) {
            ctx->pc = 0x395C28u;
            goto label_395c28;
        }
    }
    ctx->pc = 0x395BF4u;
    // 0x395bf4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x395bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x395bf8: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x395bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x395bfc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x395bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x395c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395c04: 0x0  nop
    ctx->pc = 0x395c04u;
    // NOP
label_395c08:
    // 0x395c08: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x395c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395c0c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x395C0Cu;
    {
        const bool branch_taken_0x395c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C0Cu;
        // 0x395c10: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c0c) {
            ctx->pc = 0x395C94u;
            goto label_395c94;
        }
    }
    ctx->pc = 0x395C14u;
    // 0x395c14: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x395c14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395c18: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x395c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x395c1c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395C1Cu;
    {
        const bool branch_taken_0x395c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C1Cu;
        // 0x395c20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c1c) {
            ctx->pc = 0x395C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395c08;
        }
    }
    ctx->pc = 0x395C24u;
    // 0x395c24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_395c28:
    // 0x395c28: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x395c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x395c2c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x395c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x395c30: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x395c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x395c34: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x395c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x395c38: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x395c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x395c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x395c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395c40: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x395c40u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 2));
    // 0x395c44: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x395C44u;
    {
        const bool branch_taken_0x395c44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C44u;
        // 0x395c48: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c44) {
            ctx->pc = 0x395D84u;
            goto label_395d84;
        }
    }
    ctx->pc = 0x395C4Cu;
    // 0x395c4c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x395c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x395c50: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x395c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x395c54: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x395c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x395c58: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x395c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x395c5c: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x395C5Cu;
    {
        const bool branch_taken_0x395c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x395C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C5Cu;
        // 0x395c60: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c5c) {
            ctx->pc = 0x395D24u;
            goto label_395d24;
        }
    }
    ctx->pc = 0x395C64u;
    // 0x395c64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395c68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x395c6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x395c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x395c70: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x395c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x395c74: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x395c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x395c78: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x395C78u;
    {
        const bool branch_taken_0x395c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C78u;
        // 0x395c7c: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c78) {
            ctx->pc = 0x395D34u;
            goto label_395d34;
        }
    }
    ctx->pc = 0x395C80u;
label_395c80:
    // 0x395c80: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x395c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x395c84: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x395C84u;
    SET_GPR_U32(ctx, 31, 0x395C8Cu);
    ctx->pc = 0x395C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C84u;
    // 0x395c88: 0x2484dd80  addiu       $a0, $a0, -0x2280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x395C84u, 0x395C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395C8Cu;
label_395c8c:
    // 0x395c8c: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x395C8Cu;
    {
        const bool branch_taken_0x395c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395C8Cu;
        // 0x395c90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c8c) {
            ctx->pc = 0x395F3Cu;
            goto label_395f3c;
        }
    }
    ctx->pc = 0x395C94u;
label_395c94:
    // 0x395c94: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x395c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x395c98: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x395C98u;
    SET_GPR_U32(ctx, 31, 0x395CA0u);
    ctx->pc = 0x395C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395C98u;
    // 0x395c9c: 0x2484ddb8  addiu       $a0, $a0, -0x2248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x395C98u, 0x395CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395CA0u;
label_395ca0:
    // 0x395ca0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x395ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x395ca4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x395ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x395ca8: 0x24428570  addiu       $v0, $v0, -0x7A90
    ctx->pc = 0x395ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935920));
    // 0x395cac: 0x34845000  ori         $a0, $a0, 0x5000
    ctx->pc = 0x395cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20480);
    // 0x395cb0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x395cb0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3F8570u));
    // 0x395cb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x395cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395cb8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x395cb8u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 3));
    // 0x395cbc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x395CBCu;
    {
        const bool branch_taken_0x395cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CBCu;
        // 0x395cc0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cbc) {
            ctx->pc = 0x395F40u;
            goto label_395f40;
        }
    }
    ctx->pc = 0x395CC4u;
label_395cc4:
    // 0x395cc4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x395cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x395cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x395CC8u;
    {
        const bool branch_taken_0x395cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395CC8u;
        // 0x395ccc: 0x2484dde8  addiu       $a0, $a0, -0x2218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cc8) {
            ctx->pc = 0x395CD8u;
            goto label_395cd8;
        }
    }
    ctx->pc = 0x395CD0u;
label_395cd0:
    // 0x395cd0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x395cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x395cd4: 0x2484de28  addiu       $a0, $a0, -0x21D8
    ctx->pc = 0x395cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958632));
label_395cd8:
    // 0x395cd8: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x395CD8u;
    SET_GPR_U32(ctx, 31, 0x395CE0u);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x395CD8u, 0x395CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395CE0u;
label_395ce0:
    // 0x395ce0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x395ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x395ce4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x395ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x395ce8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x395ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x395cec: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x395cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x395cf0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x395cf0u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x395cf4: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x395cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x395cf8: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x395cf8u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x395cfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x395d00: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x395d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395d04: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x395d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x395d08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395d0c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x395d0cu;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 4));
    // 0x395d10: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x395d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
    // 0x395d14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x395d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x395d18: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x395d18u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 4));
    // 0x395d1c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x395D1Cu;
    {
        const bool branch_taken_0x395d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D1Cu;
        // 0x395d20: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d1c) {
            ctx->pc = 0x395F40u;
            goto label_395f40;
        }
    }
    ctx->pc = 0x395D24u;
label_395d24:
    // 0x395d24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395d28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x395d2c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x395d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x395d30: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x395d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_395d34:
    // 0x395d34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x395d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x395d38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x395d3c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x395d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x395d40: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x395d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x395d44: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x395d44u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x395d48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x395d48u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x395d4c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x395d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x395d50: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x395D50u;
    {
        const bool branch_taken_0x395d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D50u;
        // 0x395d54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d50) {
            ctx->pc = 0x395D84u;
            goto label_395d84;
        }
    }
    ctx->pc = 0x395D58u;
    // 0x395d58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395d5c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x395d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x395d60: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x395d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x395d64: 0x0  nop
    ctx->pc = 0x395d64u;
    // NOP
label_395d68:
    // 0x395d68: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x395d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395d6c: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x395D6Cu;
    {
        const bool branch_taken_0x395d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D6Cu;
        // 0x395d70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d6c) {
            ctx->pc = 0x395CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395cc4;
        }
    }
    ctx->pc = 0x395D74u;
    // 0x395d74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395d78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x395d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x395d7c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395D7Cu;
    {
        const bool branch_taken_0x395d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D7Cu;
        // 0x395d80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d7c) {
            ctx->pc = 0x395D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395d68;
        }
    }
    ctx->pc = 0x395D84u;
label_395d84:
    // 0x395d84: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x395D84u;
    {
        const bool branch_taken_0x395d84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395D84u;
        // 0x395d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d84) {
            ctx->pc = 0x395DFCu;
            goto label_395dfc;
        }
    }
    ctx->pc = 0x395D8Cu;
    // 0x395d8c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x395d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x395d90: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x395d90u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x395d94: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x395d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x395d98: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x395d98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
    // 0x395d9c: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x395d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x395da0: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x395da0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
    // 0x395da4: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x395da4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
label_395da8:
    // 0x395da8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x395da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x395dac: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x395dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x395db0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x395DB0u;
    {
        const bool branch_taken_0x395db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DB0u;
        // 0x395db4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395db0) {
            ctx->pc = 0x395DE4u;
            goto label_395de4;
        }
    }
    ctx->pc = 0x395DB8u;
    // 0x395db8: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x395db8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x395dbc: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x395dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x395dc0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x395dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x395dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395dc8:
    // 0x395dc8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x395dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395dcc: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x395DCCu;
    {
        const bool branch_taken_0x395dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DCCu;
        // 0x395dd0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395dcc) {
            ctx->pc = 0x395CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395cd0;
        }
    }
    ctx->pc = 0x395DD4u;
    // 0x395dd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395dd8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x395dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x395ddc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395DDCu;
    {
        const bool branch_taken_0x395ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DDCu;
        // 0x395de0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ddc) {
            ctx->pc = 0x395DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395dc8;
        }
    }
    ctx->pc = 0x395DE4u;
label_395de4:
    // 0x395de4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x395de4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x395de8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395dec: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x395decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x395df0: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x395df0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x395df4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x395DF4u;
    {
        const bool branch_taken_0x395df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DF4u;
        // 0x395df8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395df4) {
            ctx->pc = 0x395DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395da8;
        }
    }
    ctx->pc = 0x395DFCu;
label_395dfc:
    // 0x395dfc: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x395DFCu;
    {
        const bool branch_taken_0x395dfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395DFCu;
        // 0x395e00: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395dfc) {
            ctx->pc = 0x395EF0u;
            goto label_395ef0;
        }
    }
    ctx->pc = 0x395E04u;
    // 0x395e04: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x395e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x395e08: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x395e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x395e0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x395e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x395e10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x395e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x395e14: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x395E14u;
    {
        const bool branch_taken_0x395e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E14u;
        // 0x395e18: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e14) {
            ctx->pc = 0x395E48u;
            goto label_395e48;
        }
    }
    ctx->pc = 0x395E1Cu;
    // 0x395e1c: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x395e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x395e20: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x395e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x395e24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395e28:
    // 0x395e28: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x395e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395e2c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x395E2Cu;
    {
        const bool branch_taken_0x395e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E2Cu;
        // 0x395e30: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e2c) {
            ctx->pc = 0x395CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395cd0;
        }
    }
    ctx->pc = 0x395E34u;
    // 0x395e34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395e38: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x395e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x395e3c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395E3Cu;
    {
        const bool branch_taken_0x395e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E3Cu;
        // 0x395e40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e3c) {
            ctx->pc = 0x395E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395e28;
        }
    }
    ctx->pc = 0x395E44u;
    // 0x395e44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_395e48:
    // 0x395e48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395e4c: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x395e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x395e50: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x395e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395e54: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x395E54u;
    {
        const bool branch_taken_0x395e54 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E54u;
        // 0x395e58: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e54) {
            ctx->pc = 0x395E84u;
            goto label_395e84;
        }
    }
    ctx->pc = 0x395E5Cu;
    // 0x395e5c: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x395e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_395e60:
    // 0x395e60: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x395e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x395e64: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x395e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x395e68: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x395e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x395e6c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x395e6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x395e70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x395e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x395e74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395e78: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x395e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x395e7c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x395E7Cu;
    {
        const bool branch_taken_0x395e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E7Cu;
        // 0x395e80: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e7c) {
            ctx->pc = 0x395E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395e60;
        }
    }
    ctx->pc = 0x395E84u;
label_395e84:
    // 0x395e84: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x395E84u;
    {
        const bool branch_taken_0x395e84 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x395E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395E84u;
        // 0x395e88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e84) {
            ctx->pc = 0x395EF0u;
            goto label_395ef0;
        }
    }
    ctx->pc = 0x395E8Cu;
    // 0x395e8c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x395e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x395e90: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x395e90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x395e94: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x395e94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x395e98: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x395e98u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
    // 0x395e9c: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x395e9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
label_395ea0:
    // 0x395ea0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x395ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x395ea4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x395ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x395ea8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x395EA8u;
    {
        const bool branch_taken_0x395ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EA8u;
        // 0x395eac: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ea8) {
            ctx->pc = 0x395EDCu;
            goto label_395edc;
        }
    }
    ctx->pc = 0x395EB0u;
    // 0x395eb0: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x395eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x395eb4: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x395eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x395eb8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x395eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x395ebc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395ebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395ec0:
    // 0x395ec0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x395ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x395ec4: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x395EC4u;
    {
        const bool branch_taken_0x395ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EC4u;
        // 0x395ec8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ec4) {
            ctx->pc = 0x395CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395cd0;
        }
    }
    ctx->pc = 0x395ECCu;
    // 0x395ecc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x395eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x395ed0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x395ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x395ed4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x395ED4u;
    {
        const bool branch_taken_0x395ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x395ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395ED4u;
        // 0x395ed8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ed4) {
            ctx->pc = 0x395EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395ec0;
        }
    }
    ctx->pc = 0x395EDCu;
label_395edc:
    // 0x395edc: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x395edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x395ee0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x395ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x395ee4: 0xb6182a  slt         $v1, $a1, $s6
    ctx->pc = 0x395ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x395ee8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x395EE8u;
    {
        const bool branch_taken_0x395ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x395EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395EE8u;
        // 0x395eec: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ee8) {
            ctx->pc = 0x395EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_395ea0;
        }
    }
    ctx->pc = 0x395EF0u;
label_395ef0:
    // 0x395ef0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x395ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x395ef4: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x395ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x395ef8: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x395ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x395efc: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x395efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x395f00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x395f00u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x395f04: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x395f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395f08: 0xc0ebff8  jal         func_3AFFE0
    ctx->pc = 0x395F08u;
    SET_GPR_U32(ctx, 31, 0x395F10u);
    ctx->pc = 0x395F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395F08u;
    // 0x395f0c: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFFE0u, 0x395F08u, 0x395F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395F10u;
label_395f10:
    // 0x395f10: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x395f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x395f14: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x395f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x395f18: 0x24638570  addiu       $v1, $v1, -0x7A90
    ctx->pc = 0x395f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935920));
    // 0x395f1c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x395f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x395f20: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x395f20u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3F8570u));
    // 0x395f24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x395f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x395f28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x395f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x395f2c: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x395f2cu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x395f30: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x395f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x395f34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x395f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395f38: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x395f38u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 5));
label_395f3c:
    // 0x395f3c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x395f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_395f40:
    // 0x395f40: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x395f40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x395f44: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x395f44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x395f48: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x395f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x395f4c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x395f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x395f50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x395f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x395f54: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x395f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395f58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x395f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x395F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395F5Cu;
        // 0x395f60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395F64u;
    // 0x395f64: 0x0  nop
    ctx->pc = 0x395f64u;
    // NOP
    ctx->pc = 0x395f68u;
}

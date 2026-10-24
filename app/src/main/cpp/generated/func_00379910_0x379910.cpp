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

// Function: func_00379910
// Address: 0x379910 - 0x379bc0
void func_00379910_0x379910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00379910_0x379910");
#endif

    switch (ctx->pc) {
        case 0x3799d4u: goto label_3799d4;
        case 0x379a64u: goto label_379a64;
        case 0x379a88u: goto label_379a88;
        case 0x379aacu: goto label_379aac;
        case 0x379accu: goto label_379acc;
        case 0x379ae4u: goto label_379ae4;
        case 0x379b04u: goto label_379b04;
        case 0x379b24u: goto label_379b24;
        case 0x379b3cu: goto label_379b3c;
        case 0x379b78u: goto label_379b78;
        case 0x379b9cu: goto label_379b9c;
        default: break;
    }

    ctx->pc = 0x379910u;

    // 0x379910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x379910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x379914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379918: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x379918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37991c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x379920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379924: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x379924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x379928: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x379928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37992c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x379930: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x379930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x379934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379938: 0x80830007  lb          $v1, 0x7($a0)
    ctx->pc = 0x379938u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x37993c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x37993Cu;
    {
        const bool branch_taken_0x37993c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x379940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37993Cu;
        // 0x379940: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37993c) {
            ctx->pc = 0x379980u;
            goto label_379980;
        }
    }
    ctx->pc = 0x379944u;
    // 0x379944: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x379944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x379948: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x379948u;
    {
        const bool branch_taken_0x379948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379948) {
            ctx->pc = 0x37994Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379948u;
            // 0x37994c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379960u;
            goto label_379960;
        }
    }
    ctx->pc = 0x379950u;
    // 0x379950: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x379950u;
    {
        const bool branch_taken_0x379950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379950) {
            ctx->pc = 0x379954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379950u;
            // 0x379954: 0x80830025  lb          $v1, 0x25($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379970u;
            goto label_379970;
        }
    }
    ctx->pc = 0x379958u;
    // 0x379958: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x379958u;
    {
        const bool branch_taken_0x379958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379958u;
        // 0x37995c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379958) {
            ctx->pc = 0x3799B0u;
            goto label_3799b0;
        }
    }
    ctx->pc = 0x379960u;
label_379960:
    // 0x379960: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x379960u;
    {
        const bool branch_taken_0x379960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x379964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379960u;
        // 0x379964: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379960) {
            ctx->pc = 0x379994u;
            goto label_379994;
        }
    }
    ctx->pc = 0x379968u;
    // 0x379968: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x379968u;
    {
        const bool branch_taken_0x379968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379968u;
        // 0x37996c: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379968) {
            ctx->pc = 0x3799B4u;
            goto label_3799b4;
        }
    }
    ctx->pc = 0x379970u;
label_379970:
    // 0x379970: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x379970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x379974: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x379974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x379978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x379978u;
    {
        const bool branch_taken_0x379978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379978u;
        // 0x37997c: 0x244221e8  addiu       $v0, $v0, 0x21E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379978) {
            ctx->pc = 0x3799A4u;
            goto label_3799a4;
        }
    }
    ctx->pc = 0x379980u;
label_379980:
    // 0x379980: 0x80830025  lb          $v1, 0x25($a0)
    ctx->pc = 0x379980u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x379984: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x379984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x379988: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x379988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37998c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37998Cu;
    {
        const bool branch_taken_0x37998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37998Cu;
        // 0x379990: 0x24422368  addiu       $v0, $v0, 0x2368 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37998c) {
            ctx->pc = 0x3799A4u;
            goto label_3799a4;
        }
    }
    ctx->pc = 0x379994u;
label_379994:
    // 0x379994: 0x80830025  lb          $v1, 0x25($a0)
    ctx->pc = 0x379994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x379998: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x379998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37999c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x37999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3799a0: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x3799a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
label_3799a4:
    // 0x3799a4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x3799a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3799a8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x3799a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3799ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3799acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3799b0:
    // 0x3799b0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3799b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_3799b4:
    // 0x3799b4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3799b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3799b8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3799b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3799bc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3799bcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3799c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3799c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799c4: 0x24e7b768  addiu       $a3, $a3, -0x4898
    ctx->pc = 0x3799c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948712));
    // 0x3799c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3799c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799cc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3799CCu;
    SET_GPR_U32(ctx, 31, 0x3799D4u);
    ctx->pc = 0x3799D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799CCu;
    // 0x3799d0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3799CCu, 0x3799D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799D4u;
label_3799d4:
    // 0x3799d4: 0x82230009  lb          $v1, 0x9($s1)
    ctx->pc = 0x3799d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x3799d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3799d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3799dc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3799DCu;
    {
        const bool branch_taken_0x3799dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3799E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799DCu;
        // 0x3799e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799dc) {
            ctx->pc = 0x379A1Cu;
            goto label_379a1c;
        }
    }
    ctx->pc = 0x3799E4u;
    // 0x3799e4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3799E4u;
    {
        const bool branch_taken_0x3799e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3799e4) {
            ctx->pc = 0x3799E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3799E4u;
            // 0x3799e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3799FCu;
            goto label_3799fc;
        }
    }
    ctx->pc = 0x3799ECu;
    // 0x3799ec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3799ECu;
    {
        const bool branch_taken_0x3799ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3799F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799ECu;
        // 0x3799f0: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799ec) {
            ctx->pc = 0x379A0Cu;
            goto label_379a0c;
        }
    }
    ctx->pc = 0x3799F4u;
    // 0x3799f4: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x3799F4u;
    {
        const bool branch_taken_0x3799f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3799F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3799F4u;
        // 0x3799f8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3799f4) {
            ctx->pc = 0x379BA0u;
            goto label_379ba0;
        }
    }
    ctx->pc = 0x3799FCu;
label_3799fc:
    // 0x3799fc: 0x50620051  beql        $v1, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3799FCu;
    {
        const bool branch_taken_0x3799fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3799fc) {
            ctx->pc = 0x379A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3799FCu;
            // 0x379a00: 0x82230008  lb          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379B44u;
            goto label_379b44;
        }
    }
    ctx->pc = 0x379A04u;
    // 0x379a04: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x379A04u;
    {
        const bool branch_taken_0x379a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A04u;
        // 0x379a08: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a04) {
            ctx->pc = 0x379BA0u;
            goto label_379ba0;
        }
    }
    ctx->pc = 0x379A0Cu;
label_379a0c:
    // 0x379a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a10: 0x24e7b780  addiu       $a3, $a3, -0x4880
    ctx->pc = 0x379a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948736));
    // 0x379a14: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x379A14u;
    {
        const bool branch_taken_0x379a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A14u;
        // 0x379a18: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a14) {
            ctx->pc = 0x379B34u;
            goto label_379b34;
        }
    }
    ctx->pc = 0x379A1Cu;
label_379a1c:
    // 0x379a1c: 0x82220008  lb          $v0, 0x8($s1)
    ctx->pc = 0x379a1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x379a20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x379A20u;
    {
        const bool branch_taken_0x379a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x379A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A20u;
        // 0x379a24: 0x92230008  lbu         $v1, 0x8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a20) {
            ctx->pc = 0x379A34u;
            goto label_379a34;
        }
    }
    ctx->pc = 0x379A28u;
    // 0x379a28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x379a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x379a2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x379A2Cu;
    {
        const bool branch_taken_0x379a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A2Cu;
        // 0x379a30: 0x80530000  lb          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a2c) {
            ctx->pc = 0x379A3Cu;
            goto label_379a3c;
        }
    }
    ctx->pc = 0x379A34u;
label_379a34:
    // 0x379a34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x379a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x379a38: 0x84540000  lh          $s4, 0x0($v0)
    ctx->pc = 0x379a38u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_379a3c:
    // 0x379a3c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x379A3Cu;
    {
        const bool branch_taken_0x379a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x379A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A3Cu;
        // 0x379a40: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a3c) {
            ctx->pc = 0x379A6Cu;
            goto label_379a6c;
        }
    }
    ctx->pc = 0x379A44u;
    // 0x379a44: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x379a44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a48: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379a48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379a4c: 0x24e7b790  addiu       $a3, $a3, -0x4870
    ctx->pc = 0x379a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948752));
    // 0x379a50: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x379a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379a54: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x379a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379a58: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x379a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379a5c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379A5Cu;
    SET_GPR_U32(ctx, 31, 0x379A64u);
    ctx->pc = 0x379A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A5Cu;
    // 0x379a60: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379A5Cu, 0x379A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A64u;
label_379a64:
    // 0x379a64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x379A64u;
    {
        const bool branch_taken_0x379a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A64u;
        // 0x379a68: 0x8628000a  lh          $t0, 0xA($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379a64) {
            ctx->pc = 0x379A8Cu;
            goto label_379a8c;
        }
    }
    ctx->pc = 0x379A6Cu;
label_379a6c:
    // 0x379a6c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379a70: 0x24e7b790  addiu       $a3, $a3, -0x4870
    ctx->pc = 0x379a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948752));
    // 0x379a74: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x379a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379a78: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x379a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379a7c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x379a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379a80: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379A80u;
    SET_GPR_U32(ctx, 31, 0x379A88u);
    ctx->pc = 0x379A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A80u;
    // 0x379a84: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379A80u, 0x379A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A88u;
label_379a88:
    // 0x379a88: 0x8628000a  lh          $t0, 0xA($s1)
    ctx->pc = 0x379a88u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
label_379a8c:
    // 0x379a8c: 0x128403  sra         $s0, $s2, 16
    ctx->pc = 0x379a8cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
    // 0x379a90: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379a90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379a94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a98: 0x24e7b7a8  addiu       $a3, $a3, -0x4858
    ctx->pc = 0x379a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948776));
    // 0x379a9c: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x379a9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379aa0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x379aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x379aa4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379AA4u;
    SET_GPR_U32(ctx, 31, 0x379AACu);
    ctx->pc = 0x379AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AA4u;
    // 0x379aa8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379AA4u, 0x379AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379AACu;
label_379aac:
    // 0x379aac: 0x8628000c  lh          $t0, 0xC($s1)
    ctx->pc = 0x379aacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x379ab0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379ab4: 0x24e7b7c0  addiu       $a3, $a3, -0x4840
    ctx->pc = 0x379ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948800));
    // 0x379ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379abc: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x379abcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ac0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x379ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x379ac4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379AC4u;
    SET_GPR_U32(ctx, 31, 0x379ACCu);
    ctx->pc = 0x379AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AC4u;
    // 0x379ac8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379AC4u, 0x379ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379ACCu;
label_379acc:
    // 0x379acc: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ad4: 0x24e7b7d8  addiu       $a3, $a3, -0x4828
    ctx->pc = 0x379ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948824));
    // 0x379ad8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x379ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x379adc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379ADCu;
    SET_GPR_U32(ctx, 31, 0x379AE4u);
    ctx->pc = 0x379AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379ADCu;
    // 0x379ae0: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379ADCu, 0x379AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379AE4u;
label_379ae4:
    // 0x379ae4: 0x8628000e  lh          $t0, 0xE($s1)
    ctx->pc = 0x379ae4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x379ae8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379aec: 0x24e7b7f0  addiu       $a3, $a3, -0x4810
    ctx->pc = 0x379aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948848));
    // 0x379af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379af4: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x379af4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379af8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x379af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x379afc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379AFCu;
    SET_GPR_U32(ctx, 31, 0x379B04u);
    ctx->pc = 0x379B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379AFCu;
    // 0x379b00: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379AFCu, 0x379B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B04u;
label_379b04:
    // 0x379b04: 0x86280010  lh          $t0, 0x10($s1)
    ctx->pc = 0x379b04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x379b08: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379b08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379b0c: 0x24e7b808  addiu       $a3, $a3, -0x47F8
    ctx->pc = 0x379b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948872));
    // 0x379b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b14: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x379b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x379b18: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x379b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379b1c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379B1Cu;
    SET_GPR_U32(ctx, 31, 0x379B24u);
    ctx->pc = 0x379B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B1Cu;
    // 0x379b20: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379B1Cu, 0x379B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B24u;
label_379b24:
    // 0x379b24: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379b24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b2c: 0x24e7b820  addiu       $a3, $a3, -0x47E0
    ctx->pc = 0x379b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948896));
    // 0x379b30: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x379b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_379b34:
    // 0x379b34: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379B34u;
    SET_GPR_U32(ctx, 31, 0x379B3Cu);
    ctx->pc = 0x379B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B34u;
    // 0x379b38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379B34u, 0x379B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B3Cu;
label_379b3c:
    // 0x379b3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x379B3Cu;
    {
        const bool branch_taken_0x379b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B3Cu;
        // 0x379b40: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b3c) {
            ctx->pc = 0x379BA0u;
            goto label_379ba0;
        }
    }
    ctx->pc = 0x379B44u;
label_379b44:
    // 0x379b44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x379b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379b48: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379B48u;
    {
        const bool branch_taken_0x379b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x379B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B48u;
        // 0x379b4c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b48) {
            ctx->pc = 0x379B58u;
            goto label_379b58;
        }
    }
    ctx->pc = 0x379B50u;
    // 0x379b50: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x379B50u;
    {
        const bool branch_taken_0x379b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x379b50) {
            ctx->pc = 0x379B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379B50u;
            // 0x379b54: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379B80u;
            goto label_379b80;
        }
    }
    ctx->pc = 0x379B58u;
label_379b58:
    // 0x379b58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x379b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x379b5c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b64: 0x24e7b838  addiu       $a3, $a3, -0x47C8
    ctx->pc = 0x379b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948920));
    // 0x379b68: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x379b68u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379b6c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x379b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379b70: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379B70u;
    SET_GPR_U32(ctx, 31, 0x379B78u);
    ctx->pc = 0x379B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B70u;
    // 0x379b74: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379B70u, 0x379B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B78u;
label_379b78:
    // 0x379b78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x379B78u;
    {
        const bool branch_taken_0x379b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379B78u;
        // 0x379b7c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379b78) {
            ctx->pc = 0x379BA0u;
            goto label_379ba0;
        }
    }
    ctx->pc = 0x379B80u;
label_379b80:
    // 0x379b80: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379b80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379b88: 0x24e7b850  addiu       $a3, $a3, -0x47B0
    ctx->pc = 0x379b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948944));
    // 0x379b8c: 0x94480000  lhu         $t0, 0x0($v0)
    ctx->pc = 0x379b8cu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x379b90: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x379b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379b94: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379B94u;
    SET_GPR_U32(ctx, 31, 0x379B9Cu);
    ctx->pc = 0x379B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379B94u;
    // 0x379b98: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379B94u, 0x379B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379B9Cu;
label_379b9c:
    // 0x379b9c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x379b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_379ba0:
    // 0x379ba0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x379ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379ba4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x379ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379ba8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x379ba8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379bac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x379bacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x379BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379BB4u;
        // 0x379bb8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379BBCu;
    // 0x379bbc: 0x0  nop
    ctx->pc = 0x379bbcu;
    // NOP
    ctx->pc = 0x379bc0u;
}
